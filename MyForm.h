#pragma once
#include<cliext/vector>
#include"Register.h"
#include"Admin.h"
#include"Admin1.h"
#include"Admin2.h"
#include"Home.h"
#include"User.h"
#include"Func.h"
namespace DS11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		bool error;
		F^ f;
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}
		MyForm(F^ fu,bool Error)
		{
			InitializeComponent();
			error = Error;
			f= fu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ id_box;
	private: System::Windows::Forms::TextBox^ password_box;
	protected:


	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ signup;
	private: System::Windows::Forms::Button^ signin;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ error_lab;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->id_box = (gcnew System::Windows::Forms::TextBox());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->signin = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->error_lab = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// id_box
			// 
			this->id_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_box->Location = System::Drawing::Point(86, 321);
			this->id_box->Name = L"id_box";
			this->id_box->Size = System::Drawing::Size(343, 31);
			this->id_box->TabIndex = 0;
			this->id_box->TextChanged += gcnew System::EventHandler(this, &MyForm::ID_TextChanged);
			// 
			// password_box
			// 
			this->password_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_box->Location = System::Drawing::Point(85, 414);
			this->password_box->Name = L"password_box";
			this->password_box->Size = System::Drawing::Size(343, 31);
			this->password_box->TabIndex = 1;
			this->password_box->UseSystemPasswordChar = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(24, 314);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(55, 49);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(24, 407);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(55, 49);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Location = System::Drawing::Point(86, 358);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 5);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Location = System::Drawing::Point(86, 451);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 5);
			this->panel4->TabIndex = 5;
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::Color::Transparent;
			this->signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signup.BackgroundImage")));
			this->signup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->signup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup->FlatAppearance->BorderSize = 0;
			this->signup->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->signup->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->signup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup->Location = System::Drawing::Point(681, 378);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(183, 67);
			this->signup->TabIndex = 6;
			this->signup->UseVisualStyleBackColor = false;
			this->signup->Click += gcnew System::EventHandler(this, &MyForm::signup_Click);
			// 
			// signin
			// 
			this->signin->BackColor = System::Drawing::Color::Transparent;
			this->signin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signin.BackgroundImage")));
			this->signin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->signin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signin->FlatAppearance->BorderSize = 0;
			this->signin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->signin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->signin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signin->Location = System::Drawing::Point(162, 486);
			this->signin->Name = L"signin";
			this->signin->Size = System::Drawing::Size(183, 65);
			this->signin->TabIndex = 8;
			this->signin->UseVisualStyleBackColor = false;
			this->signin->Click += gcnew System::EventHandler(this, &MyForm::signin_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Transparent;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(961, -1);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(61, 26);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"X";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(412, -7);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(198, 168);
			this->panel5->TabIndex = 10;
			// 
			// error_lab
			// 
			this->error_lab->BackColor = System::Drawing::Color::Transparent;
			this->error_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error_lab->ForeColor = System::Drawing::Color::Green;
			this->error_lab->Location = System::Drawing::Point(162, 272);
			this->error_lab->Name = L"error_lab";
			this->error_lab->Size = System::Drawing::Size(171, 24);
			this->error_lab->TabIndex = 11;
			this->error_lab->Text = L"Login Failed";
			this->error_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->error_lab->Visible = false;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel6->Location = System::Drawing::Point(455, 418);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(51, 33);
			this->panel6->TabIndex = 12;
			this->panel6->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(455, 418);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(51, 33);
			this->panel7->TabIndex = 13;
			this->panel7->Click += gcnew System::EventHandler(this, &MyForm::panel7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1021, 623);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->error_lab);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->signin);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->password_box);
			this->Controls->Add(this->id_box);
			this->Controls->Add(this->panel7);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//////////////////////////////////////////////////////////////


#pragma endregion

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			if (error)
			{
				error_lab->Visible = true;
			}

		}

			   //if he click in sign in he will go to the home page with his info
private: System::Void signin_Click(System::Object^ sender, System::EventArgs^ e) {

	bool valid = true;
	A^ admin;

	//Search if the account is an admin account or not
	for (int i = 0; i < f->admin_vector.size(); i++)
	{
		if (id_box->Text == f->admin_vector[i]->id && password_box->Text == f->admin_vector[i]->password)
		{
			admin = f->admin_vector[i];
		}
	}

	//validation
	if (id_box->TextLength < 13 && admin == nullptr && id_box->Text != "0") {
		valid = false;
		errorProvider1->SetError(this->id_box, "Enter Full ID");
	}
	else
	{
		errorProvider1->SetError(this->id_box, nullptr);
	}

	//validation
	if (password_box->TextLength == 0)
	{
		valid = false;
		errorProvider2->SetError(this->password_box, "Please enter your password");
	}
	else
	{
		errorProvider2->SetError(this->password_box, nullptr);
	}

	if (valid == true) {

		if (id_box->Text == "0" && password_box->Text == "0")
		{
			Admin^ a = gcnew Admin(f, this);
			a->Show();
			this->Hide();
		}
		else
		{
			if (admin != nullptr)
			{
				if (admin->lvl == "1")
				{
					Admin1^ a = gcnew Admin1(f, admin, this);
					a->Show();
					this->Hide();
				}
				else
				{
					Admin2^ a = gcnew Admin2(f, admin, this);
					a->Show();
					this->Hide();
				}
				return;
			}

			for (int i = 0; i < f->user_vector.size(); i++)
			{
				User^ user = f->user_vector[i];
				if (user->national_id == id_box->Text && user->password == password_box->Text)
				{
					this->error = 0;
					Home^ go = gcnew Home(user, this, f);
					go->Show();
					this->Hide();

					//clear the boxes after logout or delete the record
					id_box->Clear();
					password_box->Clear();

					return;
				}
			}

			MyForm^ m = gcnew MyForm(f, 1);
			m->Show();
			this->Hide();
		}
	}
}
		   //function if signup btn clicked He will go to Register Page
private: System::Void signup_Click(System::Object^ sender, System::EventArgs^ e) {
	Register^ go = gcnew Register(this,false,f);
	go->Show();
	this->Hide();
	
}


	   //if he enter anything else except number in national id textbox
private: System::Void ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	id_box->MaxLength = 13;
	if (System::Text::RegularExpressions::Regex::IsMatch(id_box->Text, "[^0-9]"))
	{
		errorProvider1->SetError(this->id_box, "Enter Numbers Only");
		id_box->Clear();
	}
}
	  


		//function for exit button
	   //Hossam
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to Exit", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			f->Write_File();
			f->Write_Admin_File();
			Application::Exit();
		}
	}


private: System::Void panel7_Click(System::Object^ sender, System::EventArgs^ e) {
	password_box->UseSystemPasswordChar = !password_box->UseSystemPasswordChar;
	panel6->BringToFront();
}
private: System::Void panel6_Click(System::Object^ sender, System::EventArgs^ e) {
	password_box->UseSystemPasswordChar = !password_box->UseSystemPasswordChar;
	panel7->BringToFront();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
