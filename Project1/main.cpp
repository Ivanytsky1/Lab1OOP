#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Lab1App::Form1 form;
    Application::Run(% form);
}
