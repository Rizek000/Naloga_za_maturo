#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

#pragma once

namespace Nalogazamaturo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;

	public:
		int id;
		void setvalue(int _id) {
			this->id = _id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 39);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ime izdelka";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(269, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 39);
			this->label6->TabIndex = 1;
			this->label6->Text = L"vrsta izdelka";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(501, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(229, 39);
			this->label7->TabIndex = 2;
			this->label7->Text = L"status izdelka";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(755, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(195, 39);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Rok porabe";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(974, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(222, 39);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Datum vnosa";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 47);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(276, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 47);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(495, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 47);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(754, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 47);
			this->textBox4->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(974, 151);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 39);
			this->label10->TabIndex = 9;
			this->label10->Text = L"error";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(959, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 67);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1335, 568);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm2_Load_1(System::Object^ sender, System::EventArgs^ e) {
		System::DateTime now = System::DateTime::Now;

		// Formatting the date and time string as desired
		// Example format: "MM/dd/yyyy HH:mm:ss"
		System::String^ dateTimeStr = now.ToString("MM/dd/yyyy HH:mm:ss");

		// Setting the formatted string to label10
		label10->Text = dateTimeStr;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		// Convert the id to std::string and create a filename
		std::string idStr = context.marshal_as<std::string>(id.ToString());
		std::string filename = idStr + ".csv";

		// Retrieving text from textboxes and converting to std::string
		std::string input1 = context.marshal_as<std::string>(textBox1->Text);
		std::string input2 = context.marshal_as<std::string>(textBox2->Text);
		std::string input3 = context.marshal_as<std::string>(textBox3->Text);
		std::string input4 = context.marshal_as<std::string>(textBox4->Text);
		std::string inputLabel = context.marshal_as<std::string>(label10->Text); // Label10 as an input

		// Prepare the line to write to the CSV
		std::string csvLine = input1 + "," + input2 + "," + input3 + "," + input4 + "," + inputLabel + "\n";

		// Opening file in append mode
		std::ofstream file(filename, std::ios::app);
		if (file.is_open()) {
			// Write the line to the file
			file << csvLine;
			file.close(); // Close the file after writing
			this->Hide();
		}
	}
};
}
