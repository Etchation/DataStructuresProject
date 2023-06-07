#include"MyForm.h"
#include"Register.h"
#include"Home.h"
#include"Func.h"
#include"User.h"
#include"Admin.h"
#include<cliext/vector>
#include<cliext/queue>


using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
[STAThreadAttribute]

int main() {

	F^ f = gcnew F();
	f->user_vector = f->Read_File();
	f->admin_vector = f->Read_Admin_File();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DS11::MyForm form(f,0);
	Application::Run(% form);

}



