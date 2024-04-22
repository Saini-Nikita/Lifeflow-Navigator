#include "LoginForm.h"
#include "MainForm.h"
#include "Register.h"


using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
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
			user = loginform.user;
			break;

		}
	}
	if (user != nullptr) {

		loginpage::MainForm mainform(user);
		Application::Run(% mainform);
	}
	else {

		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}
