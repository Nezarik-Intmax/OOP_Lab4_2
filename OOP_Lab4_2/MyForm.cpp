#include "MyForm.h"
#include "Model.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OOPLab42::MyForm form;
	Application::Run(% form);
}