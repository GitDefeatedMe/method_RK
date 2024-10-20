#pragma once

namespace testApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для task
	/// </summary>
	public ref class task : public System::Windows::Forms::Form
	{
	public:
		task(void)
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
		~task()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureTask;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(task::typeid));
			this->pictureTask = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTask))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureTask
			// 
			this->pictureTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTask.Image")));
			this->pictureTask->Location = System::Drawing::Point(37, 44);
			this->pictureTask->Name = L"pictureTask";
			this->pictureTask->Size = System::Drawing::Size(785, 476);
			this->pictureTask->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureTask->TabIndex = 0;
			this->pictureTask->TabStop = false;
			// 
			// task
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 563);
			this->Controls->Add(this->pictureTask);
			this->Name = L"task";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Постановка задачи";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTask))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
