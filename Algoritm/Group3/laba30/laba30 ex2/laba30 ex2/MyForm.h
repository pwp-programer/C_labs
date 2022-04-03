#pragma once

namespace laba30ex2 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(123, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(517, 415);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 535);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Graphics^ dc = pictureBox1->CreateGraphics();
		SolidBrush^ bb;
		bb = gcnew SolidBrush(Color::White);

		SolidBrush^ db;
		db = gcnew SolidBrush(Color::DarkOrange);

		SolidBrush^ br;
		br = gcnew SolidBrush(Color::Black);
		dc->FillEllipse(br, 10, 20, 100, 50); //Ёллипс
		dc->FillEllipse(br, 150, 30, 90, 40); //Ёллипс с контуром
		dc->FillEllipse(bb, 160, 40, 70, 20); 

		SolidBrush^ rb;
		rb = gcnew SolidBrush(Color::Green);
		dc->FillEllipse(rb, 20, 100, 80, 80); // руг
		dc->FillEllipse(rb, 150, 100, 70, 70); // руг с контуром
		dc->FillEllipse(bb, 160, 110, 50, 50); 


		
		dc->FillRectangle(db, 10, 200, 100, 100); // вадрат
		dc->FillRectangle(db, 150, 200, 100, 100); // вадрат с контуром
		dc->FillRectangle(bb, 160, 210, 80, 80);
	}
	};
}
