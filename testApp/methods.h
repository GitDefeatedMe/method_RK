#pragma once

namespace testApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для methods
	/// </summary>
	public ref class methods : public System::Windows::Forms::Form
	{
	public:
		methods(void)
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
		~methods()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureTask;
	private: System::Windows::Forms::PictureBox^ pictureRk1;
	private: System::Windows::Forms::PictureBox^ pictureRk2;
	private: System::Windows::Forms::PictureBox^ pictureRk4;
	private: System::Windows::Forms::PictureBox^ pictureInfo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	protected:

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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(methods::typeid));
			this->pictureTask = (gcnew System::Windows::Forms::PictureBox());
			this->pictureRk1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureRk2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureRk4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureInfo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTask))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureInfo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureTask
			// 
			this->pictureTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTask.Image")));
			this->pictureTask->Location = System::Drawing::Point(12, 48);
			this->pictureTask->Name = L"pictureTask";
			this->pictureTask->Size = System::Drawing::Size(298, 263);
			this->pictureTask->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureTask->TabIndex = 0;
			this->pictureTask->TabStop = false;
			// 
			// pictureRk1
			// 
			this->pictureRk1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureRk1.Image")));
			this->pictureRk1->Location = System::Drawing::Point(2, 399);
			this->pictureRk1->Name = L"pictureRk1";
			this->pictureRk1->Size = System::Drawing::Size(470, 245);
			this->pictureRk1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureRk1->TabIndex = 1;
			this->pictureRk1->TabStop = false;
			// 
			// pictureRk2
			// 
			this->pictureRk2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureRk2.Image")));
			this->pictureRk2->Location = System::Drawing::Point(328, 48);
			this->pictureRk2->Name = L"pictureRk2";
			this->pictureRk2->Size = System::Drawing::Size(614, 263);
			this->pictureRk2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureRk2->TabIndex = 2;
			this->pictureRk2->TabStop = false;
			this->pictureRk2->Click += gcnew System::EventHandler(this, &methods::pictureRk2_Click);
			// 
			// pictureRk4
			// 
			this->pictureRk4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureRk4.Image")));
			this->pictureRk4->Location = System::Drawing::Point(478, 399);
			this->pictureRk4->Name = L"pictureRk4";
			this->pictureRk4->Size = System::Drawing::Size(464, 427);
			this->pictureRk4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureRk4->TabIndex = 3;
			this->pictureRk4->TabStop = false;
			// 
			// pictureInfo
			// 
			this->pictureInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureInfo.Image")));
			this->pictureInfo->Location = System::Drawing::Point(993, 44);
			this->pictureInfo->Name = L"pictureInfo";
			this->pictureInfo->Size = System::Drawing::Size(430, 782);
			this->pictureInfo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureInfo->TabIndex = 4;
			this->pictureInfo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(100, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Постановка задачи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(111, 380);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Метод Эйлера(явный, 1-го порядка)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(488, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Метод Рунге-Кутта (явный, 2-го порядка)";
			this->label3->Click += gcnew System::EventHandler(this, &methods::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(573, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Метод Рунге-Кутта (явный, 4-го порядка)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1053, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(286, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Контроль локальной погрешности за счёт \r\n     двойного счёта с половинным шагом\r\n"
				L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1446, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(412, 440);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1561, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Критерии остановки счёта\r\n";
			// 
			// methods
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1892, 838);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureInfo);
			this->Controls->Add(this->pictureRk4);
			this->Controls->Add(this->pictureRk2);
			this->Controls->Add(this->pictureRk1);
			this->Controls->Add(this->pictureTask);
			this->Name = L"methods";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Описание метода";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTask))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRk4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureInfo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureRk2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
