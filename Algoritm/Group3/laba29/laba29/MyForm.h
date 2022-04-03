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
    /// Сводка для MyForm
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void) {
            InitializeComponent();
            textBox1->ScrollBars = ScrollBars::Vertical;
            textBox1->Text = "";
            this->Text = "MEdit — Новый документ";
            // отобразить панель инструментов
            toolStrip1->Visible = true;
            выходToolStripMenuItem6->Checked = true;
            // назначаем файл справки
            // helpProvider1.HelpNamespace = "nkedit.chm";
            // настройка компонента openDialog1
            openFileDialog1->DefaultExt = "txt";
            openFileDialog1->Filter = "Текст|*.txt";
            openFileDialog1->Title = "Открыть документ";
            openFileDialog1->Multiselect = false;
            // настройка компонента saveDialog1
            saveFileDialog1->DefaultExt = "txt";
            saveFileDialog1->Filter = "Текст|*.txt";
            saveFileDialog1->Title = "Сохранить документ";
            fn = String::Empty;
            textChanged = false;

        }


    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
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
    private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem2;
    private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem3;
    private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem4;
    private: System::Windows::Forms::ToolStripMenuItem^ печатьToolStripMenuItem5;
    private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem6;
    private: System::Windows::Forms::ToolStripMenuItem^ парметрыToolStripMenuItem9;

    private: System::Windows::Forms::ToolStripMenuItem^ панельИнчтрументовToolStripMenuItem7;
    private: System::Windows::Forms::ToolStripMenuItem^ шрифтToolStripMenuItem8;

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
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
            /// <summary>
            /// Требуемый метод для поддержки конструктора — не изменяйте 
            /// содержимое этого метода с помощью редактора кода.
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
            this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->создатьToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->сохранитьToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->создатьToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->печатьToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->выходToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->парметрыToolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->панельИнчтрументовToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->шрифтToolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
                this->файлToolStripMenuItem,
                    this->парметрыToolStripMenuItem9
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(503, 28);
            this->menuStrip1->TabIndex = 2;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // файлToolStripMenuItem
            // 
            this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->создатьToolStripMenuItem2,
                    this->сохранитьToolStripMenuItem3, this->создатьToolStripMenuItem4, this->печатьToolStripMenuItem5, this->выходToolStripMenuItem6
            });
            this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
            this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
            this->файлToolStripMenuItem->Text = L"Файл";
            this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::файлToolStripMenuItem_Click);
            // 
            // создатьToolStripMenuItem2
            // 
            this->создатьToolStripMenuItem2->Name = L"создатьToolStripMenuItem2";
            this->создатьToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
            this->создатьToolStripMenuItem2->Text = L"Создать";
            // 
            // сохранитьToolStripMenuItem3
            // 
            this->сохранитьToolStripMenuItem3->Name = L"сохранитьToolStripMenuItem3";
            this->сохранитьToolStripMenuItem3->Size = System::Drawing::Size(224, 26);
            this->сохранитьToolStripMenuItem3->Text = L"Сохранить";
            // 
            // создатьToolStripMenuItem4
            // 
            this->создатьToolStripMenuItem4->Name = L"создатьToolStripMenuItem4";
            this->создатьToolStripMenuItem4->Size = System::Drawing::Size(224, 26);
            this->создатьToolStripMenuItem4->Text = L"Создать";
            // 
            // печатьToolStripMenuItem5
            // 
            this->печатьToolStripMenuItem5->Name = L"печатьToolStripMenuItem5";
            this->печатьToolStripMenuItem5->Size = System::Drawing::Size(224, 26);
            this->печатьToolStripMenuItem5->Text = L"Печать";
            // 
            // выходToolStripMenuItem6
            // 
            this->выходToolStripMenuItem6->Name = L"выходToolStripMenuItem6";
            this->выходToolStripMenuItem6->Size = System::Drawing::Size(224, 26);
            this->выходToolStripMenuItem6->Text = L"Выход";
            // 
            // парметрыToolStripMenuItem9
            // 
            this->парметрыToolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->панельИнчтрументовToolStripMenuItem7,
                    this->шрифтToolStripMenuItem8
            });
            this->парметрыToolStripMenuItem9->Name = L"парметрыToolStripMenuItem9";

            this->парметрыToolStripMenuItem9->Size = System::Drawing::Size(96, 24);
            this->парметрыToolStripMenuItem9->Text = L"Парметры";
            // 
            // панельИнчтрументовToolStripMenuItem7
            // 
            this->панельИнчтрументовToolStripMenuItem7->Name = L"панельИнчтрументовToolStripMenuItem7";
            this->панельИнчтрументовToolStripMenuItem7->Size = System::Drawing::Size(245, 26);
            this->панельИнчтрументовToolStripMenuItem7->Text = L"панель инчтрументов";
            // 
            // шрифтToolStripMenuItem8
            // 
            this->шрифтToolStripMenuItem8->Name = L"шрифтToolStripMenuItem8";
            this->шрифтToolStripMenuItem8->Size = System::Drawing::Size(245, 26);
            this->шрифтToolStripMenuItem8->Text = L"Шрифт";
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
        // конструктор

    private:
        String^ fn; // имя файла
        bool textChanged;

    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        textChanged = true;
    }
    private: int TextToFile() {
        System::Windows::Forms::DialogResult dr;
        int r;
        r = 0;
        if (textChanged) {
            dr = MessageBox::Show("В текст внесены изменения. Сохранить измененный текст?", "MEdit", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
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
            dr = MessageBox::Show("В текст внесены изменения. Сохранить измененный текст?", "MEdit", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
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
                   // отобразить диалог Открыть
                   dr = openFileDialog1->ShowDialog();
                   if (dr == System::Windows::Forms::DialogResult::OK) {
                       fn = openFileDialog1->FileName;
                       // отобразить имя файла в заголовке окна
                       this->Text = fn;
                       try {
                           // считываем данные из файла
                           System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);
                           textBox1->Text = sr->ReadToEnd();
                           textBox1->SelectionStart = textBox1->TextLength;
                           sr->Close();
                           textChanged = false;
                       }
                       catch (System::IO::FileLoadException^ e) {
                           MessageBox::Show("Ошибка:\n" + e->Message, "MEdit", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
            this->Text = "Новый документ";
            textBox1->Clear();
            textChanged = false;
            fn = String::Empty;
        }
    }
           /////////////////
    /*
    */
    // выбор в меню Файл команды Открыть

    private: System::Void toolStripMenuItem7_Click(System::Object^ sender,
        System::EventArgs^ e) {
        // отобразить/скрыть панель инструментов
        toolStrip1->Visible = !toolStrip1->Visible;
        выходToolStripMenuItem6->Checked = !выходToolStripMenuItem6->Checked;
    }
           // выбор в меню Параметры команды Шрифт
    private: System::Void toolStripMenuItem8_Click(System::Object^ sender,
        System::EventArgs^ e) {
        fontDialog1->Font = textBox1->Font;
        if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            textBox1->Font = fontDialog1->Font;
        }
    }


           // щелчок на кнопке Создать

    private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        NewDocument();
    }



           // щелчок на кнопке Открыть
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
    private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {


    OpenFile: "C:\\Windows\\System32\\mspaint.exe";

    }
           // выбор в меню Файл команды Сохранить
    private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
    Application:SaveDocument();
    }
           // выбор в меню Файл команды Создать
    private: System::Void toolStripMenuItem4_Click(System::Object^ sender,
        System::EventArgs^ e) {
    Application:NewDocument();
    }
           // выбор в меню Файл команды Печать
    private: System::Void toolStripMenuItem5_Click(System::Object^ sender,
        System::EventArgs^ e) {
    Application:printDialog1->ShowDialog();
    }
           // выбор в меню Файл команды Выход
    private: System::Void toolStripMenuItem6_Click(System::Object^ sender,
        System::EventArgs^ e) {
        Application::Exit();

    }

    };
}