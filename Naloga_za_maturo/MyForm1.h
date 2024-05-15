#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include <algorithm>
#pragma once

namespace Nalogazamaturo {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;


	public:
		int id;
		void setvalue(int _id) {
			this->id = _id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(71, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Error";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(992, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ADD data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(992, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ALTER data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(992, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 53);
			this->button3->TabIndex = 4;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(194, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Error";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button4->Location = System::Drawing::Point(1156, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 33);
			this->button4->TabIndex = 23;
			this->button4->Text = L"X";
			this->button4->UseCompatibleTextRendering = true;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1225, 520);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
    // Convert the id to a string and display it on label1
    label1->Text = id.ToString();

    // Convert System::String^ to std::string
    msclr::interop::marshal_context context;
    std::string idStr = context.marshal_as<std::string>(id.ToString());

    // Construct the filename by appending ".csv" to the id string
    std::string filename = idStr + ".csv";

    // Check if the file exists
    std::ifstream file(filename);
    if (file) {
        // File exists, read its content
        std::string content, line;
        while (getline(file, line)) {
            content += line + "\n"; // Read each line and append to content
        }
        file.close();

        // Convert std::string to System::String^ for display
        System::String^ displayContent = gcnew System::String(content.c_str());
        label2->Text = displayContent; // Display the content in label2

        System::Windows::Forms::MessageBox::Show("File exists and content has been loaded.", "File Open", System::Windows::Forms::MessageBoxButtons::OK);
    }
    else {
        // File does not exist, create it
        std::ofstream newFile(filename);
        if (newFile) {
            newFile.close();
            System::Windows::Forms::MessageBox::Show("File did not exist and has been created.", "File Created", System::Windows::Forms::MessageBoxButtons::OK);
        }
        else {
            System::Windows::Forms::MessageBox::Show("Failed to create the file.", "Error", System::Windows::Forms::MessageBoxButtons::OK);
        }
    }
}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ myform2 = gcnew MyForm2();
	myform2->setvalue(id);
	myform2->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ myform3 = gcnew MyForm3();
	myform3->setvalue(id);
	myform3->Show();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = id.ToString();

	// Convert System::String^ to std::string
	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(id.ToString());

	// Construct the filename by appending ".csv" to the id string
	std::string filename = idStr + ".csv";

	// Check if the file exists
	std::ifstream file(filename);
	if (file) {
		// File exists, read its content
		std::string content, line;
		while (getline(file, line)) {
			// Replace commas with spaces in each line
			std::replace(line.begin(), line.end(), ',', ' ');
			content += line + "\n"; // Read each line and append to content
		}
		file.close();

		// Convert std::string to System::String^ for display
		System::String^ displayContent = gcnew System::String(content.c_str());
		label2->Text = displayContent; // Display the content in label2
	}
	else {
		label2->Text = "File does not exist.";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ myform4 = gcnew MyForm4();
	myform4->setvalue(id);
	myform4->Show();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
