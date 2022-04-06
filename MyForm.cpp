#include "MyForm.h"
#include<string>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MyForm form;
	Application::Run(% form);
}