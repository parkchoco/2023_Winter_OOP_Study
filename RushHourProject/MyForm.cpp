#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	RushHourProject::MyForm form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}