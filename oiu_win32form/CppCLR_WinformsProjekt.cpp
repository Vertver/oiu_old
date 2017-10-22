// CppCLR_WinformsProjekt.cpp: Оконный редактор.

// #include "stdafx.h"
// using namespace System;

//int main(array<System::String ^> ^args)
//{
//    Console::WriteLine(L"Hello World");
//    return 0;
//}
#include "stdafx.h"
#include "Form1.h"
#include "resource.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
// int main(array<String^>^ args) { // Нельзя использовать 'using namespace std;' из-за причины ниже:
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // "CppCLR_WinformsProjekt" не допустим
	return 0;
}