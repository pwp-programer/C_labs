#pragma once

namespace laba30ex2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
		dc->FillEllipse(br, 10, 20, 100, 50); //������
		dc->FillEllipse(br, 150, 30, 90, 40); //������ � ��������
		dc->FillEllipse(bb, 160, 40, 70, 20); 

		SolidBrush^ rb;
		rb = gcnew SolidBrush(Color::Green);
		dc->FillEllipse(rb, 20, 100, 80, 80); //����
		dc->FillEllipse(rb, 150, 100, 70, 70); //���� � ��������
		dc->FillEllipse(bb, 160, 110, 50, 50); 


		
		dc->FillRectangle(db, 10, 200, 100, 100); //�������
		dc->FillRectangle(db, 150, 200, 100, 100); //������� � ��������
		dc->FillRectangle(bb, 160, 210, 80, 80);
	}
	};
}
