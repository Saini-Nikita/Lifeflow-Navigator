#pragma once
#include "User.h"
namespace diarypage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DiaryForm
	/// </summary>
	public ref class DiaryForm : public System::Windows::Forms::Form
	{
	public:
		event EventDelegate1^ moveFormEvent;

		int MoveToForm = 0;
		User^ userCurrent;
		DiaryForm(User^ user)
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
		~DiaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ rtbdiary;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rtbdiary = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(282, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gratitude Diary ";
			// 
			// rtbdiary
			// 
			this->rtbdiary->BackColor = System::Drawing::SystemColors::Window;
			this->rtbdiary->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->rtbdiary->Location = System::Drawing::Point(12, 153);
			this->rtbdiary->Name = L"rtbdiary";
			this->rtbdiary->Size = System::Drawing::Size(843, 456);
			this->rtbdiary->TabIndex = 3;
			this->rtbdiary->Text = L"";
			this->rtbdiary->TextChanged += gcnew System::EventHandler(this, &DiaryForm::rtbdiary_TextChanged);
			// 
			// DiaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(912, 659);
			this->Controls->Add(this->rtbdiary);
			this->Controls->Add(this->label1);
			this->Name = L"DiaryForm";
			this->Text = L"DiaryForm";
			this->Load += gcnew System::EventHandler(this, &DiaryForm::DiaryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rtbdiary_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DiaryForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}