/* "oiu" Version GPL Source Code
/
/ (c) Anton Vertver, Main coder, 2017
/
/ "oiu" Source Code is free software: you can redistribute it and/or modify for your apps and other projects
/
/ The code can contain comments in different languages (like a Russia, English, Deutsh)
/
/ Non-copyright source code
*/
#include "stdafx.h"
#include "Form1.h"
#include "resource.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
// int main(array<String^>^ args) { // Ќельз€ использовать 'using namespace std;' из-за причины ниже:
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // "CppCLR_WinformsProjekt" не допустим
	return 0;
}