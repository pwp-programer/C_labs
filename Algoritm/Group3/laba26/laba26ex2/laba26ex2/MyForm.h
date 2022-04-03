#pragma once

namespace laba26ex2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Print;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Print = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(120, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¬ведите число от 0 до 9";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(200, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(219, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 3;
			// 
			// Print
			// 
			this->Print->Location = System::Drawing::Point(187, 327);
			this->Print->Name = L"Print";
			this->Print->Size = System::Drawing::Size(100, 20);
			this->Print->TabIndex = 4;
			this->Print->Text = L"¬ывод:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(467, 442);
			this->Controls->Add(this->Print);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int num1;
		num1 = System::Convert::ToDouble(textBox1->Text);
		switch (num1) 
		{
			case 0:
				Print->Text = System::Convert::ToString("0 - ноль");
				break;
			case 1:
				Print->Text = System::Convert::ToString("1 - один");
				break;
			case 2:
				Print->Text = System::Convert::ToString("2 - два");
				break;
			case 3:
				Print->Text = System::Convert::ToString("3 - три");
				break;
			case 4:
				Print->Text = System::Convert::ToString("4 - четыре");
				break;
			case 5:
				Print->Text = System::Convert::ToString("5 - п€ть");
				break;
			case 6:
				Print->Text = System::Convert::ToString("6 - шесть");
				break;
			case 7:
				Print->Text = System::Convert::ToString("7 - семь");
				break;
			case 8:
				Print->Text = System::Convert::ToString("8 - дев€ть");
				break;
			case 9:
				Print->Text = System::Convert::ToString("9 - дев€ть");
				break;
		}
	}
	};
}
