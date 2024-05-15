#include <fstream>
#include <ctime>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <string>
#include <iostream>
#include "MyForm1.h"
#pragma once


namespace Nalogazamaturo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel3->Hide();
			


		}

	protected:
	
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ username_mail;
	private: System::Windows::Forms::TextBox^ passwordfield;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ gumb;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;














	protected:

	private:
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->username_mail = (gcnew System::Windows::Forms::TextBox());
			this->passwordfield = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->gumb = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label1->Location = System::Drawing::Point(834, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 58);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign in";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label2->Location = System::Drawing::Point(839, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username / mail";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label3->Location = System::Drawing::Point(839, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// username_mail
			// 
			this->username_mail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->username_mail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_mail->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->username_mail->Location = System::Drawing::Point(844, 231);
			this->username_mail->Name = L"username_mail";
			this->username_mail->Size = System::Drawing::Size(240, 16);
			this->username_mail->TabIndex = 4;
			this->username_mail->TextChanged += gcnew System::EventHandler(this, &MyForm::username_mail_TextChanged);
			// 
			// passwordfield
			// 
			this->passwordfield->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->passwordfield->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordfield->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->passwordfield->Location = System::Drawing::Point(843, 300);
			this->passwordfield->Name = L"passwordfield";
			this->passwordfield->Size = System::Drawing::Size(240, 16);
			this->passwordfield->TabIndex = 5;
			this->passwordfield->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel1->Location = System::Drawing::Point(844, 253);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 2);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel2->Location = System::Drawing::Point(844, 322);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 2);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(844, 577);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1012, 577);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 41);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(973, 585);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Or";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button3->Location = System::Drawing::Point(1287, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 33);
			this->button3->TabIndex = 11;
			this->button3->Text = L"X";
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->gumb);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1352, 684);
			this->panel3->TabIndex = 12;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel7->Location = System::Drawing::Point(865, 460);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(249, 2);
			this->panel7->TabIndex = 28;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(864, 438);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(240, 16);
			this->textBox4->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label10->Location = System::Drawing::Point(860, 416);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 19);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Re-Type Password";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel6->Location = System::Drawing::Point(864, 381);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(249, 2);
			this->panel6->TabIndex = 25;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(863, 359);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(240, 16);
			this->textBox3->TabIndex = 24;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label9->Location = System::Drawing::Point(859, 337);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 19);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Password";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button4->Location = System::Drawing::Point(1307, 9);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 33);
			this->button4->TabIndex = 22;
			this->button4->Text = L"X";
			this->button4->UseCompatibleTextRendering = true;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// gumb
			// 
			this->gumb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->gumb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gumb->ForeColor = System::Drawing::Color::White;
			this->gumb->Location = System::Drawing::Point(864, 551);
			this->gumb->Name = L"gumb";
			this->gumb->Size = System::Drawing::Size(125, 41);
			this->gumb->TabIndex = 20;
			this->gumb->Text = L"Sign up";
			this->gumb->UseVisualStyleBackColor = false;
			this->gumb->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel4->Location = System::Drawing::Point(864, 305);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(249, 2);
			this->panel4->TabIndex = 18;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel5->Location = System::Drawing::Point(864, 236);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(249, 2);
			this->panel5->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(863, 283);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 16);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(864, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 16);
			this->textBox2->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label6->Location = System::Drawing::Point(859, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 19);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label7->Location = System::Drawing::Point(859, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 19);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Username";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->label8->Location = System::Drawing::Point(854, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(183, 58);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Sign up";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1352, 684);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->passwordfield);
			this->Controls->Add(this->username_mail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: int getid() {
		std::fstream file("data.txt", std::ios::in);
		std::string line;
		std::string lastLine;


		while (getline(file, line)) {
			if (!line.empty()) {
				lastLine = line;
			}
		}

		file.close();


		if (lastLine.empty()) {
			return 0;
		}

		std::istringstream iss(lastLine);
		int id;
		iss >> id;

		return id;
	}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string inputUsername = context.marshal_as<std::string>(username_mail->Text);
		std::string inputPassword = context.marshal_as<std::string>(passwordfield->Text);
		std::fstream file("data.txt", std::ios::in);

		std::string line;
		bool credentialsMatch = false;
		int id = -1;  // Declare ID here to have a wider scope

		while (getline(file, line) && !credentialsMatch) {
			std::istringstream iss(line);
			std::string fileUsername, filePassword, fileDatetime;

			if (iss >> id >> fileUsername >> filePassword >> fileDatetime) {
				if (fileUsername == inputUsername && filePassword == inputPassword) {
					credentialsMatch = true;
				}
			}
		}
		file.close();

		if (credentialsMatch) {
			MyForm1^ myform1 = gcnew MyForm1();
			myform1->setvalue(id);
			myform1->Show();

			this->Hide();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Invalid username or password!");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Show();
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void username_mail_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = getid() + 1;
		std::fstream file("data.txt", std::ios::out | std::ios::app);

		msclr::interop::marshal_context context;

		std::string username = context.marshal_as<std::string>(textBox2->Text);

		std::string password = context.marshal_as<std::string>(textBox3->Text);


		// Getting the current timed
		std::time_t now = std::time(nullptr);
		char* dt = std::ctime(&now);

		// Remove newline character from ctime result
		std::string datetime(dt);
		datetime.pop_back();

		// Write data to file in the specified format
		file << id << " " << username << " " << password << " " << datetime << std::endl;

		file.close();
		panel3->Hide();

	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
