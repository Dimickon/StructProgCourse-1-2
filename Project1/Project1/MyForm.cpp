#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace Project1;
using namespace System::Windows::Forms;

[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
