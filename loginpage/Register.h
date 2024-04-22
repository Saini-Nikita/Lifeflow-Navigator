#pragma once
#include "User.h"

namespace loginpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbCnfPassword;

	private: System::Windows::Forms::Button^ btnOk;

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::LinkLabel^ llLogin;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbCnfPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(942, 82);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &Register::label2_Click);
			// 
			// Name
			// 
			this->Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(15, 154);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(169, 66);
			this->Name->TabIndex = 2;
			this->Name->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(203, 141);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(643, 44);
			this->tbName->TabIndex = 3;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &Register::textBox1_TextChanged);
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(203, 229);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(643, 44);
			this->tbEmail->TabIndex = 4;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &Register::tbEmail_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 477);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 79);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Confirm Password";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 398);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 38);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 43);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPhone->Location = System::Drawing::Point(203, 307);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(643, 44);
			this->tbPhone->TabIndex = 8;
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(203, 392);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(643, 44);
			this->tbPassword->TabIndex = 9;
			// 
			// tbCnfPassword
			// 
			this->tbCnfPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCnfPassword->Location = System::Drawing::Point(203, 471);
			this->tbCnfPassword->Name = L"tbCnfPassword";
			this->tbCnfPassword->PasswordChar = '*';
			this->tbCnfPassword->Size = System::Drawing::Size(643, 44);
			this->tbCnfPassword->TabIndex = 10;
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(380, 553);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(147, 48);
			this->btnOk->TabIndex = 11;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &Register::btnOk_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(552, 553);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(147, 48);
			this->btnExit->TabIndex = 12;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Register::btmExit_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(818, 581);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(96, 37);
			this->llLogin->TabIndex = 13;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::linkLabel1_LinkClicked);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(988, 633);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbCnfPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			//this->Name = "Register";
			//this->Text = "Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btmExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
public:bool switchToLogin = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}
public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbEmail ->Text;
	String^ phone = tbPhone->Text;
	String^ password = tbPassword->Text;
	String^ confirmpassword = tbCnfPassword->Text;
	
	if (name->Length == 0 || email->Length == 0
		|| phone->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please fill all the fields",
			"One or more empty field", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, confirmpassword) != 0) {
		MessageBox::Show("Passowrd and Confirm Password do not match",
			"Password error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO users"
			+ "(name,enail,phone,password) VALUES" +
			"(@name,@email,@phone,@password);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@password", password);
		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->password = password;
		this->Close();

	}
	catch (Exception^ ex) {
	    MessageBox::Show("Failed to register",
			"Registration Failed", MessageBoxButtons::OK);

	}

}
private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
