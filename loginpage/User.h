#pragma once

using namespace System;
public ref class User {
public:
	int id;
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	String^ password;

		
	int currentForm1 = 10;

	int currentForm() {
		return currentForm1;
	}
	void setCurrentForm(int form) {
		currentForm1 = form;

	}
};
delegate void EventDelegate1(System::Object^ sender, System::EventArgs^ e, String^ message);
