#pragma once
#include"Func.h"
#include"User.h"
namespace DS11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
		

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ link_box;
	private: System::Windows::Forms::Button^ Unlink_btn;
	private: System::Windows::Forms::Button^ logout_btn;
	private: System::Windows::Forms::Label^ same_linkded_lab;
	private: System::Windows::Forms::Label^ invalid_linked_lab;
	private: System::Windows::Forms::TextBox^ new_pass_box;
	private: System::Windows::Forms::Button^ record_btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ edit_btn;
	private: System::Windows::Forms::Button^ family_btn;
	private: System::Windows::Forms::Panel^ menu;
	private: System::Windows::Forms::Panel^ records_pan;
	private: System::Windows::Forms::Label^ full_name_lab;
	private: System::Windows::Forms::Label^ national_id_lab;
	private: System::Windows::Forms::Label^ gender_lab;
	private: System::Windows::Forms::Label^ age_lab;
	private: System::Windows::Forms::Label^ governorate_lab;
	private: System::Windows::Forms::Label^ vaccination_lab;
	private: System::Windows::Forms::Label^ linked_lab;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ edit_pan;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ family_rec_pan;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::TextBox^ age_box;
	private: System::Windows::Forms::ComboBox^ gov_drop;
	private: System::Windows::Forms::ComboBox^ vacc_drop;
	private: System::Windows::Forms::TextBox^ fullname_box;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ female_rad;
	private: System::Windows::Forms::RadioButton^ male_rad;
	private: System::Windows::Forms::TextBox^ old_pass_box;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ Delete_btn;


		   Form^ login;
	private: System::Windows::Forms::Panel^ hidepass_pan;
	private: System::Windows::Forms::Panel^ showpass_pan;
	private: System::Windows::Forms::Label^ pass_lab;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;


		   User^ user;
		   F^ f;
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Home(User^ u,Form^ obj,F^fu)
		{
			InitializeComponent();
			user = u;
			login = obj;
			f = fu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->record_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->edit_btn = (gcnew System::Windows::Forms::Button());
			this->family_btn = (gcnew System::Windows::Forms::Button());
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->records_pan = (gcnew System::Windows::Forms::Panel());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->full_name_lab = (gcnew System::Windows::Forms::Label());
			this->national_id_lab = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gender_lab = (gcnew System::Windows::Forms::Label());
			this->age_lab = (gcnew System::Windows::Forms::Label());
			this->linked_lab = (gcnew System::Windows::Forms::Label());
			this->governorate_lab = (gcnew System::Windows::Forms::Label());
			this->vaccination_lab = (gcnew System::Windows::Forms::Label());
			this->edit_pan = (gcnew System::Windows::Forms::Panel());
			this->pass_lab = (gcnew System::Windows::Forms::Label());
			this->showpass_pan = (gcnew System::Windows::Forms::Panel());
			this->hidepass_pan = (gcnew System::Windows::Forms::Panel());
			this->new_pass_box = (gcnew System::Windows::Forms::TextBox());
			this->same_linkded_lab = (gcnew System::Windows::Forms::Label());
			this->invalid_linked_lab = (gcnew System::Windows::Forms::Label());
			this->Unlink_btn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->link_box = (gcnew System::Windows::Forms::TextBox());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->age_box = (gcnew System::Windows::Forms::TextBox());
			this->gov_drop = (gcnew System::Windows::Forms::ComboBox());
			this->vacc_drop = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fullname_box = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->female_rad = (gcnew System::Windows::Forms::RadioButton());
			this->male_rad = (gcnew System::Windows::Forms::RadioButton());
			this->old_pass_box = (gcnew System::Windows::Forms::TextBox());
			this->family_rec_pan = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->menu->SuspendLayout();
			this->records_pan->SuspendLayout();
			this->panel2->SuspendLayout();
			this->edit_pan->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->family_rec_pan->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// record_btn
			// 
			this->record_btn->BackColor = System::Drawing::Color::Transparent;
			this->record_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"record_btn.BackgroundImage")));
			this->record_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->record_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->record_btn->FlatAppearance->BorderSize = 0;
			this->record_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->record_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->record_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->record_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->record_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->record_btn->Location = System::Drawing::Point(21, 300);
			this->record_btn->Name = L"record_btn";
			this->record_btn->Size = System::Drawing::Size(215, 90);
			this->record_btn->TabIndex = 0;
			this->record_btn->Text = L"Your Record";
			this->record_btn->UseVisualStyleBackColor = false;
			this->record_btn->Click += gcnew System::EventHandler(this, &Home::record_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(21, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(215, 141);
			this->panel1->TabIndex = 1;
			// 
			// edit_btn
			// 
			this->edit_btn->BackColor = System::Drawing::Color::Transparent;
			this->edit_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_btn.BackgroundImage")));
			this->edit_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->edit_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_btn->FlatAppearance->BorderSize = 0;
			this->edit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->edit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->edit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->edit_btn->Location = System::Drawing::Point(21, 500);
			this->edit_btn->Name = L"edit_btn";
			this->edit_btn->Size = System::Drawing::Size(215, 90);
			this->edit_btn->TabIndex = 2;
			this->edit_btn->Text = L"Edit";
			this->edit_btn->UseVisualStyleBackColor = false;
			this->edit_btn->Click += gcnew System::EventHandler(this, &Home::edit_btn_Click);
			// 
			// family_btn
			// 
			this->family_btn->BackColor = System::Drawing::Color::Transparent;
			this->family_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"family_btn.BackgroundImage")));
			this->family_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->family_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->family_btn->FlatAppearance->BorderSize = 0;
			this->family_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->family_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->family_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->family_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->family_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->family_btn->Location = System::Drawing::Point(21, 700);
			this->family_btn->Name = L"family_btn";
			this->family_btn->Size = System::Drawing::Size(215, 90);
			this->family_btn->TabIndex = 3;
			this->family_btn->Text = L"Family Record";
			this->family_btn->UseVisualStyleBackColor = false;
			this->family_btn->Click += gcnew System::EventHandler(this, &Home::family_btn_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::Transparent;
			this->menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menu.BackgroundImage")));
			this->menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menu->Controls->Add(this->exit_btn);
			this->menu->Controls->Add(this->logout_btn);
			this->menu->Controls->Add(this->record_btn);
			this->menu->Controls->Add(this->family_btn);
			this->menu->Controls->Add(this->edit_btn);
			this->menu->Controls->Add(this->panel1);
			this->menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(258, 1080);
			this->menu->TabIndex = 6;
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::Transparent;
			this->exit_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_btn.BackgroundImage")));
			this->exit_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_btn->FlatAppearance->BorderSize = 0;
			this->exit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_btn->Location = System::Drawing::Point(105, 986);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(36, 35);
			this->exit_btn->TabIndex = 4;
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Home::exit_btn_Click_1);
			// 
			// logout_btn
			// 
			this->logout_btn->BackColor = System::Drawing::Color::Transparent;
			this->logout_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->logout_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->logout_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_btn->Location = System::Drawing::Point(52, 898);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(147, 60);
			this->logout_btn->TabIndex = 5;
			this->logout_btn->Text = L"LogOut";
			this->logout_btn->UseVisualStyleBackColor = false;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Home::logout_btn_Click);
			// 
			// records_pan
			// 
			this->records_pan->Controls->Add(this->Delete_btn);
			this->records_pan->Controls->Add(this->full_name_lab);
			this->records_pan->Controls->Add(this->national_id_lab);
			this->records_pan->Controls->Add(this->panel2);
			this->records_pan->Controls->Add(this->gender_lab);
			this->records_pan->Controls->Add(this->age_lab);
			this->records_pan->Controls->Add(this->linked_lab);
			this->records_pan->Controls->Add(this->governorate_lab);
			this->records_pan->Controls->Add(this->vaccination_lab);
			this->records_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->records_pan->Location = System::Drawing::Point(258, 0);
			this->records_pan->Name = L"records_pan";
			this->records_pan->Size = System::Drawing::Size(1662, 1080);
			this->records_pan->TabIndex = 7;
			// 
			// Delete_btn
			// 
			this->Delete_btn->BackColor = System::Drawing::Color::Red;
			this->Delete_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->Delete_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->Delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete_btn->Location = System::Drawing::Point(735, 952);
			this->Delete_btn->Margin = System::Windows::Forms::Padding(900, 740, 3, 3);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(215, 90);
			this->Delete_btn->TabIndex = 7;
			this->Delete_btn->Text = L"Delete";
			this->Delete_btn->UseVisualStyleBackColor = false;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &Home::Delete_btn_Click);
			// 
			// full_name_lab
			// 
			this->full_name_lab->AutoSize = true;
			this->full_name_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->full_name_lab->Location = System::Drawing::Point(417, 200);
			this->full_name_lab->Name = L"full_name_lab";
			this->full_name_lab->Size = System::Drawing::Size(255, 55);
			this->full_name_lab->TabIndex = 0;
			this->full_name_lab->Text = L"Full Name:";
			// 
			// national_id_lab
			// 
			this->national_id_lab->AutoSize = true;
			this->national_id_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->national_id_lab->Location = System::Drawing::Point(417, 300);
			this->national_id_lab->Name = L"national_id_lab";
			this->national_id_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->national_id_lab->Size = System::Drawing::Size(274, 75);
			this->national_id_lab->TabIndex = 1;
			this->national_id_lab->Text = L"National ID:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel2->Size = System::Drawing::Size(1662, 77);
			this->panel2->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1662, 77);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Your Record";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gender_lab
			// 
			this->gender_lab->AutoSize = true;
			this->gender_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender_lab->Location = System::Drawing::Point(417, 400);
			this->gender_lab->Name = L"gender_lab";
			this->gender_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->gender_lab->Size = System::Drawing::Size(198, 75);
			this->gender_lab->TabIndex = 2;
			this->gender_lab->Text = L"Gender:";
			// 
			// age_lab
			// 
			this->age_lab->AutoSize = true;
			this->age_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_lab->Location = System::Drawing::Point(417, 500);
			this->age_lab->Name = L"age_lab";
			this->age_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->age_lab->Size = System::Drawing::Size(123, 75);
			this->age_lab->TabIndex = 3;
			this->age_lab->Text = L"Age:";
			this->age_lab->Click += gcnew System::EventHandler(this, &Home::age_lab_Click);
			// 
			// linked_lab
			// 
			this->linked_lab->AutoSize = true;
			this->linked_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linked_lab->Location = System::Drawing::Point(417, 800);
			this->linked_lab->Name = L"linked_lab";
			this->linked_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->linked_lab->Size = System::Drawing::Size(248, 75);
			this->linked_lab->TabIndex = 6;
			this->linked_lab->Text = L"Linked To:";
			// 
			// governorate_lab
			// 
			this->governorate_lab->AutoSize = true;
			this->governorate_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->governorate_lab->Location = System::Drawing::Point(417, 600);
			this->governorate_lab->Name = L"governorate_lab";
			this->governorate_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->governorate_lab->Size = System::Drawing::Size(305, 75);
			this->governorate_lab->TabIndex = 4;
			this->governorate_lab->Text = L"Governorate:";
			// 
			// vaccination_lab
			// 
			this->vaccination_lab->AutoSize = true;
			this->vaccination_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vaccination_lab->Location = System::Drawing::Point(417, 700);
			this->vaccination_lab->Name = L"vaccination_lab";
			this->vaccination_lab->Padding = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->vaccination_lab->Size = System::Drawing::Size(285, 75);
			this->vaccination_lab->TabIndex = 5;
			this->vaccination_lab->Text = L"Vaccination:";
			// 
			// edit_pan
			// 
			this->edit_pan->Controls->Add(this->pass_lab);
			this->edit_pan->Controls->Add(this->showpass_pan);
			this->edit_pan->Controls->Add(this->hidepass_pan);
			this->edit_pan->Controls->Add(this->new_pass_box);
			this->edit_pan->Controls->Add(this->same_linkded_lab);
			this->edit_pan->Controls->Add(this->invalid_linked_lab);
			this->edit_pan->Controls->Add(this->Unlink_btn);
			this->edit_pan->Controls->Add(this->label10);
			this->edit_pan->Controls->Add(this->link_box);
			this->edit_pan->Controls->Add(this->save_btn);
			this->edit_pan->Controls->Add(this->label6);
			this->edit_pan->Controls->Add(this->label7);
			this->edit_pan->Controls->Add(this->label5);
			this->edit_pan->Controls->Add(this->label4);
			this->edit_pan->Controls->Add(this->label3);
			this->edit_pan->Controls->Add(this->label2);
			this->edit_pan->Controls->Add(this->age_box);
			this->edit_pan->Controls->Add(this->gov_drop);
			this->edit_pan->Controls->Add(this->vacc_drop);
			this->edit_pan->Controls->Add(this->panel3);
			this->edit_pan->Controls->Add(this->fullname_box);
			this->edit_pan->Controls->Add(this->groupBox1);
			this->edit_pan->Controls->Add(this->old_pass_box);
			this->edit_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->edit_pan->Location = System::Drawing::Point(258, 0);
			this->edit_pan->Name = L"edit_pan";
			this->edit_pan->Size = System::Drawing::Size(1662, 1080);
			this->edit_pan->TabIndex = 8;
			// 
			// pass_lab
			// 
			this->pass_lab->AutoSize = true;
			this->pass_lab->BackColor = System::Drawing::Color::Transparent;
			this->pass_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_lab->ForeColor = System::Drawing::Color::Green;
			this->pass_lab->Location = System::Drawing::Point(788, 257);
			this->pass_lab->Name = L"pass_lab";
			this->pass_lab->Size = System::Drawing::Size(172, 24);
			this->pass_lab->TabIndex = 15;
			this->pass_lab->Text = L"Enter old password";
			// 
			// showpass_pan
			// 
			this->showpass_pan->BackColor = System::Drawing::Color::Transparent;
			this->showpass_pan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showpass_pan.BackgroundImage")));
			this->showpass_pan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->showpass_pan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showpass_pan->Location = System::Drawing::Point(1052, 288);
			this->showpass_pan->Name = L"showpass_pan";
			this->showpass_pan->Size = System::Drawing::Size(57, 53);
			this->showpass_pan->TabIndex = 14;
			this->showpass_pan->Click += gcnew System::EventHandler(this, &Home::showpass_pan_Click);
			// 
			// hidepass_pan
			// 
			this->hidepass_pan->BackColor = System::Drawing::Color::Transparent;
			this->hidepass_pan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hidepass_pan.BackgroundImage")));
			this->hidepass_pan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->hidepass_pan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hidepass_pan->Location = System::Drawing::Point(1052, 288);
			this->hidepass_pan->Name = L"hidepass_pan";
			this->hidepass_pan->Size = System::Drawing::Size(57, 53);
			this->hidepass_pan->TabIndex = 13;
			this->hidepass_pan->Click += gcnew System::EventHandler(this, &Home::hidepass_pan_Click);
			// 
			// new_pass_box
			// 
			this->new_pass_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_pass_box->Location = System::Drawing::Point(1052, 293);
			this->new_pass_box->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->new_pass_box->Name = L"new_pass_box";
			this->new_pass_box->Size = System::Drawing::Size(312, 49);
			this->new_pass_box->TabIndex = 12;
			this->new_pass_box->UseSystemPasswordChar = true;
			this->new_pass_box->Visible = false;
			// 
			// same_linkded_lab
			// 
			this->same_linkded_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->same_linkded_lab->ForeColor = System::Drawing::Color::Green;
			this->same_linkded_lab->Location = System::Drawing::Point(1046, 802);
			this->same_linkded_lab->Name = L"same_linkded_lab";
			this->same_linkded_lab->Size = System::Drawing::Size(318, 41);
			this->same_linkded_lab->TabIndex = 11;
			this->same_linkded_lab->Text = L"You Entered Your ID";
			this->same_linkded_lab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->same_linkded_lab->Visible = false;
			// 
			// invalid_linked_lab
			// 
			this->invalid_linked_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invalid_linked_lab->ForeColor = System::Drawing::Color::Green;
			this->invalid_linked_lab->Location = System::Drawing::Point(1042, 800);
			this->invalid_linked_lab->Name = L"invalid_linked_lab";
			this->invalid_linked_lab->Size = System::Drawing::Size(318, 43);
			this->invalid_linked_lab->TabIndex = 10;
			this->invalid_linked_lab->Text = L"We Cannot Find this ID in our Data ";
			this->invalid_linked_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->invalid_linked_lab->Visible = false;
			// 
			// Unlink_btn
			// 
			this->Unlink_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unlink_btn->Location = System::Drawing::Point(1046, 800);
			this->Unlink_btn->Name = L"Unlink_btn";
			this->Unlink_btn->Size = System::Drawing::Size(111, 43);
			this->Unlink_btn->TabIndex = 9;
			this->Unlink_btn->Text = L"Unlink";
			this->Unlink_btn->UseVisualStyleBackColor = true;
			this->Unlink_btn->Visible = false;
			this->Unlink_btn->Click += gcnew System::EventHandler(this, &Home::Unlink_btn_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(468, 788);
			this->label10->Margin = System::Windows::Forms::Padding(113, 0, 3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(255, 53);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Link To:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// link_box
			// 
			this->link_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->link_box->Location = System::Drawing::Point(727, 794);
			this->link_box->Name = L"link_box";
			this->link_box->Size = System::Drawing::Size(313, 49);
			this->link_box->TabIndex = 8;
			this->link_box->TextChanged += gcnew System::EventHandler(this, &Home::link_box_TextChanged);
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::LightGray;
			this->save_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->save_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->Location = System::Drawing::Point(727, 921);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(313, 90);
			this->save_btn->TabIndex = 5;
			this->save_btn->Text = L"Save";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &Home::save_btn_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(411, 588);
			this->label6->Margin = System::Windows::Forms::Padding(80, 32, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(312, 58);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Governorate:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Location = System::Drawing::Point(438, 688);
			this->label7->Margin = System::Windows::Forms::Padding(91, 37, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(285, 50);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Vaccination:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(597, 488);
			this->label5->Margin = System::Windows::Forms::Padding(201, 35, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 63);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Age:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(517, 388);
			this->label4->Margin = System::Windows::Forms::Padding(151, 41, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 50);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Gender:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(463, 288);
			this->label3->Margin = System::Windows::Forms::Padding(67, 34, 3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 53);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(464, 188);
			this->label2->Margin = System::Windows::Forms::Padding(113, 0, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 53);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Full Name:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// age_box
			// 
			this->age_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_box->Location = System::Drawing::Point(723, 498);
			this->age_box->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->age_box->Name = L"age_box";
			this->age_box->Size = System::Drawing::Size(313, 49);
			this->age_box->TabIndex = 6;
			this->age_box->TextChanged += gcnew System::EventHandler(this, &Home::age_box_TextChanged);
			this->age_box->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::age_box_MouseDoubleClick);
			// 
			// gov_drop
			// 
			this->gov_drop->DropDownHeight = 400;
			this->gov_drop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gov_drop->FormattingEnabled = true;
			this->gov_drop->IntegralHeight = false;
			this->gov_drop->ItemHeight = 42;
			this->gov_drop->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Alexandria", L"Aswan", L"Asyut", L"Beheira", L"Beni Suef",
					L"Cairo", L"Dakahlia", L"Damietta", L"Faiyum", L"Gharbia", L"Giza", L"Ismailia", L"Kafr El Sheikh", L"Luxor", L"Matruh", L"Minya",
					L"Monufia", L"New Valley", L"North Sinai", L"Port Said", L"Qalyubia", L"Qena", L"Red Sea", L"Sharqia", L"Sohag", L"South Sinai",
					L"Suez"
			});
			this->gov_drop->Location = System::Drawing::Point(723, 596);
			this->gov_drop->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->gov_drop->Name = L"gov_drop";
			this->gov_drop->Size = System::Drawing::Size(314, 50);
			this->gov_drop->TabIndex = 4;
			// 
			// vacc_drop
			// 
			this->vacc_drop->DropDownHeight = 200;
			this->vacc_drop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vacc_drop->FormattingEnabled = true;
			this->vacc_drop->IntegralHeight = false;
			this->vacc_drop->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"One Time", L"Two Times" });
			this->vacc_drop->Location = System::Drawing::Point(723, 693);
			this->vacc_drop->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->vacc_drop->Name = L"vacc_drop";
			this->vacc_drop->Size = System::Drawing::Size(316, 50);
			this->vacc_drop->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1662, 80);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1662, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fullname_box
			// 
			this->fullname_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fullname_box->Location = System::Drawing::Point(723, 193);
			this->fullname_box->Name = L"fullname_box";
			this->fullname_box->Size = System::Drawing::Size(313, 49);
			this->fullname_box->TabIndex = 0;
			this->fullname_box->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::fullname_box_MouseDoubleClick);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->female_rad);
			this->groupBox1->Controls->Add(this->male_rad);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(724, 393);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(312, 51);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// female_rad
			// 
			this->female_rad->AutoSize = true;
			this->female_rad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female_rad->Location = System::Drawing::Point(153, 0);
			this->female_rad->Name = L"female_rad";
			this->female_rad->Size = System::Drawing::Size(160, 46);
			this->female_rad->TabIndex = 1;
			this->female_rad->Text = L"Female";
			this->female_rad->UseVisualStyleBackColor = true;
			this->female_rad->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButton2_CheckedChanged);
			// 
			// male_rad
			// 
			this->male_rad->AutoSize = true;
			this->male_rad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male_rad->Location = System::Drawing::Point(15, -1);
			this->male_rad->Name = L"male_rad";
			this->male_rad->Size = System::Drawing::Size(117, 46);
			this->male_rad->TabIndex = 0;
			this->male_rad->Text = L"Male";
			this->male_rad->UseVisualStyleBackColor = true;
			// 
			// old_pass_box
			// 
			this->old_pass_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->old_pass_box->Location = System::Drawing::Point(724, 293);
			this->old_pass_box->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->old_pass_box->Name = L"old_pass_box";
			this->old_pass_box->Size = System::Drawing::Size(312, 49);
			this->old_pass_box->TabIndex = 1;
			this->old_pass_box->UseSystemPasswordChar = true;
			this->old_pass_box->TextChanged += gcnew System::EventHandler(this, &Home::old_pass_box_TextChanged);
			// 
			// family_rec_pan
			// 
			this->family_rec_pan->Controls->Add(this->panel4);
			this->family_rec_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->family_rec_pan->Location = System::Drawing::Point(258, 0);
			this->family_rec_pan->Name = L"family_rec_pan";
			this->family_rec_pan->Size = System::Drawing::Size(1662, 1080);
			this->family_rec_pan->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label9);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1662, 83);
			this->panel4->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(1662, 83);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Family Record";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1920, 1080);
			this->Controls->Add(this->records_pan);
			this->Controls->Add(this->edit_pan);
			this->Controls->Add(this->family_rec_pan);
			this->Controls->Add(this->menu);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->menu->ResumeLayout(false);
			this->records_pan->ResumeLayout(false);
			this->records_pan->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->edit_pan->ResumeLayout(false);
			this->edit_pan->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->family_rec_pan->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);

		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion
			//Ahmed Hesham
		  //Print the User Record on Screen
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {


		full_name_lab->Text = "Full Name: " + user->fullname;
		national_id_lab->Text = "National ID: " + user->national_id;
		gender_lab->Text = "Gender: " + user->gender->ToUpper();
		age_lab->Text = "Age: " + user->age;
		governorate_lab->Text = "Governorate: " + user->governorate;

		if (user->vaccinated == "0")
		{
			vaccination_lab->Text = "Vaccinated: No Dose";
		}
		else if (user->vaccinated == "1")
		{
			vaccination_lab->Text = "Vaccinated: One Dose";
		}
		else if (user->vaccinated == "2")
		{
			vaccination_lab->Text = "Vaccinated: Two Doses";
		}

		// If he linked to anyone
		if (user->linked_national_id == "0")
		{
			linked_lab->Text = "Linked To: No One";
		}
		else
		{
			linked_lab->Text = "Linked To: " + f->SearchUser(user->linked_national_id)->fullname + " (" + user->linked_national_id + ")";
		}

	}


	private: System::Void fullname_box_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		fullname_box->Text = "";
	}

	private: System::Void age_box_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		age_box->Text = "";
	}

	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void age_lab_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}




		   //if he clicked on the edit btn
		   String^ vacc;
		   String^ past_id;
		   String^ gender;



		   //if he click on record btn
	private: System::Void record_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		records_pan->BringToFront();
		
	}

		   //Ahmed Hesham
	private: System::Void edit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_pan->BringToFront();
		
		same_linkded_lab->Visible = false;
		invalid_linked_lab->Visible = false;
		new_pass_box->Visible = false;
		old_pass_box->Clear();
		pass_lab->Location = System::Drawing::Point(788, 263);
		pass_lab->Text = "Enter old password";
		showpass_pan->Location = System::Drawing::Point(1052, 288);
		hidepass_pan->Location = System::Drawing::Point(1052, 288);
		// here we will take his record an put it in textboxes
		fullname_box->Text = user->fullname;

		if (user->gender == "Male")
		{
			male_rad->Checked = true;
		}
		else
		{
			female_rad->Checked = true;
		}

		age_box->Text = user->age;
		gov_drop->SelectedItem = user->governorate;

		if (user->vaccinated == "0")
		{
			vacc_drop->SelectedItem = "None";
		}
		else if (user->vaccinated == "1")
		{
			vacc_drop->SelectedItem = "One Time";
		}
		else
		{
			vacc_drop->SelectedItem = "Two Times";
		}

		if (user->linked_national_id != "0")
		{
			link_box->Text = user->linked_national_id;
			Unlink_btn->Visible = true;
			link_box->Enabled = false;
		}
		else
		{
			link_box->Text = "";
		}

		vacc = vacc_drop->SelectedItem->ToString();
	}

		   //Ahmed hesham
	private: System::Void old_pass_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (old_pass_box->Text == user->password)
		{
			new_pass_box->Visible = true;
			showpass_pan->Location = System::Drawing::Point(1380, 288);
			hidepass_pan->Location = System::Drawing::Point(1380, 288);
			pass_lab->Text = "Enter new password";
			pass_lab->Location = System::Drawing::Point(1120, 263);
		}
	}

	

			//Shokry
		   // here we will save the data in the file if anything updated else he will not write in the file
	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fullname_msg;
		String^ newpass_msg;
		String^ age_msg;
		String^ govern_msg;
		String^ gender_msg;
		String^ vacc_msg;
		String^ link_msg;
		bool update = 0;
		if (fullname_box->Text != "" && user->fullname != fullname_box->Text)
		{
			fullname_msg = (user->fullname + " --> " + fullname_box->Text);
			user->fullname = fullname_box->Text;
			update = 1;
		}
		if (new_pass_box->Text != "" && user->password != new_pass_box->Text)
		{
			newpass_msg = (user->password + " --> " + new_pass_box->Text);
			user->password = new_pass_box->Text;
			update = 1;
		}
		if (age_box->Text != "" && user->age != age_box->Text)
		{
			age_msg = (user->age + " --> " + age_box->Text);
			user->age = age_box->Text;
			update = 1;
		}
		if (user->governorate != gov_drop->SelectedItem->ToString())
		{
			govern_msg = (user->governorate + " -->" + gov_drop->SelectedItem->ToString());
			user->governorate = gov_drop->SelectedItem->ToString();
			update = 1;
		}
		if (male_rad->Checked && user->gender == "Female")
		{
			gender_msg = (user->gender + " -- >Male");
			user->gender = "Male";
			update = 1;
		}
		else if (female_rad->Checked && user->gender == "Male")
		{
			gender_msg = (user->gender + " --> Female");
			user->gender = "Female";
			update = 1;
		}

		if (vacc_drop->SelectedItem->ToString() != vacc)
		{
			f->Update_Delete(user, 2);
			vacc_msg = (vacc + " --> " + vacc_drop->SelectedItem->ToString());
			if (vacc_drop->SelectedItem->ToString() == "None")
			{
				user->vaccinated = "0";
			}
			else if (vacc_drop->SelectedItem->ToString() == "One Time")
			{
				user->vaccinated = "1";
			}
			else if (vacc_drop->SelectedItem->ToString() == "Two Times")
			{
				user->vaccinated = "2";
			}

			update = 1;
			f->user_vector.push_back(user);
		}

		//Check the entered linked national id in edit page 
		//Hossam
		if (!f->Valid_National_ID(link_box->Text) && link_box->Text != user->national_id || (link_box->Text == "" && user->linked_national_id != "0"))
		{
			if (link_box->Text == "")
			{
				link_msg = (user->linked_national_id + " --> Empty");
				user->linked_national_id = "0";
			}
			else
			{
				if (user->linked_national_id == "0")
				{
					link_msg = ("Empty" + " --> " + link_box->Text);
				}
				else
				{
					link_msg = (user->linked_national_id + " --> " + link_box->Text);
				}
				
				user->linked_national_id = link_box->Text;
			}

			update = 1;
		}

		else if (user->national_id == link_box->Text)
		{
			invalid_linked_lab->Visible = false;
			same_linkded_lab->Visible = true;
			update = 0;	
		}
		else if (link_box->Text != "")
		{
			same_linkded_lab->Visible = false;
			invalid_linked_lab->Visible = true;
			update = 0;
		}

		///////////////////////////////////////////////////////////


		if (update == 1)
		{
			MessageBox::Show(fullname_msg + "\n" + newpass_msg + "\n" + age_msg + "\n" + govern_msg + "\n" + gender_msg + "\n" + link_msg);
			f->Update_Delete(user, 1);
			Home^ h = gcnew Home(user, login,f);
			h->Show();
			this->Hide();
		}
	}


			//Ayman
		 // if he clicked in the del btn to delete his record
private: System::Void Delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	f->Update_Delete(user, 2);
	login->Show();
	this->Hide();
}

	   //Ayman
	   //if he clicked in family record btn
private: System::Void family_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	exit_btn->BringToFront();
	family_rec_pan->BringToFront();
	
	cliext::vector<User^> linked_vector = f->Linked_User(user);

	// if he not found any linked user
	if (!linked_vector.empty())
	{
		//Create a new flowlayout panel every time he click the btn
		FlowLayoutPanel^ p_user = gcnew FlowLayoutPanel();
		p_user->BackColor = System::Drawing::Color::Transparent;
		p_user->Dock = System::Windows::Forms::DockStyle::Fill;
		p_user->Location = System::Drawing::Point(0, 83);
		p_user->Name = L"flowLayoutPanel2";
		p_user->Padding = System::Windows::Forms::Padding(100,100,100,300);
		p_user->Size = System::Drawing::Size(1662, 997);
		p_user->TabIndex = 1;
		p_user->AutoScroll = true;

		this->family_rec_pan->Controls->Add(p_user);


		// Loop that create the groupbox and labels
		for (int i = 0; i < linked_vector.size(); ++i)
		{
			User^ user = linked_vector[i];
			//picture
			PictureBox^ picture = gcnew PictureBox();
			if (user->gender == "Female")
			{
				picture->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-girl-100.png");
			}
			else
			{
				picture->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-standing-man-100.png");
			}
			picture->Location = System::Drawing::Point(0, 7);
			picture->Name = L"pictureBox1";
			picture->Size = System::Drawing::Size(281, 97);
			picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			picture->TabIndex = 6;
			picture->TabStop = false;

			//Label_name
			Label^ name = gcnew Label();
			name->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			name->Location = System::Drawing::Point(0, 107);
			name->Name = L"label11";
			name->Size = System::Drawing::Size(281, 25);
			name->TabIndex = 0;
			name->Text = user->fullname;
			name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			//label id
			Label^ na_id = gcnew Label();
			na_id->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			na_id->Location = System::Drawing::Point(0, 131);
			na_id->Name = L"label12";
			na_id->Size = System::Drawing::Size(281, 25);
			na_id->TabIndex = 1;
			na_id->Text = user->national_id;
			na_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			//label gender
			Label^ gender = gcnew Label();
			gender->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			gender->Location = System::Drawing::Point(0, 156);
			gender->Name = L"label13";
			gender->Size = System::Drawing::Size(281, 25);
			gender->TabIndex = 2;
			gender->Text = user->gender;
			gender->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			//label age
			Label^ age = gcnew Label();
			age->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			age->Location = System::Drawing::Point(0, 181);
			age->Name = L"label14";
			age->Size = System::Drawing::Size(281, 25);
			age->TabIndex = 3;
			age->Text = user->age;
			age->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			//label governorate
			Label^ gov = gcnew Label();
			gov->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			gov->Location = System::Drawing::Point(0, 207);
			gov->Name = L"label15";
			gov->Size = System::Drawing::Size(281, 25);
			gov->TabIndex = 4;
			gov->Text = user->governorate;
			gov->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			//label vaccnation
			Label^ vacc = gcnew Label();
			vacc->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			vacc->Location = System::Drawing::Point(0, 233);
			vacc->Name = L"label16";
			vacc->Size = System::Drawing::Size(281, 25);
			vacc->TabIndex = 5;
			if (user->vaccinated == "0")
			{
				vacc->Text = L"No Dose";
			}
			else if (user->vaccinated == "1")
			{
				vacc->Text = L"One Dose";
			}
			else
			{
				vacc->Text = L"Two Doses";
			}
			vacc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			
			//Group box
			GroupBox^ groupbox = gcnew GroupBox();
			groupbox->Margin = System::Windows::Forms::Padding(3, 3, 30, 3);
			groupbox->Controls->Add(picture);
			groupbox->Controls->Add(name);
			groupbox->Controls->Add(na_id);
			groupbox->Controls->Add(gender);
			groupbox->Controls->Add(age);
			groupbox->Controls->Add(gov);
			groupbox->Controls->Add(vacc);
			if (i == linked_vector.size() - 1)
			{
				groupbox->Margin = System::Windows::Forms::Padding(130, 60, 10, 150);
			}
			else
			{
				groupbox->Margin = System::Windows::Forms::Padding(130, 60, 10, 20);
			}
			groupbox->Location = System::Drawing::Point(103, 103);
			groupbox->Name = L"groupBox2";
			groupbox->Size = System::Drawing::Size(281, 266);
			groupbox->TabIndex = 0;
			groupbox->TabStop = false;

			p_user->Controls->Add(groupbox);
		}
	}
	else
	{
		Label^ msg = gcnew Label();
		msg->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		msg->Location = System::Drawing::Point(0, 366);
		msg->Name = L"label11";
		msg->Size = System::Drawing::Size(1589, 350);
		msg->TabIndex = 1;
		msg->Text = L"You Don\'t Have any One linked To You";
		msg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		this->family_rec_pan->Controls->Add(msg);
	}

}

		//Hossam
private: System::Void exit_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Do you want to Exit", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		f->Write_File();
		f->Write_Admin_File();
		Application::Exit();
	}
}

	   //For Make Group boxes enough to the linked Users 
private: System::Void flowLayoutPanel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
	   //if he clicked on unlick btn he will remove his linked_national_id
private: System::Void Unlink_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	link_box->Text = "";
	link_box->Enabled = true;
	Unlink_btn->Visible = false;
}
	   //logout btn
private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	login->Show();
	this->Hide();
}

private: System::Void link_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	link_box->MaxLength = 13;
}


private: System::Void showpass_pan_Click(System::Object^ sender, System::EventArgs^ e) {
	old_pass_box->UseSystemPasswordChar = !old_pass_box->UseSystemPasswordChar;
	new_pass_box->UseSystemPasswordChar = !new_pass_box->UseSystemPasswordChar;
	hidepass_pan->BringToFront();
	
}
private: System::Void hidepass_pan_Click(System::Object^ sender, System::EventArgs^ e) {
	old_pass_box->UseSystemPasswordChar = !old_pass_box->UseSystemPasswordChar;
	new_pass_box->UseSystemPasswordChar = !new_pass_box->UseSystemPasswordChar;
	showpass_pan->BringToFront();
}


private: System::Void pass_lab_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void age_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(age_box->Text, "[^0-9]")) {
		errorProvider1->SetError(this->age_box, "Enter updated age");
		age_box->Clear();
	}
	age_box->MaxLength = 3;
}
};
}