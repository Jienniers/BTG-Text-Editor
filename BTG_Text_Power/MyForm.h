#pragma once
#include<ctime>
#include<Windows.h>
#include "Find.h"
#include "MSymbol.h"
#include "FileType.h"

namespace BTGTextPower {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;

	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Drawing::Printing;
	using namespace System::Diagnostics;
	using namespace System::Speech::Synthesis;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel2->Hide();
			panel3->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearTextToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculateToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ToolStripMenuItem^ speechToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dateTimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteTextBackgroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ musicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ playToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stopToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialogMusic;



	private: System::Windows::Forms::ToolStripMenuItem^ findToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ customizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manuTabFontToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ mathSymbolsToolStripMenuItem;




	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ToolStripMenuItem^ fileTypeToolStripMenuItem;
	private: System::Windows::Forms::Label^ label8;






	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileTypeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearTextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speechToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mathSymbolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->whiteTextBackgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->musicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manuTabFontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->openFileDialogMusic = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fontDialog2 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(0, 78);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(689, 398);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(181, 34);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(134, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"label7";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"label5";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(419, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(270, 383);
			this->panel2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(166, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ANS:";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(112, 346);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(58, 346);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 34);
			this->button4->TabIndex = 9;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(4, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(10, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Unispace", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(9, 265);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(242, 19);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Add Space After Transferred";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(9, 236);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(258, 23);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Close After Transferred";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(10, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Transfer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(4, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(247, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Second  Number:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"First Number:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(0, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(689, 392);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->insertToolStripMenuItem, this->themesToolStripMenuItem, this->musicToolStripMenuItem, this->customizeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(688, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->fileTypeToolStripMenuItem, this->printToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 25);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newWindowToolStripMenuItem,
					this->newToolStripMenuItem1
			});
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// newWindowToolStripMenuItem
			// 
			this->newWindowToolStripMenuItem->Name = L"newWindowToolStripMenuItem";
			this->newWindowToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->newWindowToolStripMenuItem->Text = L"New Window";
			this->newWindowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newWindowToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem1
			// 
			this->newToolStripMenuItem1->Name = L"newToolStripMenuItem1";
			this->newToolStripMenuItem1->Size = System::Drawing::Size(174, 26);
			this->newToolStripMenuItem1->Text = L"New";
			this->newToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem1_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// fileTypeToolStripMenuItem
			// 
			this->fileTypeToolStripMenuItem->Name = L"fileTypeToolStripMenuItem";
			this->fileTypeToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->fileTypeToolStripMenuItem->Text = L"FileType";
			this->fileTypeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileTypeToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->fontToolStripMenuItem,
					this->colorToolStripMenuItem, this->selectAllToolStripMenuItem, this->copyToolStripMenuItem, this->cutToolStripMenuItem, this->pasteToolStripMenuItem,
					this->undoToolStripMenuItem, this->clearTextToolStripMenuItem, this->calculateToolStripMenuItem, this->speechToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(48, 25);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->colorToolStripMenuItem->Text = L"Color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->selectAllToolStripMenuItem->Text = L"Select all";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectAllToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// clearTextToolStripMenuItem
			// 
			this->clearTextToolStripMenuItem->Name = L"clearTextToolStripMenuItem";
			this->clearTextToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->clearTextToolStripMenuItem->Text = L"Clear Text";
			this->clearTextToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearTextToolStripMenuItem_Click);
			// 
			// calculateToolStripMenuItem
			// 
			this->calculateToolStripMenuItem->Name = L"calculateToolStripMenuItem";
			this->calculateToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->calculateToolStripMenuItem->Text = L"Calculate";
			this->calculateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::calculateToolStripMenuItem_Click);
			// 
			// speechToolStripMenuItem
			// 
			this->speechToolStripMenuItem->Name = L"speechToolStripMenuItem";
			this->speechToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->speechToolStripMenuItem->Text = L"Speak";
			this->speechToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::speechToolStripMenuItem_Click);
			// 
			// insertToolStripMenuItem
			// 
			this->insertToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dateTimeToolStripMenuItem,
					this->findToolStripMenuItem, this->mathSymbolsToolStripMenuItem
			});
			this->insertToolStripMenuItem->Name = L"insertToolStripMenuItem";
			this->insertToolStripMenuItem->Size = System::Drawing::Size(61, 25);
			this->insertToolStripMenuItem->Text = L"Insert";
			// 
			// dateTimeToolStripMenuItem
			// 
			this->dateTimeToolStripMenuItem->Name = L"dateTimeToolStripMenuItem";
			this->dateTimeToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->dateTimeToolStripMenuItem->Text = L"Date/Time";
			this->dateTimeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dateTimeToolStripMenuItem_Click);
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
			this->findToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->findToolStripMenuItem->Text = L"Find";
			this->findToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::findToolStripMenuItem_Click_1);
			// 
			// mathSymbolsToolStripMenuItem
			// 
			this->mathSymbolsToolStripMenuItem->Name = L"mathSymbolsToolStripMenuItem";
			this->mathSymbolsToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->mathSymbolsToolStripMenuItem->Text = L"Math Symbols";
			this->mathSymbolsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mathSymbolsToolStripMenuItem_Click);
			// 
			// themesToolStripMenuItem
			// 
			this->themesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->defaultToolStripMenuItem,
					this->whiteTextBackgroundToolStripMenuItem
			});
			this->themesToolStripMenuItem->Name = L"themesToolStripMenuItem";
			this->themesToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->themesToolStripMenuItem->Text = L"Themes";
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(238, 26);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::defaultToolStripMenuItem_Click);
			// 
			// whiteTextBackgroundToolStripMenuItem
			// 
			this->whiteTextBackgroundToolStripMenuItem->Name = L"whiteTextBackgroundToolStripMenuItem";
			this->whiteTextBackgroundToolStripMenuItem->Size = System::Drawing::Size(238, 26);
			this->whiteTextBackgroundToolStripMenuItem->Text = L"White Text Background";
			this->whiteTextBackgroundToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::whiteTextBackgroundToolStripMenuItem_Click);
			// 
			// musicToolStripMenuItem
			// 
			this->musicToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->playToolStripMenuItem,
					this->stopToolStripMenuItem
			});
			this->musicToolStripMenuItem->Name = L"musicToolStripMenuItem";
			this->musicToolStripMenuItem->Size = System::Drawing::Size(63, 25);
			this->musicToolStripMenuItem->Text = L"Music";
			// 
			// playToolStripMenuItem
			// 
			this->playToolStripMenuItem->Name = L"playToolStripMenuItem";
			this->playToolStripMenuItem->Size = System::Drawing::Size(111, 26);
			this->playToolStripMenuItem->Text = L"Play";
			this->playToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::playToolStripMenuItem_Click);
			// 
			// stopToolStripMenuItem
			// 
			this->stopToolStripMenuItem->Name = L"stopToolStripMenuItem";
			this->stopToolStripMenuItem->Size = System::Drawing::Size(111, 26);
			this->stopToolStripMenuItem->Text = L"Stop";
			this->stopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stopToolStripMenuItem_Click);
			// 
			// customizeToolStripMenuItem
			// 
			this->customizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->manuTabFontToolStripMenuItem });
			this->customizeToolStripMenuItem->Name = L"customizeToolStripMenuItem";
			this->customizeToolStripMenuItem->Size = System::Drawing::Size(95, 25);
			this->customizeToolStripMenuItem->Text = L"Customize";
			// 
			// manuTabFontToolStripMenuItem
			// 
			this->manuTabFontToolStripMenuItem->Name = L"manuTabFontToolStripMenuItem";
			this->manuTabFontToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->manuTabFontToolStripMenuItem->Text = L"Manu Tab Font";
			this->manuTabFontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::manuTabFontToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 42);
			this->label1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(576, 31);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"New";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(457, 32);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 43);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Save";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(338, 33);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Open";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// openFileDialogMusic
			// 
			this->openFileDialogMusic->FileName = L"openFileDialog2";
			// 
			// fontDialog2
			// 
			this->fontDialog2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(688, 476);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BTG Text Power";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		openFileDialog1->FileName = "";
	}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ mystream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "Text Files(*" + File::ReadAllText("Log\\File.txt") + ")" + "|*" + File::ReadAllText("Log\\File.txt") + "|" + "All Files (*.*)|*.*";
	openFileDialog1->FileName = "";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((mystream = openFileDialog1->OpenFile()) != nullptr) {
			String^ strFilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ ReadFile = File::ReadAllText(strFilename);
			this->richTextBox1->Text = (ReadFile);
			label1->Text = Path::GetFileName(openFileDialog1->FileName);
			mystream->Close();
		}
	}
	saveFileDialog1->FileName = openFileDialog1->FileName;
}
	   String^ Filename;
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = "";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		saveFileDialog1->FileName = saveFileDialog1->FileName + File::ReadAllText("Log\\File.txt");
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->Write(richTextBox1->Text);
		label1->Text = Path::GetFileName(saveFileDialog1->FileName);
		sw->Close();
	}
}
private: System::Void newWindowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm^ MYForm = gcnew MyForm;
	MYForm->ShowDialog();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do You Really Want to Exit?", "BTG Text Power", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		return;
	}
}
private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	printDialog1->AllowSomePages = true;
	printDialog1->ShowHelp = true;
	PrintDocument^ docToPrint = gcnew PrintDocument();
	printDialog1->Document = docToPrint;
	;
	;
	;
	;
	System::Windows::Forms::DialogResult result = printDialog1->ShowDialog();
	docToPrint->PrintPage += gcnew PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
	;
	;
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		docToPrint->Print();

	}

}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	String^ text = richTextBox1->Text;
	System::Drawing::Font^ printFont = gcnew System::Drawing::Font("Arial", 35, System::Drawing::FontStyle::Regular);
	e->Graphics->DrawString(text, printFont, System::Drawing::Brushes::Black, 10, 10);
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->FileName->Length == 0)
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			saveFileDialog1->FileName = saveFileDialog1->FileName + File::ReadAllText("Log\\File.txt");
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			label1->Text = Path::GetFileName(saveFileDialog1->FileName);
			sw->Close();
		}
	}
	else {

		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->Write(richTextBox1->Text);
		label1->Text = Path::GetFileName(saveFileDialog1->FileName);
		sw->Close();
	}
}
private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	richTextBox1->Font = fontDialog1->Font;
}
private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	richTextBox1->ForeColor = colorDialog1->Color;
}
private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectAll();
}
private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
}
private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Cut();
}
private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
}
private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
}
private: System::Void clearTextToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
	{
		e->Handled = true;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		label4->Text = System::Convert::ToString(result);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		int result = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
		label4->Text = System::Convert::ToString(result);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please Fill All text", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		int result = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
		label4->Text = System::Convert::ToString(result);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ mystream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "Text Files(*" + File::ReadAllText("Log\\File.txt") + ")" + "|*" + File::ReadAllText("Log\\File.txt") + "|" + "All Files (*.*)|*.*";
	openFileDialog1->FileName = "";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((mystream = openFileDialog1->OpenFile()) != nullptr) {
			String^ strFilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ ReadFile = File::ReadAllText(strFilename);
			this->richTextBox1->Text = (ReadFile);
			label1->Text = Path::GetFileName(openFileDialog1->FileName);
			mystream->Close();
		}
	}
	saveFileDialog1->FileName = openFileDialog1->FileName;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->FileName->Length == 0)
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			saveFileDialog1->FileName = saveFileDialog1->FileName + File::ReadAllText("Log\\File.txt");
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			label1->Text = Path::GetFileName(saveFileDialog1->FileName);
			sw->Close();
		}
	}
	else {

		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->Write(richTextBox1->Text);
		label1->Text = Path::GetFileName(saveFileDialog1->FileName);
		sw->Close();
	}
}
private: System::Void speechToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->richTextBox1->Text->Length == 0) {
		MessageBox::Show("No Text to Speak", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		SpeechSynthesizer^ speech = gcnew SpeechSynthesizer;
		speech->Speak(richTextBox1->Text);
	}
}
private: System::Void dateTimeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SYSTEMTIME a;
	GetLocalTime(&a);
	richTextBox1->Text = richTextBox1->Text + "Time:";
	richTextBox1->Text = richTextBox1->Text + " ";
	richTextBox1->Text = richTextBox1->Text + a.wHour + ":";
	richTextBox1->Text = richTextBox1->Text + a.wMinute + ":";
	richTextBox1->Text = richTextBox1->Text + a.wSecond + " " + "Date: ";
	richTextBox1->Text = richTextBox1->Text + a.wDay + "/";
	richTextBox1->Text = richTextBox1->Text + a.wMonth + "/";
	richTextBox1->Text = richTextBox1->Text + a.wYear;
}
private: System::Void whiteTextBackgroundToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->ForeColor = System::Drawing::Color::Black;
	this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
}
private: System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
		static_cast<System::Int32>(static_cast<System::Byte>(15)));
	this->richTextBox1->ForeColor = System::Drawing::Color::White;
	this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
}
	   SoundPlayer^ sound = gcnew SoundPlayer;
private: System::Void playToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialogMusic->FileName = "";
	openFileDialogMusic->Filter = "WAV File (*.wav)|*.wav|WAV File (*.wav)|*.wav";
	if (openFileDialogMusic->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		sound->SoundLocation = openFileDialogMusic->FileName;
		sound->Load();
		sound->Play();
	}
	else if (this->openFileDialogMusic->FileName->Length == 0)
	{
		MessageBox::Show("No File To play", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void stopToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialogMusic->FileName->Length == 0)
	{
		MessageBox::Show("No Music is Playing", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		sound->Stop();
	}
}

private: System::Void calculateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "ANS:")
	{
		MessageBox::Show("No Answer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (checkBox1->Checked)
		{
			if (checkBox2->Checked)
			{
				richTextBox1->Text = richTextBox1->Text + " " + label4->Text;
			}
			else
			{
				richTextBox1->Text = richTextBox1->Text + label4->Text;
			}
			panel2->Hide();
		}
		else
		{
			if (checkBox2->Checked)
			{
				richTextBox1->Text = richTextBox1->Text + " " + label4->Text;
			}
			else
			{
				richTextBox1->Text = richTextBox1->Text + label4->Text;
			}
		}
	}
}
private: System::Void findToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void findToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Find^ find = gcnew Find;
	find->ShowDialog();
	label7->Text = find->GetData();
	int index = 0;
	String^ temp = richTextBox1->Text;
	richTextBox1->Text = "";
	richTextBox1->Text = temp;
	Sleep(1000);
	if (label7->Text->Length == 0)
	{
		MessageBox::Show("No Text To Search For", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		while (index < richTextBox1->Text->LastIndexOf(label7->Text))
		{
			richTextBox1->Find(label7->Text, index, richTextBox1->TextLength, RichTextBoxFinds::None);
			richTextBox1->SelectionBackColor = Color::Blue;
			index = richTextBox1->Text->IndexOf(label7->Text, index) + 1;
		}
	}
}
private: System::Void manuTabFontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog2->ShowDialog();
	this->menuStrip1->Font = fontDialog2->Font;
}
private: System::Void newToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do You Want to Save?", "BTG Text Power", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
		if (saveFileDialog1->FileName->Length == 0)
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
				sw->Write(richTextBox1->Text);
				label1->Text = Path::GetFileName(saveFileDialog1->FileName);
				sw->Close();
			}
		}
		else {

			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			label1->Text = Path::GetFileName(saveFileDialog1->FileName);
			sw->Close();
		}
	}
	else {
		label1->Text = "";
		richTextBox1->Clear();
		saveFileDialog1->FileName = "";
	}
}
private: System::Void mathSymbolsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MSymbol^ MSysmbols = gcnew MSymbol;
	MSysmbols->ShowDialog();
	richTextBox1->Text = richTextBox1->Text + MSysmbols->GetSymb();
}
private: System::Void fileTypeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FileType^ Types = gcnew FileType;
	Types->ShowDialog();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Do You Really Want to Exit?", "BTG Text Power", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		e->Cancel = true;
	}
}
};
}
