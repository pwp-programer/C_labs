#include "MyForm.h"
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
using namespace laba26ex1;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;

	

}

