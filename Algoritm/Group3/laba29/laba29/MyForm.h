#pragma once
#include <iostream>



namespace laba29 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;


    /// <summary>
    /// ������ ��� MyForm
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void) {
            InitializeComponent();
            textBox1->ScrollBars = ScrollBars::Vertical;
            textBox1->Text = "";
            this->Text = "MEdit � ����� ��������";
            // ���������� ������ ������������
            toolStrip1->Visible = true;
            �����ToolStripMenuItem6->Checked = true;
            // ��������� ���� �������
            // helpProvider1.HelpNamespace = "nkedit.chm";
            // ��������� ���������� openDialog1
            openFileDialog1->DefaultExt = "txt";
            openFileDialog1->Filter = "�����|*.txt";
            openFileDialog1->Title = "������� ��������";
            openFileDialog1->Multiselect = false;
            // ��������� ���������� saveDialog1
            saveFileDialog1->DefaultExt = "txt";
            saveFileDialog1->Filter = "�����|*.txt";
            saveFileDialog1->Title = "��������� ��������";
            fn = String::Empty;
            textChanged = false;

        }


    protected:
        /// <summary>
        /// ���������� ��� ������������ �������.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::ToolStrip^ toolStrip1;
    private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem2;
    private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem3;
    private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem4;
    private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem5;
    private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem6;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem9;

    private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem7;
    private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem8;

    private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
    private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
    private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::ToolStrip^ toolStrip2;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
    private: System::Windows::Forms::PrintDialog^ printDialog1;
    private: System::Windows::Forms::FontDialog^ fontDialog1;

    protected:

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
            /// <summary>
            /// ��������� ����� ��� ��������� ������������ � �� ��������� 
            /// ���������� ����� ������ � ������� ��������� ����.
            /// </summary>
            void InitializeComponent(void)
        {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
            this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
            this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
            this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
            this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->���������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�������ToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������ToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�����ToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������������������ToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�����ToolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
            this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
            this->toolStrip1->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(103, 126);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(238, 22);
            this->textBox1->TabIndex = 0;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
            // 
            // toolStrip1
            // 
            this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->toolStripButton1,
                    this->toolStripButton2, this->toolStripButton3, this->toolStripButton4
            });
            this->toolStrip1->Location = System::Drawing::Point(0, 28);
            this->toolStrip1->Name = L"toolStrip1";
            this->toolStrip1->Size = System::Drawing::Size(503, 25);
            this->toolStrip1->TabIndex = 1;
            this->toolStrip1->Text = L"toolStrip1";
            // 
            // toolStripButton1
            // 
            this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton1->Name = L"toolStripButton1";
            this->toolStripButton1->Size = System::Drawing::Size(29, 22);
            this->toolStripButton1->Text = L"toolStripButton1";
            this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
            // 
            // toolStripButton2
            // 
            this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton2->Name = L"toolStripButton2";
            this->toolStripButton2->Size = System::Drawing::Size(29, 22);
            this->toolStripButton2->Text = L"toolStripButton2";

            this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
            // 
            // toolStripButton3
            // 
            this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton3->Name = L"toolStripButton3";
            this->toolStripButton3->Size = System::Drawing::Size(29, 22);
            this->toolStripButton3->Text = L"toolStripButton3";
            this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
            // 
            // toolStripButton4
            // 
            this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton4->Name = L"toolStripButton4";
            this->toolStripButton4->Size = System::Drawing::Size(29, 22);
            this->toolStripButton4->Text = L"toolStripButton4";
            this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->����ToolStripMenuItem,
                    this->��������ToolStripMenuItem9
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(503, 28);
            this->menuStrip1->TabIndex = 2;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // ����ToolStripMenuItem
            // 
            this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->�������ToolStripMenuItem2,
                    this->���������ToolStripMenuItem3, this->�������ToolStripMenuItem4, this->������ToolStripMenuItem5, this->�����ToolStripMenuItem6
            });
            this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
            this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
            this->����ToolStripMenuItem->Text = L"����";
            this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
            // 
            // �������ToolStripMenuItem2
            // 
            this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
            this->�������ToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
            this->�������ToolStripMenuItem2->Text = L"�������";
            // 
            // ���������ToolStripMenuItem3
            // 
            this->���������ToolStripMenuItem3->Name = L"���������ToolStripMenuItem3";
            this->���������ToolStripMenuItem3->Size = System::Drawing::Size(224, 26);
            this->���������ToolStripMenuItem3->Text = L"���������";
            // 
            // �������ToolStripMenuItem4
            // 
            this->�������ToolStripMenuItem4->Name = L"�������ToolStripMenuItem4";
            this->�������ToolStripMenuItem4->Size = System::Drawing::Size(224, 26);
            this->�������ToolStripMenuItem4->Text = L"�������";
            // 
            // ������ToolStripMenuItem5
            // 
            this->������ToolStripMenuItem5->Name = L"������ToolStripMenuItem5";
            this->������ToolStripMenuItem5->Size = System::Drawing::Size(224, 26);
            this->������ToolStripMenuItem5->Text = L"������";
            // 
            // �����ToolStripMenuItem6
            // 
            this->�����ToolStripMenuItem6->Name = L"�����ToolStripMenuItem6";
            this->�����ToolStripMenuItem6->Size = System::Drawing::Size(224, 26);
            this->�����ToolStripMenuItem6->Text = L"�����";
            // 
            // ��������ToolStripMenuItem9
            // 
            this->��������ToolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->������������������ToolStripMenuItem7,
                    this->�����ToolStripMenuItem8
            });
            this->��������ToolStripMenuItem9->Name = L"��������ToolStripMenuItem9";

            this->��������ToolStripMenuItem9->Size = System::Drawing::Size(96, 24);
            this->��������ToolStripMenuItem9->Text = L"��������";
            // 
            // ������������������ToolStripMenuItem7
            // 
            this->������������������ToolStripMenuItem7->Name = L"������������������ToolStripMenuItem7";
            this->������������������ToolStripMenuItem7->Size = System::Drawing::Size(245, 26);
            this->������������������ToolStripMenuItem7->Text = L"������ ������������";
            // 
            // �����ToolStripMenuItem8
            // 
            this->�����ToolStripMenuItem8->Name = L"�����ToolStripMenuItem8";
            this->�����ToolStripMenuItem8->Size = System::Drawing::Size(245, 26);
            this->�����ToolStripMenuItem8->Text = L"�����";
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // toolStrip2
            // 
            this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
            this->toolStrip2->Location = System::Drawing::Point(0, 53);
            this->toolStrip2->Name = L"toolStrip2";
            this->toolStrip2->Size = System::Drawing::Size(503, 25);
            this->toolStrip2->TabIndex = 3;
            this->toolStrip2->Text = L"toolStrip2";
            // 
            // printDialog1
            // 
            this->printDialog1->UseEXDialog = true;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(503, 361);
            this->Controls->Add(this->toolStrip2);
            this->Controls->Add(this->toolStrip1);
            this->Controls->Add(this->menuStrip1);
            this->Controls->Add(this->textBox1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->Text = L"MyForm";
            this->toolStrip1->ResumeLayout(false);
            this->toolStrip1->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        // �����������

    private:
        String^ fn; // ��� �����
        bool textChanged;

    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        textChanged = true;
    }
    private: int TextToFile() {
        System::Windows::Forms::DialogResult dr;
        int r;
        r = 0;
        if (textChanged) {
            dr = MessageBox::Show("� ����� ������� ���������. ��������� ���������� �����?", "MEdit", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
            switch (dr) {
            case System::Windows::Forms::DialogResult::Yes:
                r = TextToFile();
                break;
            case System::Windows::Forms::DialogResult::No:
                r = 0;
                break;
            case System::Windows::Forms::DialogResult::Cancel:
                r = -1;
                break;
            };
        }
        return r;
    }



    private: int SaveText() {
        System::Windows::Forms::DialogResult dr;

        int r;
        r = 0;
        if (textChanged) {
            dr = MessageBox::Show("� ����� ������� ���������. ��������� ���������� �����?", "MEdit", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
            switch (dr) {
            case System::Windows::Forms::DialogResult::Yes:
                r = TextToFile();
                break;
            case System::Windows::Forms::DialogResult::No:
                r = 0;
                break;
            case System::Windows::Forms::DialogResult::Cancel:
                r = -1;
                break;
            };
        }
        return r;
    }

    private: void OpenDocument() {
               System::Windows::Forms::DialogResult dr;
               int r;
               r = SaveText();
               if (r == 0) {
                   openFileDialog1->FileName = String::Empty;
                   // ���������� ������ �������
                   dr = openFileDialog1->ShowDialog();
                   if (dr == System::Windows::Forms::DialogResult::OK) {
                       fn = openFileDialog1->FileName;
                       // ���������� ��� ����� � ��������� ����
                       this->Text = fn;
                       try {
                           // ��������� ������ �� �����
                           System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);
                           textBox1->Text = sr->ReadToEnd();
                           textBox1->SelectionStart = textBox1->TextLength;
                           sr->Close();
                           textChanged = false;
                       }
                       catch (System::IO::FileLoadException^ e) {
                           MessageBox::Show("������:\n" + e->Message, "MEdit", MessageBoxButtons::OK, MessageBoxIcon::Error);
                       }
                   }
               }
           }

    private: void SaveDocument() {
        int r;
        r = SaveText();
        if (r == 0) {
            this->Text = fn;
            textChanged = false;
        }
    }

    private: void NewDocument() {
        int r;

        r = SaveText();
        if (r == 0) {
            this->Text = "����� ��������";
            textBox1->Clear();
            textChanged = false;
            fn = String::Empty;
        }
    }
           /////////////////
    /*
    */
    // ����� � ���� ���� ������� �������

    private: System::Void toolStripMenuItem7_Click(System::Object^ sender,
        System::EventArgs^ e) {
        // ����������/������ ������ ������������
        toolStrip1->Visible = !toolStrip1->Visible;
        �����ToolStripMenuItem6->Checked = !�����ToolStripMenuItem6->Checked;
    }
           // ����� � ���� ��������� ������� �����
    private: System::Void toolStripMenuItem8_Click(System::Object^ sender,
        System::EventArgs^ e) {
        fontDialog1->Font = textBox1->Font;
        if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            textBox1->Font = fontDialog1->Font;
        }
    }


           // ������ �� ������ �������

    private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        NewDocument();
    }



           // ������ �� ������ �������
    private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenDocument();

    }

    private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
        SaveDocument();

    }
    private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
        printDialog1->ShowDialog();
    }

           ///////////////
    private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {


    OpenFile: "C:\\Windows\\System32\\mspaint.exe";

    }
           // ����� � ���� ���� ������� ���������
    private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
    Application:SaveDocument();
    }
           // ����� � ���� ���� ������� �������
    private: System::Void toolStripMenuItem4_Click(System::Object^ sender,
        System::EventArgs^ e) {
    Application:NewDocument();
    }
           // ����� � ���� ���� ������� ������
    private: System::Void toolStripMenuItem5_Click(System::Object^ sender,
        System::EventArgs^ e) {
    Application:printDialog1->ShowDialog();
    }
           // ����� � ���� ���� ������� �����
    private: System::Void toolStripMenuItem6_Click(System::Object^ sender,
        System::EventArgs^ e) {
        Application::Exit();

    }

    };
}