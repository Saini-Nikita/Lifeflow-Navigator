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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::LinkLabel^ llRegister;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(145, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(145, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 52);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
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
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(414, 176);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(350, 44);
			this->tbemail->TabIndex = 4;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(414, 272);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(350, 44);
			this->tbpassword->TabIndex = 5;
			this->tbpassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox2_TextChanged);
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
			this->llRegister->Size = System::Drawing::Size(134, 37);
			this->llRegister->TabIndex = 8;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 597);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
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
		this->Close();
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



