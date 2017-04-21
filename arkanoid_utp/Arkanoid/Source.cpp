#include "Autorzy.h"
#include "Gra.h"
#include "Witaj.h"

using namespace Arkanoid;
void CloseWindow(Object^ sender, FormClosedEventArgs^ a)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();
	}
	else
	{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	}

}
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Witaj^ first = gcnew Witaj();
	first->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	first->Show();
	Application::Run();
}