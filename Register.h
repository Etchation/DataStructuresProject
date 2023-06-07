#pragma once
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
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
		Form^ login;
	private: System::Windows::Forms::Label^ error_lab;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;
	private: System::Windows::Forms::ErrorProvider^ errorProvider4;
	private: System::Windows::Forms::ErrorProvider^ errorProvider5;
	private: System::Windows::Forms::ErrorProvider^ errorProvider6;
	private: System::Windows::Forms::ErrorProvider^ errorProvider7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ age_box;

		   bool error;
		   F^ f;
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Register(Form^ page, bool Error, F^ fu)
		{
			InitializeComponent();
			login = page;
			error = Error;
			f = fu;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name_box;
	protected:

	private: System::Windows::Forms::TextBox^ id_box;
	private: System::Windows::Forms::TextBox^ password_box;
	protected:

	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::RadioButton^ male_rad;
	private: System::Windows::Forms::RadioButton^ female_rad;


	private: System::Windows::Forms::ComboBox^ gov_box;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ vacc_box;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ signup_btn;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ exit_btn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->id_box = (gcnew System::Windows::Forms::TextBox());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->male_rad = (gcnew System::Windows::Forms::RadioButton());
			this->female_rad = (gcnew System::Windows::Forms::RadioButton());
			this->gov_box = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->vacc_box = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->signup_btn = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->error_lab = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider5 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider6 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider7 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->age_box = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider7))->BeginInit();
			this->SuspendLayout();
			// 
			// name_box
			// 
			this->name_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_box->Location = System::Drawing::Point(153, 298);
			this->name_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_box->Multiline = true;
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(532, 54);
			this->name_box->TabIndex = 0;
			this->name_box->TextChanged += gcnew System::EventHandler(this, &Register::name_box_TextChanged);
			// 
			// id_box
			// 
			this->id_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_box->Location = System::Drawing::Point(153, 462);
			this->id_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->id_box->Multiline = true;
			this->id_box->Name = L"id_box";
			this->id_box->Size = System::Drawing::Size(532, 54);
			this->id_box->TabIndex = 1;
			this->id_box->TextChanged += gcnew System::EventHandler(this, &Register::textBox2_TextChanged);
			// 
			// password_box
			// 
			this->password_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_box->Location = System::Drawing::Point(153, 634);
			this->password_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->password_box->Multiline = true;
			this->password_box->Name = L"password_box";
			this->password_box->Size = System::Drawing::Size(532, 54);
			this->password_box->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Location = System::Drawing::Point(153, 362);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(532, 8);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Location = System::Drawing::Point(153, 525);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(532, 8);
			this->panel2->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Location = System::Drawing::Point(153, 697);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(532, 8);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Location = System::Drawing::Point(42, 460);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(102, 72);
			this->panel4->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(42, 292);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(102, 77);
			this->panel5->TabIndex = 7;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Register::panel5_Paint);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel6->Location = System::Drawing::Point(42, 632);
			this->panel6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(102, 72);
			this->panel6->TabIndex = 8;
			// 
			// male_rad
			// 
			this->male_rad->AutoSize = true;
			this->male_rad->BackColor = System::Drawing::Color::Transparent;
			this->male_rad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male_rad->Location = System::Drawing::Point(208, 800);
			this->male_rad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->male_rad->Name = L"male_rad";
			this->male_rad->Size = System::Drawing::Size(90, 35);
			this->male_rad->TabIndex = 9;
			this->male_rad->TabStop = true;
			this->male_rad->Text = L"Male";
			this->male_rad->UseVisualStyleBackColor = false;
			// 
			// female_rad
			// 
			this->female_rad->AutoSize = true;
			this->female_rad->BackColor = System::Drawing::Color::Transparent;
			this->female_rad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female_rad->Location = System::Drawing::Point(424, 800);
			this->female_rad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->female_rad->Name = L"female_rad";
			this->female_rad->Size = System::Drawing::Size(122, 35);
			this->female_rad->TabIndex = 10;
			this->female_rad->TabStop = true;
			this->female_rad->Text = L"Female";
			this->female_rad->UseVisualStyleBackColor = false;
			// 
			// gov_box
			// 
			this->gov_box->DropDownHeight = 100;
			this->gov_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gov_box->FormattingEnabled = true;
			this->gov_box->IntegralHeight = false;
			this->gov_box->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Alexandria", L"Aswan", L"Asyut", L"Beheira", L"Beni Suef",
					L"Cairo", L"Dakahlia", L"Damietta", L"Faiyum", L"Gharbia", L"Giza", L"Ismailia", L"Kafr El Sheikh", L"Luxor", L"Matruh", L"Minya",
					L"Monufia", L"New Valley", L"North Sinai", L"Port Said", L"Qalyubia", L"Qena", L"Red Sea", L"Sharqia", L"Sohag", L"South Sinai",
					L"Suez"
			});
			this->gov_box->Location = System::Drawing::Point(1062, 357);
			this->gov_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->gov_box->Name = L"gov_box";
			this->gov_box->Size = System::Drawing::Size(514, 33);
			this->gov_box->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(854, 308);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 29);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Governorate:";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(988, 471);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Age:";
			// 
			// vacc_box
			// 
			this->vacc_box->DropDownHeight = 100;
			this->vacc_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vacc_box->FormattingEnabled = true;
			this->vacc_box->IntegralHeight = false;
			this->vacc_box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"One Time", L"Two Times" });
			this->vacc_box->Location = System::Drawing::Point(1062, 697);
			this->vacc_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vacc_box->Name = L"vacc_box";
			this->vacc_box->Size = System::Drawing::Size(514, 33);
			this->vacc_box->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(868, 643);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Vaccination:";
			// 
			// signup_btn
			// 
			this->signup_btn->BackColor = System::Drawing::Color::Transparent;
			this->signup_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signup_btn.BackgroundImage")));
			this->signup_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->signup_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup_btn->FlatAppearance->BorderSize = 0;
			this->signup_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->signup_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->signup_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_btn->Location = System::Drawing::Point(1143, 820);
			this->signup_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->signup_btn->Name = L"signup_btn";
			this->signup_btn->Size = System::Drawing::Size(282, 88);
			this->signup_btn->TabIndex = 17;
			this->signup_btn->UseVisualStyleBackColor = false;
			this->signup_btn->Click += gcnew System::EventHandler(this, &Register::signup_btn_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel7->Location = System::Drawing::Point(687, -40);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(268, 289);
			this->panel7->TabIndex = 18;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Register::panel7_Paint);
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::Transparent;
			this->exit_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_btn->Location = System::Drawing::Point(1544, 0);
			this->exit_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(102, 55);
			this->exit_btn->TabIndex = 19;
			this->exit_btn->Text = L"X";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Register::exit_btn_Click);
			// 
			// error_lab
			// 
			this->error_lab->BackColor = System::Drawing::Color::Transparent;
			this->error_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error_lab->ForeColor = System::Drawing::Color::Green;
			this->error_lab->Location = System::Drawing::Point(147, 168);
			this->error_lab->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->error_lab->Name = L"error_lab";
			this->error_lab->Size = System::Drawing::Size(501, 82);
			this->error_lab->TabIndex = 20;
			this->error_lab->Text = L"Taken or Incorrecrt National ID Please try again ";
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
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// errorProvider4
			// 
			this->errorProvider4->ContainerControl = this;
			// 
			// errorProvider5
			// 
			this->errorProvider5->ContainerControl = this;
			// 
			// errorProvider6
			// 
			this->errorProvider6->ContainerControl = this;
			// 
			// errorProvider7
			// 
			this->errorProvider7->ContainerControl = this;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(-3, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 65);
			this->button1->TabIndex = 21;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// age_box
			// 
			this->age_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->age_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_box->Location = System::Drawing::Point(1062, 525);
			this->age_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->age_box->Multiline = true;
			this->age_box->Name = L"age_box";
			this->age_box->Size = System::Drawing::Size(516, 54);
			this->age_box->TabIndex = 5;
			this->age_box->TextChanged += gcnew System::EventHandler(this, &Register::age_box_TextChanged);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1644, 957);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->age_box);
			this->Controls->Add(this->error_lab);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->signup_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->vacc_box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gov_box);
			this->Controls->Add(this->female_rad);
			this->Controls->Add(this->male_rad);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->password_box);
			this->Controls->Add(this->id_box);
			this->Controls->Add(this->name_box);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//if he enter anything else except number in national id textbox
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		id_box->MaxLength = 13;
		if (System::Text::RegularExpressions::Regex::IsMatch(id_box->Text, "[^0-9]"))
		{
			errorProvider2->SetError(this->id_box, "Please enter numbers only");
			id_box->Clear();
		}
	}

		   //Register
	private: System::Void signup_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = gcnew User();
		bool valid = true;

		//validation
		if (name_box->TextLength == 0)
		{
			valid = false;

			errorProvider1->SetError(this->name_box, "Please enter your full name");
		}
		else
		{

			errorProvider1->SetError(this->name_box, nullptr);
		}
		//validation
		if (id_box->TextLength < 13)
		{
			valid = false;

			errorProvider2->SetError(this->id_box, "Please enter full ID");
		}
		else
		{

			errorProvider2->SetError(this->id_box, nullptr);
		}
		//validation
		if (password_box->TextLength == 0)
		{
			valid = false;

			errorProvider3->SetError(this->password_box, "Please enter a Password");
		}
		else
		{

			errorProvider3->SetError(this->password_box, nullptr);
		}
		//validation
		if (!male_rad->Checked && !female_rad->Checked)
		{
			valid = false;

			errorProvider4->SetError(this->female_rad, "Please select a Gender");

		}
		else
		{

			errorProvider4->SetError(this->female_rad, nullptr);


		}
		//validation
		if (gov_box->SelectedItem == nullptr)
		{
			valid = false;
			errorProvider5->SetError(this->gov_box, "Please enter your governorate");
		}
		else
		{
			errorProvider5->SetError(this->gov_box, nullptr);
		}
		//validation
		if (age_box->Text=="" || age_box->Text=="0")
		{
			valid = false;
			
			errorProvider6->SetError(this->age_box, "Please enter your age");
		}
		else
		{
			errorProvider6->SetError(this->age_box, nullptr);
		}
		//validation
		if (vacc_box->SelectedItem == nullptr)
		{
			valid = false;
			errorProvider7->SetError(this->vacc_box, "Please enter how many times you have been vaccinated");
		}
		else
		{
			errorProvider7->SetError(this->vacc_box, nullptr);
		}

		/*//////////////////////////////////////////////////////////////////////////////////////*/

		if (valid == true) {
			//Take the value and assign them to the object
			user->fullname = name_box->Text;
			user->national_id = id_box->Text;
			user->password = password_box->Text;

			if (male_rad->Checked)
			{
				user->gender = male_rad->Text;
			}
			else if (female_rad->Checked)
			{
				user->gender = female_rad->Text;
			}

			user->governorate = gov_box->SelectedItem->ToString();
			user->age = age_box->Text;

			if (vacc_box->SelectedItem->ToString() == "None")
			{
				user->vaccinated = "0";
			}
			else if (vacc_box->SelectedItem->ToString() == "One Time")
			{
				user->vaccinated = "1";
			}
			else if (vacc_box->SelectedItem->ToString() == "Two Times")
			{
				user->vaccinated = "2";
			}

			//check if the national id is taken or not
			if (f->Valid_National_ID(user->national_id))
			{
				f->user_vector.push_back(user);

				//go to Login Page
				login->Show();
				this->Hide();
			}
			else
			{
				Register^ r = gcnew Register(login, true, f);
				r->Show();
				this->Hide();
			}
		}

	}

	//function for exit button
	//Hossam
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to Exit", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			f->Write_File();
			f->Write_Admin_File();
			Application::Exit();
		}
	}

	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
		if (error)
		{
			error_lab->Visible = true;
		}
	}
	private: System::Void name_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		login->Show();
		this->Hide();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void age_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(age_box->Text, "[^0-9]"))
		{
			age_box->Clear();
			errorProvider6->SetError(this->age_box, "Please enter your age");
		}
	}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}