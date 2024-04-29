#pragma once
#include "User.h"
#include "Register.h"
namespace loginpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private:
		SqlConnection^ cn;
		DataSet^ CustomersDataSet;
		SqlDataAdapter^ da;
		SqlCommandBuilder^ cmdBuilder;
		BindingSource^ source;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(142, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(545, 70);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Login ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(211, 372);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(175, 61);
			this->btn1->TabIndex = 6;
			this->btn1->Text = L"OK!";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &LoginForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(453, 372);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(180, 61);
			this->btn2->TabIndex = 7;
			this->btn2->Text = L"Exit";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &LoginForm::btn2_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(350, 473);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(93, 26);
			this->llRegister->TabIndex = 8;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(244, 169);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(406, 150);
			this->dataGridView1->TabIndex = 9;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 597);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->label4);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();


		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {


			cn = gcnew SqlConnection();
			CustomersDataSet = gcnew DataSet();

			cn->ConnectionString = "Data Source=LAPTOP-8O1PHOFG\\SQLEXPRESS;Initial Catalog=login;Integrated Security=True;"; "Server=server;Database=northwind;UID=login;PWD=password;";
			cn->Open();

			//Initialize the SqlDataAdapter object by specifying a Select command
			//that retrieves data from the sample table
			da = gcnew SqlDataAdapter("select *  FROM [login].[dbo].[user]", cn);

			//Initialize the SqlCommandBuilder object to automatically generate and initialize
			//the UpdateCommand, InsertCommand and DeleteCommand properties of the SqlDataAdapter
			cmdBuilder = gcnew SqlCommandBuilder(da);
			DataTable^ table = gcnew DataTable();

			//Populate the DataSet by executing the Fill method of the SqlDataAdapter
			da->Fill(table);

			source = gcnew BindingSource();
			source->DataSource = table;
			dataGridView1->DataSource = source;
			da->Update(table);
		}
		catch (Exception^ e) {
			Console::WriteLine("Customer Name after Update : ");


		}

    }

	public: User^ user =nullptr;
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
public: bool switchToRegister = false;
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToRegister = true;
	//Register^ formReg = gcnew Register;
	//formReg->Show();
//	this->Hide();
}

};
}



