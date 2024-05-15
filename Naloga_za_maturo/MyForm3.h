#include <fstream>
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
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int id;
		void setvalue(int _id) {
			this->id = _id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(50, 37);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(905, 463);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1071, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1325, 553);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		// Convert the id to std::string to create the filename
		std::string idStr = context.marshal_as<std::string>(id.ToString());
		std::string filename = idStr + ".csv";

		// Opening the file
		std::ifstream file(filename);
		if (file.is_open()) {
			std::string line;

			// Clear existing content in the RichTextBox
			richTextBox1->Text = "";

			// Read file line by line
			while (getline(file, line)) {
				// Convert each line from std::string to System::String^
				System::String^ systemLine = gcnew System::String(line.c_str());

				// Append the line to RichTextBox, adding a newline for each line
				richTextBox1->AppendText(systemLine + Environment::NewLine);
			}

			file.close(); // Close the file after reading
		}
		else {
			// If the file cannot be opened, display an error message in the RichTextBox
			richTextBox1->Text = "Unable to open file.";
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		// Convert the id to std::string to create the filename
		std::string idStr = context.marshal_as<std::string>(id.ToString());
		std::string filename = idStr + ".csv";

		// Convert the content of richTextBox1 to std::string
		std::string richTextBoxContent = context.marshal_as<std::string>(richTextBox1->Text);

		// Open file for writing (std::ofstream defaults to truncating the file when opened)
		std::ofstream file(filename);
			// Write the content of the RichTextBox to the file
			file << richTextBoxContent;
			file.close();
			this->Hide();
	}
};
}
