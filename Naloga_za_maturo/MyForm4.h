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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(477, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(381, 146);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1330, 571);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		// File names
		std::string idStr = context.marshal_as<std::string>(id.ToString());
		std::string csvFilename = idStr + ".csv";
		std::string txtFilename = "data.txt";

		// Delete the CSV file
		if (remove(csvFilename.c_str()) != 0) {
			MessageBox::Show("Failed to delete CSV file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("CSV file deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// Read the TXT file and remove the line with the matching ID
		std::ifstream txtFile(txtFilename);
		std::vector<std::string> lines;
		std::string line;

		if (txtFile.is_open()) {
			while (getline(txtFile, line)) {
				std::size_t pos = line.find(idStr);
				// Ensure that the position found is not a substring of another ID
				if (pos != std::string::npos) {
					// Check the characters around the found position to ensure it's an exact match
					bool isExactMatch = (pos == 0 || !isdigit(line[pos - 1])) && // Check preceding character
						(pos + idStr.length() == line.length() || !isdigit(line[pos + idStr.length()])); // Check following character

					if (!isExactMatch) {
						lines.push_back(line); // Add line to keep
					}
				}
				else {
					lines.push_back(line); // Add line to keep
				}
			}
			txtFile.close();

			// Rewrite the TXT file without the deleted line
			std::ofstream outFile(txtFilename, std::ios::trunc); // Open with truncation
			for (const auto& l : lines) {
				outFile << l << std::endl;
			}
			outFile.close();
			MessageBox::Show("TXT file updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Failed to open TXT file for reading.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		this->Close();
		Application::Exit();
	
	}
	};
}
