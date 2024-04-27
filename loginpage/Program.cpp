#include "LoginForm.h"
#include "MainForm.h"
#include "Register.h"
#include "Taskform.h"
#include "DiaryForm.h"

using namespace System;
using namespace System::Collections::Generic;


using namespace System::Windows::Forms;
using namespace loginpage;
using namespace diarypage;
enum class myenum
{
    MainForm,
    TaskForm
};

ref class MyApplicationContext : public ApplicationContext
{
    
private:
    int _formCount;
    static User^ user;
    static loginpage::MainForm^ _form1;
    static loginpage::Taskform^ _form2;
    static diarypage::DiaryForm^ diary;
    System::Drawing::Rectangle _form1Position;
    System::Drawing::Rectangle _form2Position;
    static Dictionary<String^, int>^ openWith = gcnew Dictionary<String^, int>();

public:
    


  
    MyApplicationContext(User^ user1)
    {
        _formCount = 0;
        user = user1;
        // Handle the ApplicationExit event to know when the application is exiting.
        Application::ApplicationExit += gcnew EventHandler(this, &MyApplicationContext::OnApplicationExit);
        
        openWith->Add("MainForm",0);
        openWith->Add("Taskform",1);
        openWith->Add("DiaryForm", 2);

        // Create both application forms and handle the Closed event
        // to know when both forms are closed.
        _form1 = gcnew loginpage::MainForm(user);

       
        _form1->moveFormEvent += gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
        _form1->ShowDialog();
    }



    void OnApplicationExit(Object^ /*sender*/, EventArgs^ /*e*/)
    {


    }

private:

    int getMoveToForm(Object^ sender) {

        int val;
        try{
        val= openWith[sender->GetType()->Name];
        }
        catch (Exception^ e) {
            val = 1;
        }
        int valToReturn = 0;
        switch (val) {
        case 2:
            valToReturn = (safe_cast<DiaryForm^> (sender))->MoveToForm;
            //_form2->moveFormEvent -= gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            //_form2->Close();
            delete diary;
            break;
        case 1:
            valToReturn=(safe_cast<loginpage::Taskform^> (sender))->MoveToForm;
            //_form2->moveFormEvent -= gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            //_form2->Close();
            delete _form2;
            break;
        default:
            valToReturn = (safe_cast<loginpage::MainForm^> (sender))->MoveToForm;
            //(safe_cast<loginpage::MainForm^> (sender))->moveFormEvent -= gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            //_form1->Close();
            delete _form1;
            break;
        }

        return valToReturn;
    
    }

    void OnFormClosing(Object^ sender, EventArgs^ e, String^ text)
    {

        int moveToForm = getMoveToForm(sender);
        
       // MessageBox::Show("closed", sender->GetType()->Name);
        switch (moveToForm) {
        case 0:
            _form1 = gcnew loginpage::MainForm(user);
            
            _form1->moveFormEvent += gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            _form1->ShowDialog();
            break;

        case 10:
           
            _form2 = gcnew loginpage::Taskform(user);
           
            _form2->moveFormEvent += gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            _form2->ShowDialog();
            break;
        case 20:
            diary = gcnew diarypage::DiaryForm(user);

            diary->moveFormEvent += gcnew EventDelegate1(this, &MyApplicationContext::OnFormClosing);
            diary->ShowDialog();
            break;
        }

        
        

    }

    void OnFormClosed(Object^ /*sender*/, EventArgs^ /*e*/)
    {

        MessageBox::Show("closed", "FormClosed Event");
        Application::Exit();

        // When a form is closed, decrement the count of open forms.
        // When the count gets to 0, exit the app by calling
        // ExitThread().
       
    }

};


void main(array<String^>^ args)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	user = gcnew User;
	while (true) {
		loginpage::LoginForm loginform;
		loginform.ShowDialog();
		if (loginform.switchToRegister) {
			loginpage::Register registerform;
			registerform.ShowDialog();
			if (registerform.switchToLogin) {
				continue;
			}

		}
		else {
			break;

		}
	}
	if (user != nullptr) {

        MyApplicationContext^ context = gcnew MyApplicationContext(user);
        // Run the application with the specific context. It will exit when
        // all forms are closed.
        Application::Run(context);

	}
	else {

		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}
