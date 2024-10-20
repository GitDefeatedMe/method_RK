#pragma once
#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> rk1(double x, double v1, double v2, double h, double(*f1)(double, double, double), double(*f2)(double, double, double))
{
    std::vector<double> result(3);
    result[0] = x + h;
    result[1] = v1 + h * f1(x, v1, v2);
    result[2] = v2 + h * f2(x, v1, v2);
    return result;
}
std::vector<double> rk2(double x, double v1, double v2, double h, double(*f1)(double, double, double), double(*f2)(double, double, double))
{
    std::vector<double> result(3);
    result[0] = x + h;
    result[1] = v1 + (f1(x, v1, v2) + f1(x + h, v1 + f1(x, v1, v2) * h, v2 + f2(x, v1, v2) * h)) * h / 2;
    result[2] = v2 + (f2(x, v1, v2) + f2(x + h, v1 + f1(x, v1, v2) * h, v2 + f2(x, v1, v2) * h)) * h / 2;
    return result;
}
std::vector<double> rk4(double x, double v1, double v2, double h, double(*f1)(double, double, double), double(*f2)(double, double, double))
{
    std::vector<double> result(3);
    double k1, k2, k3, k4, l1, l2, l3, l4;
    k1 = f1(x, v1, v2) * h;
    l1 = f2(x, v1, v2) * h;

    k2 = f1(x + 0.5 * h, v1 + 0.5 * k1, v2 + 0.5 * l1) * h;
    l2 = f2(x + 0.5 * h, v1 + 0.5 * k1, v2 + 0.5 * l1) * h;

    k3 = f1(x + 0.5 * h, v1 + 0.5 * k2, v2 + 0.5 * l2) * h;
    l3 = f2(x + 0.5 * h, v1 + 0.5 * k2, v2 + 0.5 * l2) * h;

    k4 = f1(x + h, v1 + k3, v2 + l3) * h;
    l4 = f2(x + h, v1 + k3, v2 + l3) * h;

    result[0] = x + h;
    result[1] = v1 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    result[2] = v2 + (l1 + 2 * l2 + 2 * l3 + l4) / 6;
    return result;
}

class SDU
{
public:
    SDU(double(*right_part_1)(double, double, double), double(*right_part_2)(double, double, double))
    {
        f1 = right_part_1;
        f2 = right_part_2;
    }
    ~SDU() {}

    std::vector<std::vector<double>> get_solution(double x0, double v1_0, double v2_0, double h, int steps, int rk_order, bool local_error_control, double E, bool use_xr, bool use_ur, bool use_u2r, double xr, double ur, double u2r)
    {
        std::vector<std::vector<double>> result(10);
        std::vector<double> step(3);
        std::vector<double> half_step(3);
        std::vector<double>(*rk)(double, double, double, double, double(*right_part_1)(double, double, double), double(*right_part_2)(double, double, double));
        int mul = 0, div = 0;
        double S = 0;

        if (rk_order == 1)
            rk = rk1;
        else if (rk_order == 2)
            rk = rk2;
        else if (rk_order == 4)
            rk = rk4;
        else
            throw std::exception("NOT SUCH RK");


        steps += 2;
        result[0].resize(steps); // step num
        result[1].resize(steps); // x
        result[2].resize(steps); // u
        result[3].resize(steps); // u2
        result[4].resize(steps); // dopu
        result[5].resize(steps); // dopu2
        result[6].resize(steps); // norm(x)
        result[7].resize(steps); // step
        result[8].resize(steps); // div
        result[9].resize(steps); // mul

        result[0][0] = 0;
        result[1][0] = x0;
        result[2][0] = v1_0;
        result[3][0] = v2_0;
        result[4][0] = 0;
        result[5][0] = 0;
        result[6][0] = 0;
        result[7][0] = h;
        result[8][0] = div;
        result[9][0] = mul;

        // ( )
        int i = 1; bool calc = false;
        for (; i < steps;)
        {
            step = rk(result[1][i - 1], result[2][i - 1], result[3][i - 1], h, f1, f2);
            half_step = rk(result[1][i - 1], result[2][i - 1], result[3][i - 1], h / 2, f1, f2);
            half_step = rk(half_step[0], half_step[1], half_step[2], h / 2, f1, f2);
            //std::cout << i << '\n';

            S = norm((half_step[1] - step[1]), (half_step[2] - step[2])) / (std::pow(2., (double)rk_order) - 1.);

            if (!local_error_control)
            {
                result[0][i] = i;
                result[1][i] = step[0];
                result[2][i] = step[1];
                result[3][i] = step[2];
                result[4][i] = half_step[1];
                result[5][i] = half_step[2];
                result[6][i] = S;
                result[7][i] = h;
                result[8][i] = div;
                result[9][i] = mul;
                i++;
                calc = true;
            }
            else
            {
                if (S > E)
                {
                    h /= 2;
                    div++; calc = false;
                }
                else if (S < E / (std::pow(2., rk_order + 1.)))
                {
                    result[0][i] = i;
                    result[1][i] = step[0];
                    result[2][i] = step[1];
                    result[3][i] = step[2];
                    result[4][i] = half_step[1];
                    result[5][i] = half_step[2];
                    result[6][i] = S;
                    result[7][i] = h;
                    result[8][i] = div;
                    result[9][i] = mul;
                    mul++; h *= 2; i++; calc = true;
                }
                else
                {
                    result[0][i] = i;
                    result[1][i] = step[0];
                    result[2][i] = step[1];
                    result[3][i] = step[2];
                    result[4][i] = half_step[1];
                    result[5][i] = half_step[2];
                    result[6][i] = S;
                    result[7][i] = h;
                    result[8][i] = div;
                    result[9][i] = mul;
                    i++; calc = true;
                }
            }
            if (calc && use_xr && ((result[1][i - 2] < xr && result[1][i - 1] >= xr) || (result[1][i - 2] > xr && result[1][i - 1] <= xr)))
            {
                i--;
                if (h < 0)
                    h = -std::abs(result[1][i - 1] - xr);
                else
                    h = std::abs(result[1][i - 1] - xr);

                step = rk(result[1][i - 1], result[2][i - 1], result[3][i - 1], h, f1, f2);
                half_step = rk(result[1][i - 1], result[2][i - 1], result[3][i - 1], h / 2, f1, f2);
                half_step = rk(half_step[0], half_step[1], half_step[2], h / 2, f1, f2);
                result[0][i] = i;
                result[1][i] = step[0];
                result[2][i] = step[1];
                result[3][i] = step[2];
                result[4][i] = half_step[1];
                result[5][i] = half_step[2];
                result[6][i] = S;
                result[7][i] = h;
                result[8][i] = div;
                result[9][i] = mul;
                i += 2;
                break;
            }
            if (calc && use_ur && ((result[2][i - 2] <= ur && result[2][i - 1] > ur) || (result[2][i - 2] >= ur && result[2][i - 1] < ur)))
            {
                std::cout << result[2][i - 1];
                break;
            }
            if (calc && use_u2r && ((result[3][i - 2] <= u2r && result[3][i - 1] > u2r) || (result[3][i - 2] >= u2r && result[3][i - 1] < u2r)))
                break;

        }
        result[0].resize(i - 1);
        result[1].resize(i - 1);
        result[2].resize(i - 1);
        result[3].resize(i - 1);
        result[4].resize(i - 1);
        result[5].resize(i - 1);
        result[6].resize(i - 1);
        result[7].resize(i - 1);
        result[8].resize(i - 1);
        result[9].resize(i - 1);
        return result;
    }
private:
    double(*f1)(double, double, double);
    double(*f2)(double, double, double);

    double norm(double l, double r)
    {
        //if (abs(l) > abs(r))
        //    return abs(l);
        //else
        //    return abs(r);
        return sqrt(l * l + r * r);
    }
};