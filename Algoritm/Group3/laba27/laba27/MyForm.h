#pragma once

namespace laba27 {

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

	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите первое число:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите второе число:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 200);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(300, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Действие:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Сложение", L"Вычитание", L"Умножение", L"Деление",
					L""
			});
			this->comboBox1->Location = System::Drawing::Point(304, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"Выберите действие";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(304, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 43);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(304, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 43);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(515, 268);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"CalcApps";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

//  Кнопка Вычислить
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	double Num1, Num2, Result;
	Num1 = System::Convert::ToDouble(textBox1->Text);
	Num2 = System::Convert::ToDouble(textBox2->Text);

	if (comboBox1->SelectedItem == "Сложение") {
		Result = Num1 + Num2;
		textBox3->Text = System::Convert::ToString(Result);;
	}

	if (comboBox1->SelectedItem == "Вычитание") {
		Result = Num1 - Num2;
		textBox3->Text = System::Convert::ToString(Result);;
	}

	if (comboBox1->SelectedItem == "Умножение") {
		Result = Num1 * Num2;
		textBox3->Text = System::Convert::ToString(Result);;
	}

	if (comboBox1->SelectedItem == "Деление") 
	{
		if (Num2 == 0)
		{
			textBox3->Text = "Деление на 0 невозможно";
		}
		else
		{
			Result = Num1 / Num2;
			textBox3->Text = System::Convert::ToString(Result);;
		}
		
	}
}

//  Кнопка сброса
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox3->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
