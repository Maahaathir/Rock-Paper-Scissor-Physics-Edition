#include "MyForm.h"
#include "resource.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    RPSPHYSICS::MyForm form;
    Application::Run(% form);
    return 0;
}

