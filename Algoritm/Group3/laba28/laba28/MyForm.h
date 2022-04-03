#pragma once

namespace laba28 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
/// <summary>
/// Требуемый метод для поддержки конструктора — не изменяйте
/// содержимое этого метода с помощью редактора кода.
/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(112, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(351, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите количество минут";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(184, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::use_time);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(215, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"00";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(140, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 38);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(293, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"00";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(266, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 31);
			this->label4->TabIndex = 5;
			this->label4->Text = L":";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Запуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::run_time);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer_tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(596, 374);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void use_time(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") { label1->Text = System::Convert::ToString("Поле не должно быть пустым!"); }
		else {
			double time = System::Convert::ToDouble(textBox1->Text);
			if (time <= 0) { label1->Text = System::Convert::ToString("Введите положительное число"); }
			else {
				if (time <= 60) {
					if (time < 10) {
						label2->Text = "0" + System::Convert::ToString(time);
						label3->Text = "00";
					}
					else {
						label2->Text = System::Convert::ToString(time);
						label3->Text = "00";
					}

				}
				if (time > 60) {
					time = 60;
					label2->Text = System::Convert::ToString(time);
					label3->Text = "00";
				}
			}
		}

	}

	private: System::Void run_time(System::Object^ sender, System::EventArgs^ e) {
		bool type = false;
		if (timer1->Enabled) {
			// Таймер работает, значит, щелчок на кнопке Стоп.
			// Остановить таймер.
			timer1->Enabled = false;
			// Изменить текст на кнопке
			// и сделать доступной кнопку Сброс
			button2->Text = "Запуск";
			button1->Enabled = true;
			label4->Visible = true;
		}
		else {
			// Таймер не работает, значит, щелчок на Пуск.
			// Запускаем таймер.
			timer1->Enabled = true;
			// изменить текст на кнопке
			button2->Text = "Стоп";
			// и сделать недоступной кнопку Сброс

			button1->Enabled = false;

		}
	}
		   int type = true;
	public: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) {
		int time1 = System::Convert::ToDouble(label2->Text);
		int time2 = System::Convert::ToDouble(label3->Text);
		double time3, time4;

		//Мигание точек
		if (time2 % 2 == 0)
		{
			label4->Text = ":";
		}
		else
		{

			label4->Text = "";
		}






		//Сам "цикл"
		if (time2 < 1)
		{
			if (time1 > 0)
			{
				time2 = 60; time1 = time1 - 1;
				// Добавление 0 к минутам если их меньше 10
				if (time1 < 10)
				{
					label2->Text = "0" + System::Convert::ToString(time1);
				}
				else
				{
					label2->Text = System::Convert::ToString(time1);
				}


			}




		}

		if (time2 > 0)
		{
			time2 = time2 - 1;
			if (time2 < 10)
			{
				label3->Text = "0" + System::Convert::ToString(time2);
			}
			else
			{

				label3->Text = System::Convert::ToString(time2);
			}

		}




	}


	};
}