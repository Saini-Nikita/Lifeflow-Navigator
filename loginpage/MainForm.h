#pragma once
#include "User.h"
namespace loginpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//lbUserInfo->Text = "ID=" + user->id + ",Name=" + user->name +
				//",email=" + user->email + ",address=" + user->address;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ llLogout;
	private: System::Windows::Forms::LinkLabel^ lltask;
	private: System::Windows::Forms::LinkLabel^ llhabits;
	private: System::Windows::Forms::LinkLabel^ llmood;
	private: System::Windows::Forms::LinkLabel^ lldiary;




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
			this->llLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->lltask = (gcnew System::Windows::Forms::LinkLabel());
			this->llhabits = (gcnew System::Windows::Forms::LinkLabel());
			this->llmood = (gcnew System::Windows::Forms::LinkLabel());
			this->lldiary = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(714, 95);
			this->label1->TabIndex = 0;
			this->label1->Text = L"@userName \'s  DashBoard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// llLogout
			// 
			this->llLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogout->Location = System::Drawing::Point(763, 30);
			this->llLogout->Name = L"llLogout";
			this->llLogout->Size = System::Drawing::Size(78, 31);
			this->llLogout->TabIndex = 2;
			this->llLogout->TabStop = true;
			this->llLogout->Text = L"Logout";
			// 
			// lltask
			// 
			this->lltask->AutoSize = true;
			this->lltask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lltask->LinkColor = System::Drawing::Color::Black;
			this->lltask->Location = System::Drawing::Point(39, 182);
			this->lltask->Name = L"lltask";
			this->lltask->Size = System::Drawing::Size(222, 37);
			this->lltask->TabIndex = 3;
			this->lltask->TabStop = true;
			this->lltask->Text = L"Task Manager";
			this->lltask->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::lltask_LinkClicked);
			// 
			// llhabits
			// 
			this->llhabits->AutoSize = true;
			this->llhabits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llhabits->LinkColor = System::Drawing::Color::Black;
			this->llhabits->Location = System::Drawing::Point(39, 269);
			this->llhabits->Name = L"llhabits";
			this->llhabits->Size = System::Drawing::Size(226, 37);
			this->llhabits->TabIndex = 4;
			this->llhabits->TabStop = true;
			this->llhabits->Text = L"Habits Tracker";
			// 
			// llmood
			// 
			this->llmood->AutoSize = true;
			this->llmood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llmood->LinkColor = System::Drawing::Color::Black;
			this->llmood->Location = System::Drawing::Point(39, 363);
			this->llmood->Name = L"llmood";
			this->llmood->Size = System::Drawing::Size(215, 37);
			this->llmood->TabIndex = 5;
			this->llmood->TabStop = true;
			this->llmood->Text = L"Mood Tracker";
			// 
			// lldiary
			// 
			this->lldiary->AutoSize = true;
			this->lldiary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lldiary->LinkColor = System::Drawing::Color::Black;
			this->lldiary->Location = System::Drawing::Point(24, 465);
			this->lldiary->Name = L"lldiary";
			this->lldiary->Size = System::Drawing::Size(241, 37);
			this->lldiary->TabIndex = 6;
			this->lldiary->TabStop = true;
			this->lldiary->Text = L" Gratitude Diary";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(865, 587);
			this->Controls->Add(this->lldiary);
			this->Controls->Add(this->llmood);
			this->Controls->Add(this->llhabits);
			this->Controls->Add(this->lltask);
			this->Controls->Add(this->llLogout);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lltask_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
};
}
