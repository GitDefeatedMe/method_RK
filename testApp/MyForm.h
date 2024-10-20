#pragma once
#include <iostream>
#include <sdu.h>
#include <vector>
#include <windows.h>
#include <task.h>
#include <methods.h>

double g = 9.8, L = 0.1;

double f1(double x = 0, double v1 = 0, double v2 = 0)
{
	return v2;
}

double f2(double x = 0, double v1 = 0, double v2 = 0)
{
	return -g * sin(v1) / L;
}
SDU sol(f1, f2);



namespace testApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lable_x0;
	private: System::Windows::Forms::TextBox^ input_x;
	private: System::Windows::Forms::Button^ start_chm;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ input_u;

	private: System::Windows::Forms::Label^ label_v0;
	private: System::Windows::Forms::TextBox^ input_u2;


	private: System::Windows::Forms::Label^ label_v2_0;
	private: System::Windows::Forms::TextBox^ input_step;
	private: System::Windows::Forms::Label^ label_step;
	private: System::Windows::Forms::ListBox^ rk_order;
	private: System::Windows::Forms::Label^ label_ord;
	private: System::Windows::Forms::TextBox^ input_x_gr;

	private: System::Windows::Forms::Label^ label_x_gr;
	private: System::Windows::Forms::TextBox^ input_u_gr;
	private: System::Windows::Forms::Label^ label_u_gr;
	private: System::Windows::Forms::TextBox^ input_u2_gr;
	private: System::Windows::Forms::Label^ label_u2_gr;
	private: System::Windows::Forms::CheckBox^ use_step_control;
	private: System::Windows::Forms::TextBox^ input_control;
	private: System::Windows::Forms::Label^ label_control;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ v2_v;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ v_x;
	private: System::Windows::Forms::TextBox^ input_stepsnum;
	private: System::Windows::Forms::Label^ label_steps;
	private: System::Windows::Forms::TextBox^ input_g;

	private: System::Windows::Forms::Label^ label_g;
	private: System::Windows::Forms::TextBox^ input_L;

	private: System::Windows::Forms::Label^ label_L;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ step_index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ud;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ du2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ step;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ div;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mul;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::Button^ open_task;
	private: System::Windows::Forms::Button^ buttonMethods;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		/// 
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->lable_x0 = (gcnew System::Windows::Forms::Label());
			this->input_x = (gcnew System::Windows::Forms::TextBox());
			this->start_chm = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->input_u = (gcnew System::Windows::Forms::TextBox());
			this->label_v0 = (gcnew System::Windows::Forms::Label());
			this->input_u2 = (gcnew System::Windows::Forms::TextBox());
			this->label_v2_0 = (gcnew System::Windows::Forms::Label());
			this->input_step = (gcnew System::Windows::Forms::TextBox());
			this->label_step = (gcnew System::Windows::Forms::Label());
			this->rk_order = (gcnew System::Windows::Forms::ListBox());
			this->label_ord = (gcnew System::Windows::Forms::Label());
			this->input_x_gr = (gcnew System::Windows::Forms::TextBox());
			this->label_x_gr = (gcnew System::Windows::Forms::Label());
			this->input_u_gr = (gcnew System::Windows::Forms::TextBox());
			this->label_u_gr = (gcnew System::Windows::Forms::Label());
			this->input_u2_gr = (gcnew System::Windows::Forms::TextBox());
			this->label_u2_gr = (gcnew System::Windows::Forms::Label());
			this->use_step_control = (gcnew System::Windows::Forms::CheckBox());
			this->input_control = (gcnew System::Windows::Forms::TextBox());
			this->label_control = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->step_index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->du2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->step = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->div = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mul = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2_v = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->v_x = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->input_stepsnum = (gcnew System::Windows::Forms::TextBox());
			this->label_steps = (gcnew System::Windows::Forms::Label());
			this->input_g = (gcnew System::Windows::Forms::TextBox());
			this->label_g = (gcnew System::Windows::Forms::Label());
			this->input_L = (gcnew System::Windows::Forms::TextBox());
			this->label_L = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->open_task = (gcnew System::Windows::Forms::Button());
			this->buttonMethods = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v2_v))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v_x))->BeginInit();
			this->SuspendLayout();
			// 
			// lable_x0
			// 
			this->lable_x0->AutoSize = true;
			this->lable_x0->Location = System::Drawing::Point(450, 69);
			this->lable_x0->Name = L"lable_x0";
			this->lable_x0->Size = System::Drawing::Size(68, 13);
			this->lable_x0->TabIndex = 1;
			this->lable_x0->Text = L"х начальное";
			// 
			// input_x
			// 
			this->input_x->Location = System::Drawing::Point(534, 66);
			this->input_x->Name = L"input_x";
			this->input_x->Size = System::Drawing::Size(100, 20);
			this->input_x->TabIndex = 2;
			// 
			// start_chm
			// 
			this->start_chm->Location = System::Drawing::Point(651, 144);
			this->start_chm->Name = L"start_chm";
			this->start_chm->Size = System::Drawing::Size(171, 52);
			this->start_chm->TabIndex = 3;
			this->start_chm->Text = L"Построить";
			this->start_chm->UseVisualStyleBackColor = true;
			this->start_chm->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Численное решение СОДУ 2-го порядка";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(280, 85);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// input_u
			// 
			this->input_u->Location = System::Drawing::Point(534, 92);
			this->input_u->Name = L"input_u";
			this->input_u->Size = System::Drawing::Size(100, 20);
			this->input_u->TabIndex = 7;
			// 
			// label_v0
			// 
			this->label_v0->AutoSize = true;
			this->label_v0->Location = System::Drawing::Point(450, 95);
			this->label_v0->Name = L"label_v0";
			this->label_v0->Size = System::Drawing::Size(69, 13);
			this->label_v0->TabIndex = 6;
			this->label_v0->Text = L"u начальное";
			// 
			// input_u2
			// 
			this->input_u2->Location = System::Drawing::Point(534, 119);
			this->input_u2->Name = L"input_u2";
			this->input_u2->Size = System::Drawing::Size(100, 20);
			this->input_u2->TabIndex = 9;
			// 
			// label_v2_0
			// 
			this->label_v2_0->AutoSize = true;
			this->label_v2_0->Location = System::Drawing::Point(450, 121);
			this->label_v2_0->Name = L"label_v2_0";
			this->label_v2_0->Size = System::Drawing::Size(71, 13);
			this->label_v2_0->TabIndex = 8;
			this->label_v2_0->Text = L"u\' начальное";
			// 
			// input_step
			// 
			this->input_step->Location = System::Drawing::Point(534, 176);
			this->input_step->Name = L"input_step";
			this->input_step->Size = System::Drawing::Size(100, 20);
			this->input_step->TabIndex = 11;
			// 
			// label_step
			// 
			this->label_step->AutoSize = true;
			this->label_step->Location = System::Drawing::Point(450, 179);
			this->label_step->Name = L"label_step";
			this->label_step->Size = System::Drawing::Size(84, 13);
			this->label_step->TabIndex = 10;
			this->label_step->Text = L"начальный шаг";
			// 
			// rk_order
			// 
			this->rk_order->AccessibleName = L"";
			this->rk_order->FormattingEnabled = true;
			this->rk_order->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"4" });
			this->rk_order->Location = System::Drawing::Point(398, 69);
			this->rk_order->Name = L"rk_order";
			this->rk_order->Size = System::Drawing::Size(18, 43);
			this->rk_order->TabIndex = 12;
			// 
			// label_ord
			// 
			this->label_ord->AutoSize = true;
			this->label_ord->Location = System::Drawing::Point(343, 73);
			this->label_ord->Name = L"label_ord";
			this->label_ord->Size = System::Drawing::Size(49, 26);
			this->label_ord->TabIndex = 13;
			this->label_ord->Text = L"порядок\r\nметода\r\n";
			// 
			// input_x_gr
			// 
			this->input_x_gr->Location = System::Drawing::Point(722, 66);
			this->input_x_gr->Name = L"input_x_gr";
			this->input_x_gr->Size = System::Drawing::Size(100, 20);
			this->input_x_gr->TabIndex = 15;
			// 
			// label_x_gr
			// 
			this->label_x_gr->AutoSize = true;
			this->label_x_gr->Location = System::Drawing::Point(648, 69);
			this->label_x_gr->Name = L"label_x_gr";
			this->label_x_gr->Size = System::Drawing::Size(67, 13);
			this->label_x_gr->TabIndex = 14;
			this->label_x_gr->Text = L"х граничное";
			// 
			// input_u_gr
			// 
			this->input_u_gr->Location = System::Drawing::Point(722, 92);
			this->input_u_gr->Name = L"input_u_gr";
			this->input_u_gr->Size = System::Drawing::Size(100, 20);
			this->input_u_gr->TabIndex = 17;
			// 
			// label_u_gr
			// 
			this->label_u_gr->AutoSize = true;
			this->label_u_gr->Location = System::Drawing::Point(648, 95);
			this->label_u_gr->Name = L"label_u_gr";
			this->label_u_gr->Size = System::Drawing::Size(68, 13);
			this->label_u_gr->TabIndex = 16;
			this->label_u_gr->Text = L"u граничное";
			// 
			// input_u2_gr
			// 
			this->input_u2_gr->Location = System::Drawing::Point(722, 118);
			this->input_u2_gr->Name = L"input_u2_gr";
			this->input_u2_gr->Size = System::Drawing::Size(100, 20);
			this->input_u2_gr->TabIndex = 19;
			// 
			// label_u2_gr
			// 
			this->label_u2_gr->AutoSize = true;
			this->label_u2_gr->Location = System::Drawing::Point(648, 121);
			this->label_u2_gr->Name = L"label_u2_gr";
			this->label_u2_gr->Size = System::Drawing::Size(70, 13);
			this->label_u2_gr->TabIndex = 18;
			this->label_u2_gr->Text = L"u\' граничное";
			// 
			// use_step_control
			// 
			this->use_step_control->AutoSize = true;
			this->use_step_control->Location = System::Drawing::Point(333, 114);
			this->use_step_control->Name = L"use_step_control";
			this->use_step_control->Size = System::Drawing::Size(101, 30);
			this->use_step_control->TabIndex = 20;
			this->use_step_control->Text = L"использовать \r\nконтроль шага";
			this->use_step_control->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->use_step_control->UseVisualStyleBackColor = true;
			this->use_step_control->CheckedChanged += gcnew System::EventHandler(this, &MyForm::use_step_control_CheckedChanged);
			// 
			// input_control
			// 
			this->input_control->Location = System::Drawing::Point(333, 163);
			this->input_control->Name = L"input_control";
			this->input_control->Size = System::Drawing::Size(101, 20);
			this->input_control->TabIndex = 22;
			this->input_control->Visible = false;
			// 
			// label_control
			// 
			this->label_control->AutoSize = true;
			this->label_control->Location = System::Drawing::Point(330, 147);
			this->label_control->Name = L"label_control";
			this->label_control->Size = System::Drawing::Size(104, 13);
			this->label_control->TabIndex = 23;
			this->label_control->Text = L"критерий контроля";
			this->label_control->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->step_index,
					this->x, this->u, this->u2, this->ud, this->du2, this->S, this->step, this->div, this->mul
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Location = System::Drawing::Point(841, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(853, 743);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// step_index
			// 
			this->step_index->FillWeight = 80;
			this->step_index->HeaderText = L"номер шага";
			this->step_index->Name = L"step_index";
			this->step_index->ReadOnly = true;
			this->step_index->Width = 50;
			// 
			// x
			// 
			this->x->HeaderText = L"x";
			this->x->Name = L"x";
			this->x->ReadOnly = true;
			this->x->Width = 90;
			// 
			// u
			// 
			this->u->HeaderText = L"u";
			this->u->Name = L"u";
			this->u->ReadOnly = true;
			this->u->Width = 90;
			// 
			// u2
			// 
			this->u2->HeaderText = L"u\'";
			this->u2->Name = L"u2";
			this->u2->ReadOnly = true;
			this->u2->Width = 90;
			// 
			// ud
			// 
			this->ud->HeaderText = L"u^";
			this->ud->Name = L"ud";
			this->ud->ReadOnly = true;
			this->ud->Width = 90;
			// 
			// du2
			// 
			this->du2->HeaderText = L"u^\'";
			this->du2->Name = L"du2";
			this->du2->ReadOnly = true;
			this->du2->Width = 90;
			// 
			// S
			// 
			this->S->HeaderText = L"ОЛП";
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 130;
			// 
			// step
			// 
			this->step->HeaderText = L"шаг";
			this->step->Name = L"step";
			this->step->ReadOnly = true;
			this->step->Width = 50;
			// 
			// div
			// 
			this->div->HeaderText = L"делений";
			this->div->Name = L"div";
			this->div->ReadOnly = true;
			this->div->Width = 60;
			// 
			// mul
			// 
			this->mul->HeaderText = L"умножений";
			this->mul->Name = L"mul";
			this->mul->ReadOnly = true;
			this->mul->Width = 70;
			// 
			// v2_v
			// 
			this->v2_v->AllowDrop = true;
			chartArea1->Name = L"ChartArea1";
			this->v2_v->ChartAreas->Add(chartArea1);
			this->v2_v->ImeMode = System::Windows::Forms::ImeMode::On;
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->v2_v->Legends->Add(legend1);
			this->v2_v->Location = System::Drawing::Point(12, 419);
			this->v2_v->Name = L"v2_v";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->SmartLabelStyle->MaxMovingDistance = 10;
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->v2_v->Series->Add(series1);
			this->v2_v->Size = System::Drawing::Size(390, 390);
			this->v2_v->TabIndex = 25;
			this->v2_v->Text = L"chart1";
			// 
			// v_x
			// 
			this->v_x->AllowDrop = true;
			chartArea2->Name = L"ChartArea1";
			this->v_x->ChartAreas->Add(chartArea2);
			this->v_x->ImeMode = System::Windows::Forms::ImeMode::On;
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->v_x->Legends->Add(legend2);
			this->v_x->Location = System::Drawing::Point(421, 419);
			this->v_x->Name = L"v_x";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series2->SmartLabelStyle->MaxMovingDistance = 10;
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->v_x->Series->Add(series2);
			this->v_x->Size = System::Drawing::Size(390, 390);
			this->v_x->TabIndex = 26;
			this->v_x->Text = L"chart1";
			// 
			// input_stepsnum
			// 
			this->input_stepsnum->Location = System::Drawing::Point(534, 148);
			this->input_stepsnum->Name = L"input_stepsnum";
			this->input_stepsnum->Size = System::Drawing::Size(100, 20);
			this->input_stepsnum->TabIndex = 28;
			// 
			// label_steps
			// 
			this->label_steps->AutoSize = true;
			this->label_steps->Location = System::Drawing::Point(450, 144);
			this->label_steps->Name = L"label_steps";
			this->label_steps->Size = System::Drawing::Size(83, 26);
			this->label_steps->TabIndex = 27;
			this->label_steps->Text = L"максимальное\r\nкол-во шагов";
			// 
			// input_g
			// 
			this->input_g->Location = System::Drawing::Point(39, 183);
			this->input_g->Name = L"input_g";
			this->input_g->Size = System::Drawing::Size(100, 20);
			this->input_g->TabIndex = 30;
			this->input_g->Text = L"9.8";
			// 
			// label_g
			// 
			this->label_g->AutoSize = true;
			this->label_g->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_g->Location = System::Drawing::Point(15, 181);
			this->label_g->Name = L"label_g";
			this->label_g->Size = System::Drawing::Size(21, 24);
			this->label_g->TabIndex = 29;
			this->label_g->Text = L"g";
			// 
			// input_L
			// 
			this->input_L->Location = System::Drawing::Point(188, 183);
			this->input_L->Name = L"input_L";
			this->input_L->Size = System::Drawing::Size(100, 20);
			this->input_L->TabIndex = 32;
			this->input_L->Text = L"0.1";
			// 
			// label_L
			// 
			this->label_L->AutoSize = true;
			this->label_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_L->Location = System::Drawing::Point(164, 181);
			this->label_L->Name = L"label_L";
			this->label_L->Size = System::Drawing::Size(20, 24);
			this->label_L->TabIndex = 31;
			this->label_L->Text = L"L";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(146, 398);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 18);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Фазовый портрет";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(523, 398);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 18);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Численная траектория v(x)";
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info->Location = System::Drawing::Point(12, 225);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(48, 20);
			this->info->TabIndex = 36;
			this->info->Text = L"label4";
			this->info->Visible = false;
			// 
			// open_task
			// 
			this->open_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->open_task->Location = System::Drawing::Point(8, 12);
			this->open_task->Name = L"open_task";
			this->open_task->Size = System::Drawing::Size(174, 23);
			this->open_task->TabIndex = 37;
			this->open_task->Text = L"Постановка задачи";
			this->open_task->UseVisualStyleBackColor = true;
			this->open_task->Click += gcnew System::EventHandler(this, &MyForm::open_task_Click);
			// 
			// buttonMethods
			// 
			this->buttonMethods->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMethods->Location = System::Drawing::Point(188, 12);
			this->buttonMethods->Name = L"buttonMethods";
			this->buttonMethods->Size = System::Drawing::Size(175, 23);
			this->buttonMethods->TabIndex = 38;
			this->buttonMethods->Text = L"Описание метода";
			this->buttonMethods->UseVisualStyleBackColor = true;
			this->buttonMethods->Click += gcnew System::EventHandler(this, &MyForm::buttonMethods_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1709, 829);
			this->Controls->Add(this->buttonMethods);
			this->Controls->Add(this->open_task);
			this->Controls->Add(this->info);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_L);
			this->Controls->Add(this->label_L);
			this->Controls->Add(this->input_g);
			this->Controls->Add(this->label_g);
			this->Controls->Add(this->input_stepsnum);
			this->Controls->Add(this->label_steps);
			this->Controls->Add(this->v_x);
			this->Controls->Add(this->v2_v);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label_control);
			this->Controls->Add(this->input_control);
			this->Controls->Add(this->use_step_control);
			this->Controls->Add(this->input_u2_gr);
			this->Controls->Add(this->label_u2_gr);
			this->Controls->Add(this->input_u_gr);
			this->Controls->Add(this->label_u_gr);
			this->Controls->Add(this->input_x_gr);
			this->Controls->Add(this->label_x_gr);
			this->Controls->Add(this->label_ord);
			this->Controls->Add(this->rk_order);
			this->Controls->Add(this->input_step);
			this->Controls->Add(this->label_step);
			this->Controls->Add(this->input_u2);
			this->Controls->Add(this->label_v2_0);
			this->Controls->Add(this->input_u);
			this->Controls->Add(this->label_v0);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->start_chm);
			this->Controls->Add(this->input_x);
			this->Controls->Add(this->lable_x0);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Василевский Александр 3821Б1Пмоп1, Задание 11 Вариант 1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v2_v))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v_x))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double x = 0, u = 0, u2 = 0, E = 0, x_gr = 0, u_gr = 0, u2_gr = 0, h = 0.0001;
		int order = 1, steps_number = 100;
		bool step_control = false, x_gr_s = false, u_gr_s = false, u2_gr_s = false;

		this->input_x->Text = this->input_x->Text->Replace(L".", L",");
		this->input_u->Text = this->input_u->Text->Replace(L".", L",");
		this->input_u2->Text = this->input_u2->Text->Replace(L".", L",");
		this->input_control->Text = this->input_control->Text->Replace(L".", L",");
		this->input_g->Text = this->input_g->Text->Replace(L".", L",");
		this->input_L->Text = this->input_L->Text->Replace(L".", L",");
		this->input_x_gr->Text = this->input_x_gr->Text->Replace(L".", L",");
		this->input_u_gr->Text = this->input_u_gr->Text->Replace(L".", L",");
		this->input_u2_gr->Text = this->input_u2_gr->Text->Replace(L".", L",");
		this->input_step->Text = this->input_step->Text->Replace(L".", L",");


		if (this->input_x->Text == L"")
			MessageBox::Show(this, "введите начальное значение x", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (input_u->Text == L"")
			MessageBox::Show(this, "введите  начальное значение u", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->input_u2->Text == L"")
			MessageBox::Show(this, "введите  начальное значение u'", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->input_stepsnum->Text == L"")
			MessageBox::Show(this, "введите количество шагов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->input_step->Text == L"")
			MessageBox::Show(this, "введите шаг", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->rk_order->SelectedIndex == -1)
			MessageBox::Show(this, "выберите порядок метода", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (use_step_control->Checked && this->input_control->Text == L"")
			MessageBox::Show(this, "введите критерий контроля", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->input_g->Text == L"")
			MessageBox::Show(this, "введите параметр g", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (this->input_L->Text == L"")
			MessageBox::Show(this, "введите параметр L", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			g = System::Convert::ToDouble(this->input_g->Text);
			L = System::Convert::ToDouble(this->input_L->Text);

			x = System::Convert::ToDouble(this->input_x->Text);
			steps_number = System::Convert::ToInt32(input_stepsnum->Text);
			u = System::Convert::ToDouble(this->input_u->Text);
			u2 = System::Convert::ToDouble(this->input_u2->Text);
			order = System::Convert::ToInt32(this->rk_order->SelectedItem->ToString());
			step_control = use_step_control->Checked;
			h = System::Convert::ToDouble(this->input_step->Text);

			if (use_step_control->Checked)
				E = System::Convert::ToDouble(input_control->Text);


			if (this->input_x_gr->Text != L"")
			{
				x_gr_s = true;
				x_gr = System::Convert::ToDouble(this->input_x_gr->Text);
			}
			if (this->input_u_gr->Text != L"")
			{
				u_gr_s = true;
				u_gr = System::Convert::ToDouble(this->input_u_gr->Text);
			}
			if (this->input_u2_gr->Text != L"")
			{
				u2_gr_s = true;
				u2_gr = System::Convert::ToDouble(this->input_u2_gr->Text);
			}
			
				

			std::vector<std::vector<double>> result = sol.get_solution(x, u, u2, h, steps_number, order, step_control, E, x_gr_s, u_gr_s, u2_gr_s, x_gr, u_gr, u2_gr);
			dataGridView1->Rows->Clear();

			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

			series3->ChartType = SeriesChartType::Line;
			series4->ChartType = SeriesChartType::Line;

			this->v2_v->Series->Clear();
			this->v2_v->ChartAreas->Clear();
			this->v2_v->Legends->Clear();
			this->v_x->Series->Clear();
			this->v_x->ChartAreas->Clear();
			this->v_x->Legends->Clear();

			chartArea3->Name = L"ChartArea1";
			this->v2_v->ChartAreas->Add(chartArea3);
			series3->ChartArea = L"ChartArea1";
			series3->Name = L"v2_v_gr";


			chartArea4->Name = L"ChartArea2";
			this->v_x->ChartAreas->Add(chartArea4);
			series4->ChartArea = L"ChartArea2";
			series4->Name = L"v_x_gr";



			double max_step = result[7][1], min_step = result[7][1], max_olp = result[6][1], min_olp = result[6][1];
			int max_s_index = 1, min_s_index = 1, max_o_index = 1, min_o_index = 1;
			for (size_t i = 0; i < result[0].size(); i++)
			{
				dataGridView1->Rows->Add(result[0][i].ToString(), result[1][i].ToString(), result[2][i].ToString(), result[3][i].ToString()
					, result[4][i].ToString(), result[5][i].ToString(), result[6][i].ToString(), result[7][i].ToString(), result[8][i].ToString(), result[9][i].ToString());
				series3->Points->AddXY(result[2][i], result[3][i]);
				series4->Points->AddXY(result[1][i], result[2][i]);
				if (result[7][i] > max_step)
				{
					max_step = result[7][i];
					max_s_index = i;
				}
				if (result[7][i] < min_step)
				{
					min_step = result[7][i];
					min_s_index = i;
				}
				if (result[6][i] > max_olp)
				{
					max_olp = result[6][i];
					max_o_index = i;
				}
				if (i != 0 && result[6][i] < min_olp)
				{
					min_olp = result[6][i];
					min_o_index = i;
				}
			}
			this->v2_v->Series->Add(series3);
			this->v_x->Series->Add(series4);


			this->info->Visible = true;
			info->Text = L"Справка:\nМетод Рунге-Кутта " + order + L"-го порядка\nПараметры: L = " + L + L", g = " + g
				+ L"\nСделано шагов: " + ((int)result[0].size() - 1) + L"\nМаксимальный шаг: " + max_step + L" (" + max_s_index + L"-й шаг); минимальный шаг: " + min_step + L" (" + min_s_index + L"-й шаг)"
				+ L"\nМаксимальная ОЛП: " + max_olp + L" (" + max_o_index + L"-й шаг); минимальная ОЛП: " + min_olp + L" (" + min_o_index + L"-й шаг)"
				+ L"\nУмножений: " + ((int)result[9][result[9].size() - 1]) + L"; делений: " + (int)result[8][result[8].size() - 1] + L"\nПоследняя точка: x = " + result[1][result[8].size() - 1] + L"; v = " + result[2][result[8].size() - 1] + L"; v' = " + result[3][result[8].size() - 1];
		}
	}
private: System::Void use_step_control_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (use_step_control->Checked)
	{
		this->label_control->Visible = true;
		this->input_control->Visible = true;
	}
	else
	{
		this->label_control->Visible = false;
		this->input_control->Visible = false;
	}
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void open_task_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	testApp::task^ f2 = gcnew testApp::task;
	f2->ShowDialog();
	//this->Show();
}
private: System::Void buttonMethods_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	testApp::methods^ f2 = gcnew testApp::methods;
	f2->ShowDialog();
	//this->Show();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
