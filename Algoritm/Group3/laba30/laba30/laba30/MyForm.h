#pragma once

namespace laba30 {

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
			this->pictureBox1->Location = System::Drawing::Point(169, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(266, 281);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 471);
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

		SolidBrush^ br;
		br = gcnew SolidBrush(Color::Black);
		dc->FillRectangle(br, 10, 30, 100, 25); //4 параметр это высота, 3 ширина

		SolidBrush^ rb;
		rb = gcnew SolidBrush(Color::Red);
		dc->FillRectangle(rb, 10, 55, 100, 25); //4 параметр это высота, 3 ширина

		SolidBrush^ yb;
		yb = gcnew SolidBrush(Color::Yellow);
		dc->FillRectangle(yb, 10, 80, 100, 25);



		//  Ўрифты галимые
		
		String^ st1 = "Germany";
		
		int i = 0;

		while (true)
		{
			for (int g = 0; g < 25; g++)
			{
				Font = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Bold);
				dc->DrawString(st1, this->Font, Brushes::Black, 200, 55);
			}
			
			for (int g = 0; g < 25; g++)
			{
				Font = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Italic);
				dc->DrawString(st1, this->Font, Brushes::Black, 200, 30);
			}

			for (int g = 0; g < 25; g++)
			{
				Font = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Regular);
				dc->DrawString(st1, this->Font, Brushes::Black, 200, 80);
			}

		}
		

		
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
