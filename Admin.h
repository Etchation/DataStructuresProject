#pragma once
#include"Func.h"
#include"User.h"
#include"AdminClass.h"
#include<cliext/queue>
#include<cliext/map>
#include<cliext/utility>
namespace DS11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
		F^ f;
	private: System::Windows::Forms::Panel^ delete_user_pan;
	private: System::Windows::Forms::Panel^ delete_admin_pan;
	private: System::Windows::Forms::TextBox^ admin_id_box;
	private: System::Windows::Forms::Button^ get_admin;



	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ del_all_admin_btn;

	private: System::Windows::Forms::Label^ del_all_admin_lab;


	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ del_admin;

	private: System::Windows::Forms::Label^ ad_lvl_lab;
	private: System::Windows::Forms::Label^ ad_gender_lab;





	private: System::Windows::Forms::Label^ ad_id_lab;

	private: System::Windows::Forms::Label^ ad_name_lab;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ admin_del_btn;

	private: System::Windows::Forms::Button^ user_del_btn;

		   Form^ login;
	public:
		Admin(F^fu,Form^l)
		{
			InitializeComponent();
			login = l;
			f = fu;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ rec_btn;
	private: System::Windows::Forms::Panel^ menu_pan;



	private: System::Windows::Forms::Button^ modify_btn;
	private: System::Windows::Forms::Button^ Graphs;
	private: System::Windows::Forms::Button^ wait_btn;
	private: System::Windows::Forms::Panel^ records_pan;
	private: System::Windows::Forms::Panel^ waiting_pan;
	private: System::Windows::Forms::Panel^ graphs_pan;
	private: System::Windows::Forms::Panel^ delete_pan;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ none_vacc_btn;
	private: System::Windows::Forms::Button^ one_vacc_btn;
	private: System::Windows::Forms::Panel^ one_vacc_pan;
	private: System::Windows::Forms::Panel^ none_vacc_pan;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ vaccinate_btn;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ name_lab;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ id_lab;
	private: System::Windows::Forms::Label^ empty_lab;
	private: System::Windows::Forms::Panel^ panel8;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ none_rad;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ age_rad;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ twice_rad;

	private: System::Windows::Forms::RadioButton^ once_rad;
	private: System::Windows::Forms::RadioButton^ all_rad;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ high_age_rad;
	private: System::Windows::Forms::Label^ one_vacc_empty_lab;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ one_vacc_id_lab;
	private: System::Windows::Forms::Label^ one_vacc_name_lab;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ one_vacc_bnt;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


	private: System::Windows::Forms::Button^ delete_all_btn;

	private: System::Windows::Forms::Button^ get_user_btn;
	private: System::Windows::Forms::TextBox^ id_del_box;


	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ not_found_lab;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;


private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
private: System::Windows::Forms::Label^ deleted_lap;
private: System::Windows::Forms::Button^ add_admin_btn;
private: System::Windows::Forms::Panel^ add_admin_pan;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ name_box;
private: System::Windows::Forms::TextBox^ pass_box;



private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::RadioButton^ female_rad;

private: System::Windows::Forms::RadioButton^ male_rad;

private: System::Windows::Forms::GroupBox^ groupBox7;


private: System::Windows::Forms::RadioButton^ lvl1_rad;
private: System::Windows::Forms::RadioButton^ lvl2_rad;



private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ add_btn;
private: System::Windows::Forms::Label^ add_suc_lab;
private: System::Windows::Forms::Label^ i_lab;
private: System::Windows::Forms::Button^ exit_btn;
private: System::Windows::Forms::Button^ logout_btn;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::RadioButton^ admin_rad;

private: System::Windows::Forms::RadioButton^ user_rad;



























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series25 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series26 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series27 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series28 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series29 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series30 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rec_btn = (gcnew System::Windows::Forms::Button());
			this->menu_pan = (gcnew System::Windows::Forms::Panel());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->add_admin_btn = (gcnew System::Windows::Forms::Button());
			this->modify_btn = (gcnew System::Windows::Forms::Button());
			this->Graphs = (gcnew System::Windows::Forms::Button());
			this->wait_btn = (gcnew System::Windows::Forms::Button());
			this->records_pan = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->admin_rad = (gcnew System::Windows::Forms::RadioButton());
			this->user_rad = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->high_age_rad = (gcnew System::Windows::Forms::RadioButton());
			this->age_rad = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->all_rad = (gcnew System::Windows::Forms::RadioButton());
			this->twice_rad = (gcnew System::Windows::Forms::RadioButton());
			this->once_rad = (gcnew System::Windows::Forms::RadioButton());
			this->none_rad = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->waiting_pan = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->one_vacc_pan = (gcnew System::Windows::Forms::Panel());
			this->one_vacc_empty_lab = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->one_vacc_id_lab = (gcnew System::Windows::Forms::Label());
			this->one_vacc_name_lab = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->one_vacc_bnt = (gcnew System::Windows::Forms::Button());
			this->none_vacc_pan = (gcnew System::Windows::Forms::Panel());
			this->empty_lab = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->id_lab = (gcnew System::Windows::Forms::Label());
			this->name_lab = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->vaccinate_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->one_vacc_btn = (gcnew System::Windows::Forms::Button());
			this->none_vacc_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->graphs_pan = (gcnew System::Windows::Forms::Panel());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->delete_pan = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->delete_admin_pan = (gcnew System::Windows::Forms::Panel());
			this->admin_id_box = (gcnew System::Windows::Forms::TextBox());
			this->get_admin = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->del_all_admin_btn = (gcnew System::Windows::Forms::Button());
			this->del_all_admin_lab = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->del_admin = (gcnew System::Windows::Forms::Button());
			this->ad_lvl_lab = (gcnew System::Windows::Forms::Label());
			this->ad_gender_lab = (gcnew System::Windows::Forms::Label());
			this->ad_id_lab = (gcnew System::Windows::Forms::Label());
			this->ad_name_lab = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->delete_user_pan = (gcnew System::Windows::Forms::Panel());
			this->id_del_box = (gcnew System::Windows::Forms::TextBox());
			this->get_user_btn = (gcnew System::Windows::Forms::Button());
			this->not_found_lab = (gcnew System::Windows::Forms::Label());
			this->delete_all_btn = (gcnew System::Windows::Forms::Button());
			this->deleted_lap = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->admin_del_btn = (gcnew System::Windows::Forms::Button());
			this->user_del_btn = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->add_admin_pan = (gcnew System::Windows::Forms::Panel());
			this->i_lab = (gcnew System::Windows::Forms::Label());
			this->add_suc_lab = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->lvl2_rad = (gcnew System::Windows::Forms::RadioButton());
			this->lvl1_rad = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->female_rad = (gcnew System::Windows::Forms::RadioButton());
			this->male_rad = (gcnew System::Windows::Forms::RadioButton());
			this->pass_box = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->menu_pan->SuspendLayout();
			this->records_pan->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->waiting_pan->SuspendLayout();
			this->one_vacc_pan->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->none_vacc_pan->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->graphs_pan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel4->SuspendLayout();
			this->delete_pan->SuspendLayout();
			this->delete_admin_pan->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->delete_user_pan->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel6->SuspendLayout();
			this->add_admin_pan->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin";
			// 
			// rec_btn
			// 
			this->rec_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rec_btn.BackgroundImage")));
			this->rec_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rec_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rec_btn->FlatAppearance->BorderSize = 0;
			this->rec_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->rec_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->rec_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rec_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rec_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->rec_btn->Location = System::Drawing::Point(26, 291);
			this->rec_btn->Margin = System::Windows::Forms::Padding(2);
			this->rec_btn->Name = L"rec_btn";
			this->rec_btn->Size = System::Drawing::Size(302, 102);
			this->rec_btn->TabIndex = 1;
			this->rec_btn->Text = L"Records";
			this->rec_btn->UseVisualStyleBackColor = true;
			this->rec_btn->Click += gcnew System::EventHandler(this, &Admin::rec_btn_Click);
			// 
			// menu_pan
			// 
			this->menu_pan->BackColor = System::Drawing::Color::Transparent;
			this->menu_pan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menu_pan.BackgroundImage")));
			this->menu_pan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menu_pan->Controls->Add(this->exit_btn);
			this->menu_pan->Controls->Add(this->logout_btn);
			this->menu_pan->Controls->Add(this->add_admin_btn);
			this->menu_pan->Controls->Add(this->modify_btn);
			this->menu_pan->Controls->Add(this->Graphs);
			this->menu_pan->Controls->Add(this->wait_btn);
			this->menu_pan->Controls->Add(this->label1);
			this->menu_pan->Controls->Add(this->rec_btn);
			this->menu_pan->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu_pan->Location = System::Drawing::Point(0, 0);
			this->menu_pan->Margin = System::Windows::Forms::Padding(2);
			this->menu_pan->Name = L"menu_pan";
			this->menu_pan->Size = System::Drawing::Size(352, 1080);
			this->menu_pan->TabIndex = 2;
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
			this->exit_btn->Location = System::Drawing::Point(164, 1036);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(36, 35);
			this->exit_btn->TabIndex = 11;
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Admin::exit_btn_Click);
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
			this->logout_btn->Location = System::Drawing::Point(105, 954);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(147, 60);
			this->logout_btn->TabIndex = 10;
			this->logout_btn->Text = L"LogOut";
			this->logout_btn->UseVisualStyleBackColor = false;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Admin::logout_btn_Click);
			// 
			// add_admin_btn
			// 
			this->add_admin_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_admin_btn.BackgroundImage")));
			this->add_admin_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_admin_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_admin_btn->FlatAppearance->BorderSize = 0;
			this->add_admin_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->add_admin_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->add_admin_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_admin_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_admin_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->add_admin_btn->Location = System::Drawing::Point(68, 139);
			this->add_admin_btn->Margin = System::Windows::Forms::Padding(2);
			this->add_admin_btn->Name = L"add_admin_btn";
			this->add_admin_btn->Size = System::Drawing::Size(213, 62);
			this->add_admin_btn->TabIndex = 6;
			this->add_admin_btn->Text = L"ADD Admin";
			this->add_admin_btn->UseVisualStyleBackColor = true;
			this->add_admin_btn->Click += gcnew System::EventHandler(this, &Admin::add_admin_btn_Click);
			// 
			// modify_btn
			// 
			this->modify_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_btn.BackgroundImage")));
			this->modify_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modify_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modify_btn->FlatAppearance->BorderSize = 0;
			this->modify_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->modify_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->modify_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modify_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modify_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->modify_btn->Location = System::Drawing::Point(26, 741);
			this->modify_btn->Margin = System::Windows::Forms::Padding(2);
			this->modify_btn->Name = L"modify_btn";
			this->modify_btn->Size = System::Drawing::Size(302, 102);
			this->modify_btn->TabIndex = 4;
			this->modify_btn->Text = L"Delete";
			this->modify_btn->UseVisualStyleBackColor = true;
			this->modify_btn->Click += gcnew System::EventHandler(this, &Admin::modify_btn_Click);
			// 
			// Graphs
			// 
			this->Graphs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Graphs.BackgroundImage")));
			this->Graphs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Graphs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Graphs->FlatAppearance->BorderSize = 0;
			this->Graphs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Graphs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Graphs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Graphs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Graphs->ForeColor = System::Drawing::SystemColors::Control;
			this->Graphs->Location = System::Drawing::Point(26, 591);
			this->Graphs->Margin = System::Windows::Forms::Padding(2);
			this->Graphs->Name = L"Graphs";
			this->Graphs->Size = System::Drawing::Size(302, 102);
			this->Graphs->TabIndex = 3;
			this->Graphs->Text = L"Graphs";
			this->Graphs->UseVisualStyleBackColor = true;
			this->Graphs->Click += gcnew System::EventHandler(this, &Admin::Graphs_Click);
			// 
			// wait_btn
			// 
			this->wait_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wait_btn.BackgroundImage")));
			this->wait_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->wait_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wait_btn->FlatAppearance->BorderSize = 0;
			this->wait_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->wait_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->wait_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wait_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wait_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->wait_btn->Location = System::Drawing::Point(26, 441);
			this->wait_btn->Margin = System::Windows::Forms::Padding(2);
			this->wait_btn->Name = L"wait_btn";
			this->wait_btn->Size = System::Drawing::Size(302, 102);
			this->wait_btn->TabIndex = 2;
			this->wait_btn->Text = L"Waiting lists";
			this->wait_btn->UseVisualStyleBackColor = true;
			this->wait_btn->Click += gcnew System::EventHandler(this, &Admin::wait_btn_Click);
			// 
			// records_pan
			// 
			this->records_pan->Controls->Add(this->flowLayoutPanel1);
			this->records_pan->Controls->Add(this->panel8);
			this->records_pan->Controls->Add(this->panel5);
			this->records_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->records_pan->Location = System::Drawing::Point(352, 0);
			this->records_pan->Name = L"records_pan";
			this->records_pan->Size = System::Drawing::Size(1568, 1080);
			this->records_pan->TabIndex = 3;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(155, 100);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(0, 70, 60, 0);
			this->flowLayoutPanel1->Size = System::Drawing::Size(1413, 980);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label18);
			this->panel8->Controls->Add(this->groupBox8);
			this->panel8->Controls->Add(this->groupBox3);
			this->panel8->Controls->Add(this->groupBox2);
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(0, 100);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(155, 980);
			this->panel8->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(7, 54);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(144, 37);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Type:";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->admin_rad);
			this->groupBox8->Controls->Add(this->user_rad);
			this->groupBox8->Location = System::Drawing::Point(7, 82);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(147, 140);
			this->groupBox8->TabIndex = 7;
			this->groupBox8->TabStop = false;
			// 
			// admin_rad
			// 
			this->admin_rad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->admin_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_rad->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->admin_rad->Location = System::Drawing::Point(4, 83);
			this->admin_rad->Name = L"admin_rad";
			this->admin_rad->Size = System::Drawing::Size(85, 38);
			this->admin_rad->TabIndex = 6;
			this->admin_rad->Text = L"Admin";
			this->admin_rad->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->admin_rad->UseVisualStyleBackColor = true;
			this->admin_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::admin_rad_CheckedChanged);
			// 
			// user_rad
			// 
			this->user_rad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->user_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_rad->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->user_rad->Location = System::Drawing::Point(3, 19);
			this->user_rad->Name = L"user_rad";
			this->user_rad->Size = System::Drawing::Size(86, 38);
			this->user_rad->TabIndex = 5;
			this->user_rad->Text = L"User";
			this->user_rad->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->user_rad->UseVisualStyleBackColor = true;
			this->user_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::user_rad_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->high_age_rad);
			this->groupBox3->Controls->Add(this->age_rad);
			this->groupBox3->Location = System::Drawing::Point(3, 621);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(147, 140);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			// 
			// high_age_rad
			// 
			this->high_age_rad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->high_age_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->high_age_rad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"high_age_rad.Image")));
			this->high_age_rad->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->high_age_rad->Location = System::Drawing::Point(4, 83);
			this->high_age_rad->Name = L"high_age_rad";
			this->high_age_rad->Size = System::Drawing::Size(85, 38);
			this->high_age_rad->TabIndex = 6;
			this->high_age_rad->TabStop = true;
			this->high_age_rad->Text = L"Age";
			this->high_age_rad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->high_age_rad->UseVisualStyleBackColor = true;
			this->high_age_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::high_age_rad_CheckedChanged);
			// 
			// age_rad
			// 
			this->age_rad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->age_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_rad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"age_rad.Image")));
			this->age_rad->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->age_rad->Location = System::Drawing::Point(3, 19);
			this->age_rad->Name = L"age_rad";
			this->age_rad->Size = System::Drawing::Size(86, 38);
			this->age_rad->TabIndex = 5;
			this->age_rad->TabStop = true;
			this->age_rad->Text = L"Age";
			this->age_rad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->age_rad->UseVisualStyleBackColor = true;
			this->age_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::age_rad_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->all_rad);
			this->groupBox2->Controls->Add(this->twice_rad);
			this->groupBox2->Controls->Add(this->once_rad);
			this->groupBox2->Controls->Add(this->none_rad);
			this->groupBox2->Location = System::Drawing::Point(7, 342);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(145, 188);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// all_rad
			// 
			this->all_rad->AutoSize = true;
			this->all_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->all_rad->Location = System::Drawing::Point(0, 150);
			this->all_rad->Name = L"all_rad";
			this->all_rad->Size = System::Drawing::Size(46, 23);
			this->all_rad->TabIndex = 3;
			this->all_rad->TabStop = true;
			this->all_rad->Text = L"All";
			this->all_rad->UseVisualStyleBackColor = true;
			this->all_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::all_rad_CheckedChanged);
			// 
			// twice_rad
			// 
			this->twice_rad->AutoSize = true;
			this->twice_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twice_rad->Location = System::Drawing::Point(0, 98);
			this->twice_rad->Name = L"twice_rad";
			this->twice_rad->Size = System::Drawing::Size(148, 23);
			this->twice_rad->TabIndex = 2;
			this->twice_rad->TabStop = true;
			this->twice_rad->Text = L"Vaccinated Twice";
			this->twice_rad->UseVisualStyleBackColor = true;
			this->twice_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::twice_rad_CheckedChanged);
			// 
			// once_rad
			// 
			this->once_rad->AutoSize = true;
			this->once_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->once_rad->Location = System::Drawing::Point(0, 49);
			this->once_rad->Name = L"once_rad";
			this->once_rad->Size = System::Drawing::Size(143, 23);
			this->once_rad->TabIndex = 1;
			this->once_rad->TabStop = true;
			this->once_rad->Text = L"Vaccinated Once";
			this->once_rad->UseVisualStyleBackColor = true;
			this->once_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::once_rad_CheckedChanged);
			// 
			// none_rad
			// 
			this->none_rad->AutoSize = true;
			this->none_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->none_rad->Location = System::Drawing::Point(0, 0);
			this->none_rad->Name = L"none_rad";
			this->none_rad->Size = System::Drawing::Size(144, 23);
			this->none_rad->TabIndex = 0;
			this->none_rad->TabStop = true;
			this->none_rad->Text = L"None Vaccinated";
			this->none_rad->UseVisualStyleBackColor = true;
			this->none_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin::none_rad_CheckedChanged);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 581);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 37);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Sorting :";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 37);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Filter:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label3);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1568, 100);
			this->panel5->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1568, 100);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Records";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// waiting_pan
			// 
			this->waiting_pan->Controls->Add(this->panel7);
			this->waiting_pan->Controls->Add(this->one_vacc_pan);
			this->waiting_pan->Controls->Add(this->none_vacc_pan);
			this->waiting_pan->Controls->Add(this->panel3);
			this->waiting_pan->Controls->Add(this->panel1);
			this->waiting_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->waiting_pan->Location = System::Drawing::Point(352, 0);
			this->waiting_pan->Name = L"waiting_pan";
			this->waiting_pan->Size = System::Drawing::Size(1568, 1080);
			this->waiting_pan->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(310, 100);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1258, 980);
			this->panel7->TabIndex = 1;
			// 
			// one_vacc_pan
			// 
			this->one_vacc_pan->BackColor = System::Drawing::Color::Transparent;
			this->one_vacc_pan->Controls->Add(this->one_vacc_empty_lab);
			this->one_vacc_pan->Controls->Add(this->groupBox4);
			this->one_vacc_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->one_vacc_pan->Location = System::Drawing::Point(310, 100);
			this->one_vacc_pan->Name = L"one_vacc_pan";
			this->one_vacc_pan->Size = System::Drawing::Size(1258, 980);
			this->one_vacc_pan->TabIndex = 3;
			// 
			// one_vacc_empty_lab
			// 
			this->one_vacc_empty_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_vacc_empty_lab->ForeColor = System::Drawing::Color::Green;
			this->one_vacc_empty_lab->Location = System::Drawing::Point(365, 238);
			this->one_vacc_empty_lab->Name = L"one_vacc_empty_lab";
			this->one_vacc_empty_lab->Size = System::Drawing::Size(497, 39);
			this->one_vacc_empty_lab->TabIndex = 2;
			this->one_vacc_empty_lab->Text = L"Empty List";
			this->one_vacc_empty_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->one_vacc_empty_lab->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->one_vacc_id_lab);
			this->groupBox4->Controls->Add(this->one_vacc_name_lab);
			this->groupBox4->Controls->Add(this->pictureBox2);
			this->groupBox4->Controls->Add(this->one_vacc_bnt);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(365, 273);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(497, 436);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			// 
			// one_vacc_id_lab
			// 
			this->one_vacc_id_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_vacc_id_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_vacc_id_lab->Location = System::Drawing::Point(0, 282);
			this->one_vacc_id_lab->Name = L"one_vacc_id_lab";
			this->one_vacc_id_lab->Size = System::Drawing::Size(497, 52);
			this->one_vacc_id_lab->TabIndex = 6;
			this->one_vacc_id_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// one_vacc_name_lab
			// 
			this->one_vacc_name_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_vacc_name_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_vacc_name_lab->Location = System::Drawing::Point(0, 228);
			this->one_vacc_name_lab->Name = L"one_vacc_name_lab";
			this->one_vacc_name_lab->Size = System::Drawing::Size(497, 52);
			this->one_vacc_name_lab->TabIndex = 5;
			this->one_vacc_name_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(0, 10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(497, 215);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// one_vacc_bnt
			// 
			this->one_vacc_bnt->BackColor = System::Drawing::Color::Silver;
			this->one_vacc_bnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->one_vacc_bnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->one_vacc_bnt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->one_vacc_bnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_vacc_bnt->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_vacc_bnt->Location = System::Drawing::Point(0, 369);
			this->one_vacc_bnt->Name = L"one_vacc_bnt";
			this->one_vacc_bnt->Size = System::Drawing::Size(497, 67);
			this->one_vacc_bnt->TabIndex = 3;
			this->one_vacc_bnt->Text = L"Vaccinate";
			this->one_vacc_bnt->UseVisualStyleBackColor = false;
			this->one_vacc_bnt->Click += gcnew System::EventHandler(this, &Admin::one_vacc_bnt_Click);
			// 
			// none_vacc_pan
			// 
			this->none_vacc_pan->BackColor = System::Drawing::Color::Transparent;
			this->none_vacc_pan->Controls->Add(this->empty_lab);
			this->none_vacc_pan->Controls->Add(this->groupBox1);
			this->none_vacc_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->none_vacc_pan->Location = System::Drawing::Point(310, 100);
			this->none_vacc_pan->Name = L"none_vacc_pan";
			this->none_vacc_pan->Size = System::Drawing::Size(1258, 980);
			this->none_vacc_pan->TabIndex = 2;
			// 
			// empty_lab
			// 
			this->empty_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empty_lab->ForeColor = System::Drawing::Color::Green;
			this->empty_lab->Location = System::Drawing::Point(365, 234);
			this->empty_lab->Name = L"empty_lab";
			this->empty_lab->Size = System::Drawing::Size(497, 39);
			this->empty_lab->TabIndex = 1;
			this->empty_lab->Text = L"Empty List";
			this->empty_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->empty_lab->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->id_lab);
			this->groupBox1->Controls->Add(this->name_lab);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->vaccinate_btn);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(365, 273);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(497, 436);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// id_lab
			// 
			this->id_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->id_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_lab->Location = System::Drawing::Point(0, 282);
			this->id_lab->Name = L"id_lab";
			this->id_lab->Size = System::Drawing::Size(497, 52);
			this->id_lab->TabIndex = 6;
			this->id_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name_lab
			// 
			this->name_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->name_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lab->Location = System::Drawing::Point(0, 228);
			this->name_lab->Name = L"name_lab";
			this->name_lab->Size = System::Drawing::Size(497, 52);
			this->name_lab->TabIndex = 5;
			this->name_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(0, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(497, 215);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// vaccinate_btn
			// 
			this->vaccinate_btn->BackColor = System::Drawing::Color::Silver;
			this->vaccinate_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vaccinate_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->vaccinate_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->vaccinate_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vaccinate_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vaccinate_btn->Location = System::Drawing::Point(0, 369);
			this->vaccinate_btn->Name = L"vaccinate_btn";
			this->vaccinate_btn->Size = System::Drawing::Size(497, 67);
			this->vaccinate_btn->TabIndex = 3;
			this->vaccinate_btn->Text = L"Vaccinate";
			this->vaccinate_btn->UseVisualStyleBackColor = false;
			this->vaccinate_btn->Click += gcnew System::EventHandler(this, &Admin::vaccinate_btn_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->one_vacc_btn);
			this->panel3->Controls->Add(this->none_vacc_btn);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 100);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(310, 980);
			this->panel3->TabIndex = 1;
			// 
			// one_vacc_btn
			// 
			this->one_vacc_btn->BackColor = System::Drawing::Color::RoyalBlue;
			this->one_vacc_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->one_vacc_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->one_vacc_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->one_vacc_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_vacc_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_vacc_btn->ForeColor = System::Drawing::Color::Transparent;
			this->one_vacc_btn->Location = System::Drawing::Point(20, 600);
			this->one_vacc_btn->Name = L"one_vacc_btn";
			this->one_vacc_btn->Size = System::Drawing::Size(270, 109);
			this->one_vacc_btn->TabIndex = 1;
			this->one_vacc_btn->Text = L"One Vaccinated";
			this->one_vacc_btn->UseVisualStyleBackColor = false;
			this->one_vacc_btn->Click += gcnew System::EventHandler(this, &Admin::one_vacc_btn_Click);
			// 
			// none_vacc_btn
			// 
			this->none_vacc_btn->BackColor = System::Drawing::Color::RoyalBlue;
			this->none_vacc_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->none_vacc_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->none_vacc_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->none_vacc_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->none_vacc_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->none_vacc_btn->ForeColor = System::Drawing::Color::Transparent;
			this->none_vacc_btn->Location = System::Drawing::Point(22, 300);
			this->none_vacc_btn->Name = L"none_vacc_btn";
			this->none_vacc_btn->Size = System::Drawing::Size(270, 109);
			this->none_vacc_btn->TabIndex = 0;
			this->none_vacc_btn->Text = L"None Vaccinated";
			this->none_vacc_btn->UseVisualStyleBackColor = false;
			this->none_vacc_btn->Click += gcnew System::EventHandler(this, &Admin::none_vacc_btn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1568, 100);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1568, 100);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Waiting Lists";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// graphs_pan
			// 
			this->graphs_pan->AutoScroll = true;
			this->graphs_pan->Controls->Add(this->chart3);
			this->graphs_pan->Controls->Add(this->chart2);
			this->graphs_pan->Controls->Add(this->chart1);
			this->graphs_pan->Controls->Add(this->panel4);
			this->graphs_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->graphs_pan->Location = System::Drawing::Point(352, 0);
			this->graphs_pan->Name = L"graphs_pan";
			this->graphs_pan->Size = System::Drawing::Size(1568, 1080);
			this->graphs_pan->TabIndex = 4;
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(240, 1693);
			this->chart3->Margin = System::Windows::Forms::Padding(3, 3, 3, 150);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			series1->Legend = L"Legend1";
			series1->Name = L"Alexandria";
			series2->ChartArea = L"ChartArea1";
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			series2->Legend = L"Legend1";
			series2->Name = L"Aswan";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Asyut";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Beheira";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Beni Suef";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"Cairo";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Dakahlia";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"Damietta";
			series9->ChartArea = L"ChartArea1";
			series9->Legend = L"Legend1";
			series9->Name = L"Faiyum";
			series10->ChartArea = L"ChartArea1";
			series10->Legend = L"Legend1";
			series10->Name = L"Gharbia";
			series11->ChartArea = L"ChartArea1";
			series11->Legend = L"Legend1";
			series11->Name = L"Giza";
			series12->ChartArea = L"ChartArea1";
			series12->Legend = L"Legend1";
			series12->Name = L"Ismailia";
			series13->ChartArea = L"ChartArea1";
			series13->Legend = L"Legend1";
			series13->Name = L"Kafr El Sheikh";
			series14->ChartArea = L"ChartArea1";
			series14->Legend = L"Legend1";
			series14->Name = L"Luxor";
			series15->ChartArea = L"ChartArea1";
			series15->Legend = L"Legend1";
			series15->Name = L"Matruh";
			series16->ChartArea = L"ChartArea1";
			series16->Legend = L"Legend1";
			series16->Name = L"Minya";
			series17->ChartArea = L"ChartArea1";
			series17->Legend = L"Legend1";
			series17->Name = L"Monufia";
			series18->ChartArea = L"ChartArea1";
			series18->Legend = L"Legend1";
			series18->Name = L"New Valley";
			series19->ChartArea = L"ChartArea1";
			series19->Legend = L"Legend1";
			series19->Name = L"North Sinai";
			series20->ChartArea = L"ChartArea1";
			series20->Legend = L"Legend1";
			series20->Name = L"Port Said";
			series21->ChartArea = L"ChartArea1";
			series21->Legend = L"Legend1";
			series21->Name = L"Qalyubia";
			series22->ChartArea = L"ChartArea1";
			series22->Legend = L"Legend1";
			series22->Name = L"Qena";
			series23->ChartArea = L"ChartArea1";
			series23->Legend = L"Legend1";
			series23->Name = L"Red Sea";
			series24->ChartArea = L"ChartArea1";
			series24->Legend = L"Legend1";
			series24->Name = L"Sharqia";
			series25->ChartArea = L"ChartArea1";
			series25->Legend = L"Legend1";
			series25->Name = L"Sohag";
			series26->ChartArea = L"ChartArea1";
			series26->Legend = L"Legend1";
			series26->Name = L"South Sinai";
			series27->ChartArea = L"ChartArea1";
			series27->Legend = L"Legend1";
			series27->Name = L"Suez";
			this->chart3->Series->Add(series1);
			this->chart3->Series->Add(series2);
			this->chart3->Series->Add(series3);
			this->chart3->Series->Add(series4);
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Series->Add(series8);
			this->chart3->Series->Add(series9);
			this->chart3->Series->Add(series10);
			this->chart3->Series->Add(series11);
			this->chart3->Series->Add(series12);
			this->chart3->Series->Add(series13);
			this->chart3->Series->Add(series14);
			this->chart3->Series->Add(series15);
			this->chart3->Series->Add(series16);
			this->chart3->Series->Add(series17);
			this->chart3->Series->Add(series18);
			this->chart3->Series->Add(series19);
			this->chart3->Series->Add(series20);
			this->chart3->Series->Add(series21);
			this->chart3->Series->Add(series22);
			this->chart3->Series->Add(series23);
			this->chart3->Series->Add(series24);
			this->chart3->Series->Add(series25);
			this->chart3->Series->Add(series26);
			this->chart3->Series->Add(series27);
			this->chart3->Size = System::Drawing::Size(1097, 684);
			this->chart3->TabIndex = 8;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(240, 914);
			this->chart2->Margin = System::Windows::Forms::Padding(3, 3, 3, 150);
			this->chart2->Name = L"chart2";
			series28->ChartArea = L"ChartArea1";
			series28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			series28->Legend = L"Legend1";
			series28->Name = L"Male";
			series29->ChartArea = L"ChartArea1";
			series29->Color = System::Drawing::Color::Red;
			series29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			series29->Legend = L"Legend1";
			series29->Name = L"Female";
			this->chart2->Series->Add(series28);
			this->chart2->Series->Add(series29);
			this->chart2->Size = System::Drawing::Size(1097, 684);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(240, 139);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 3, 3, 50);
			this->chart1->Name = L"chart1";
			series30->ChartArea = L"ChartArea1";
			series30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			series30->Legend = L"Legend1";
			series30->Name = L"None vaccinated";
			series31->BorderWidth = 2;
			series31->ChartArea = L"ChartArea1";
			series31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			series31->Legend = L"Legend1";
			series31->Name = L"Vaccinated once";
			series32->ChartArea = L"ChartArea1";
			series32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			series32->Legend = L"Legend1";
			series32->Name = L"Vaccinated twice";
			this->chart1->Series->Add(series30);
			this->chart1->Series->Add(series31);
			this->chart1->Series->Add(series32);
			this->chart1->Size = System::Drawing::Size(1097, 684);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1551, 100);
			this->panel4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1551, 100);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Graphs";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// delete_pan
			// 
			this->delete_pan->Controls->Add(this->panel10);
			this->delete_pan->Controls->Add(this->delete_admin_pan);
			this->delete_pan->Controls->Add(this->delete_user_pan);
			this->delete_pan->Controls->Add(this->panel9);
			this->delete_pan->Controls->Add(this->panel6);
			this->delete_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_pan->Location = System::Drawing::Point(352, 0);
			this->delete_pan->Name = L"delete_pan";
			this->delete_pan->Size = System::Drawing::Size(1568, 1080);
			this->delete_pan->TabIndex = 4;
			// 
			// panel10
			// 
			this->panel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel10->Location = System::Drawing::Point(310, 100);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1258, 980);
			this->panel10->TabIndex = 15;
			// 
			// delete_admin_pan
			// 
			this->delete_admin_pan->Controls->Add(this->admin_id_box);
			this->delete_admin_pan->Controls->Add(this->get_admin);
			this->delete_admin_pan->Controls->Add(this->label20);
			this->delete_admin_pan->Controls->Add(this->del_all_admin_btn);
			this->delete_admin_pan->Controls->Add(this->del_all_admin_lab);
			this->delete_admin_pan->Controls->Add(this->groupBox9);
			this->delete_admin_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_admin_pan->Location = System::Drawing::Point(310, 100);
			this->delete_admin_pan->Name = L"delete_admin_pan";
			this->delete_admin_pan->Size = System::Drawing::Size(1258, 980);
			this->delete_admin_pan->TabIndex = 13;
			// 
			// admin_id_box
			// 
			this->admin_id_box->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_id_box->Location = System::Drawing::Point(215, 491);
			this->admin_id_box->Name = L"admin_id_box";
			this->admin_id_box->Size = System::Drawing::Size(529, 46);
			this->admin_id_box->TabIndex = 7;
			// 
			// get_admin
			// 
			this->get_admin->BackColor = System::Drawing::Color::Silver;
			this->get_admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->get_admin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->get_admin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->get_admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->get_admin->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->get_admin->Location = System::Drawing::Point(344, 570);
			this->get_admin->Name = L"get_admin";
			this->get_admin->Size = System::Drawing::Size(278, 42);
			this->get_admin->TabIndex = 8;
			this->get_admin->Text = L"Get Admin";
			this->get_admin->UseVisualStyleBackColor = false;
			this->get_admin->Click += gcnew System::EventHandler(this, &Admin::get_admin_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Green;
			this->label20->Location = System::Drawing::Point(750, 499);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(356, 33);
			this->label20->TabIndex = 10;
			this->label20->Text = L"There No Admin With This id";
			this->label20->Visible = false;
			// 
			// del_all_admin_btn
			// 
			this->del_all_admin_btn->BackColor = System::Drawing::Color::Red;
			this->del_all_admin_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_all_admin_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->del_all_admin_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->del_all_admin_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_all_admin_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_all_admin_btn->Location = System::Drawing::Point(223, 694);
			this->del_all_admin_btn->Name = L"del_all_admin_btn";
			this->del_all_admin_btn->Size = System::Drawing::Size(529, 189);
			this->del_all_admin_btn->TabIndex = 5;
			this->del_all_admin_btn->Text = L"Delete All Admins";
			this->del_all_admin_btn->UseVisualStyleBackColor = false;
			this->del_all_admin_btn->Click += gcnew System::EventHandler(this, &Admin::del_all_admin_btn_Click);
			// 
			// del_all_admin_lab
			// 
			this->del_all_admin_lab->AutoSize = true;
			this->del_all_admin_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_all_admin_lab->ForeColor = System::Drawing::Color::Green;
			this->del_all_admin_lab->Location = System::Drawing::Point(321, 642);
			this->del_all_admin_lab->Name = L"del_all_admin_lab";
			this->del_all_admin_lab->Size = System::Drawing::Size(363, 33);
			this->del_all_admin_lab->TabIndex = 11;
			this->del_all_admin_lab->Text = L"All Admins have been deleted";
			this->del_all_admin_lab->Visible = false;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->del_admin);
			this->groupBox9->Controls->Add(this->ad_lvl_lab);
			this->groupBox9->Controls->Add(this->ad_gender_lab);
			this->groupBox9->Controls->Add(this->ad_id_lab);
			this->groupBox9->Controls->Add(this->ad_name_lab);
			this->groupBox9->Controls->Add(this->pictureBox4);
			this->groupBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox9->Location = System::Drawing::Point(267, 42);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(417, 404);
			this->groupBox9->TabIndex = 9;
			this->groupBox9->TabStop = false;
			this->groupBox9->Visible = false;
			// 
			// del_admin
			// 
			this->del_admin->BackColor = System::Drawing::Color::Red;
			this->del_admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_admin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->del_admin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->del_admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_admin->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_admin->Location = System::Drawing::Point(0, 357);
			this->del_admin->Name = L"del_admin";
			this->del_admin->Size = System::Drawing::Size(416, 46);
			this->del_admin->TabIndex = 7;
			this->del_admin->Text = L"Delete";
			this->del_admin->UseVisualStyleBackColor = false;
			this->del_admin->Click += gcnew System::EventHandler(this, &Admin::del_admin_Click);
			// 
			// ad_lvl_lab
			// 
			this->ad_lvl_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ad_lvl_lab->Location = System::Drawing::Point(2, 300);
			this->ad_lvl_lab->Name = L"ad_lvl_lab";
			this->ad_lvl_lab->Size = System::Drawing::Size(414, 45);
			this->ad_lvl_lab->TabIndex = 4;
			this->ad_lvl_lab->Text = L"label24";
			this->ad_lvl_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ad_gender_lab
			// 
			this->ad_gender_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ad_gender_lab->Location = System::Drawing::Point(2, 260);
			this->ad_gender_lab->Name = L"ad_gender_lab";
			this->ad_gender_lab->Size = System::Drawing::Size(415, 45);
			this->ad_gender_lab->TabIndex = 3;
			this->ad_gender_lab->Text = L"label25";
			this->ad_gender_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ad_id_lab
			// 
			this->ad_id_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ad_id_lab->Location = System::Drawing::Point(1, 220);
			this->ad_id_lab->Name = L"ad_id_lab";
			this->ad_id_lab->Size = System::Drawing::Size(415, 45);
			this->ad_id_lab->TabIndex = 2;
			this->ad_id_lab->Text = L"label26";
			this->ad_id_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ad_name_lab
			// 
			this->ad_name_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ad_name_lab->Location = System::Drawing::Point(0, 180);
			this->ad_name_lab->Name = L"ad_name_lab";
			this->ad_name_lab->Size = System::Drawing::Size(416, 45);
			this->ad_name_lab->TabIndex = 1;
			this->ad_name_lab->Text = L"label27";
			this->ad_name_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(416, 177);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// delete_user_pan
			// 
			this->delete_user_pan->Controls->Add(this->id_del_box);
			this->delete_user_pan->Controls->Add(this->get_user_btn);
			this->delete_user_pan->Controls->Add(this->not_found_lab);
			this->delete_user_pan->Controls->Add(this->delete_all_btn);
			this->delete_user_pan->Controls->Add(this->deleted_lap);
			this->delete_user_pan->Controls->Add(this->groupBox5);
			this->delete_user_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_user_pan->Location = System::Drawing::Point(310, 100);
			this->delete_user_pan->Name = L"delete_user_pan";
			this->delete_user_pan->Size = System::Drawing::Size(1258, 980);
			this->delete_user_pan->TabIndex = 12;
			// 
			// id_del_box
			// 
			this->id_del_box->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_del_box->Location = System::Drawing::Point(221, 535);
			this->id_del_box->Name = L"id_del_box";
			this->id_del_box->Size = System::Drawing::Size(529, 46);
			this->id_del_box->TabIndex = 7;
			this->id_del_box->TextChanged += gcnew System::EventHandler(this, &Admin::id_del_box_TextChanged);
			// 
			// get_user_btn
			// 
			this->get_user_btn->BackColor = System::Drawing::Color::Silver;
			this->get_user_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->get_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->get_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->get_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->get_user_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->get_user_btn->Location = System::Drawing::Point(342, 614);
			this->get_user_btn->Name = L"get_user_btn";
			this->get_user_btn->Size = System::Drawing::Size(278, 42);
			this->get_user_btn->TabIndex = 8;
			this->get_user_btn->Text = L"Get User";
			this->get_user_btn->UseVisualStyleBackColor = false;
			this->get_user_btn->Click += gcnew System::EventHandler(this, &Admin::get_user_btn_Click);
			// 
			// not_found_lab
			// 
			this->not_found_lab->AutoSize = true;
			this->not_found_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_found_lab->ForeColor = System::Drawing::Color::Green;
			this->not_found_lab->Location = System::Drawing::Point(756, 543);
			this->not_found_lab->Name = L"not_found_lab";
			this->not_found_lab->Size = System::Drawing::Size(440, 33);
			this->not_found_lab->TabIndex = 10;
			this->not_found_lab->Text = L"There No User With This Natioanl id";
			this->not_found_lab->Visible = false;
			// 
			// delete_all_btn
			// 
			this->delete_all_btn->BackColor = System::Drawing::Color::Red;
			this->delete_all_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_all_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->delete_all_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->delete_all_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_all_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_all_btn->Location = System::Drawing::Point(221, 738);
			this->delete_all_btn->Name = L"delete_all_btn";
			this->delete_all_btn->Size = System::Drawing::Size(529, 189);
			this->delete_all_btn->TabIndex = 5;
			this->delete_all_btn->Text = L"Delete All Records";
			this->delete_all_btn->UseVisualStyleBackColor = false;
			this->delete_all_btn->Click += gcnew System::EventHandler(this, &Admin::delete_all_btn_Click);
			// 
			// deleted_lap
			// 
			this->deleted_lap->AutoSize = true;
			this->deleted_lap->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleted_lap->ForeColor = System::Drawing::Color::Green;
			this->deleted_lap->Location = System::Drawing::Point(319, 686);
			this->deleted_lap->Name = L"deleted_lap";
			this->deleted_lap->Size = System::Drawing::Size(339, 33);
			this->deleted_lap->TabIndex = 11;
			this->deleted_lap->Text = L"All users have been deleted";
			this->deleted_lap->Visible = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->del_btn);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->pictureBox3);
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox5->Location = System::Drawing::Point(273, 38);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(417, 475);
			this->groupBox5->TabIndex = 9;
			this->groupBox5->TabStop = false;
			this->groupBox5->Visible = false;
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::Red;
			this->del_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->del_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->del_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_btn->Location = System::Drawing::Point(0, 428);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(416, 46);
			this->del_btn->TabIndex = 7;
			this->del_btn->Text = L"Delete";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &Admin::del_btn_Click);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1, 380);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(415, 45);
			this->label13->TabIndex = 6;
			this->label13->Text = L"label13";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(2, 340);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(414, 45);
			this->label12->TabIndex = 5;
			this->label12->Text = L"label12";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(2, 300);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(414, 45);
			this->label11->TabIndex = 4;
			this->label11->Text = L"label11";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(2, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(415, 45);
			this->label10->TabIndex = 3;
			this->label10->Text = L"label10";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(415, 45);
			this->label9->TabIndex = 2;
			this->label9->Text = L"label9";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(416, 45);
			this->label8->TabIndex = 1;
			this->label8->Text = L"label8";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(416, 177);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->admin_del_btn);
			this->panel9->Controls->Add(this->user_del_btn);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel9->Location = System::Drawing::Point(0, 100);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(310, 980);
			this->panel9->TabIndex = 14;
			// 
			// admin_del_btn
			// 
			this->admin_del_btn->BackColor = System::Drawing::Color::RoyalBlue;
			this->admin_del_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->admin_del_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->admin_del_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->admin_del_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_del_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_del_btn->ForeColor = System::Drawing::Color::Transparent;
			this->admin_del_btn->Location = System::Drawing::Point(22, 529);
			this->admin_del_btn->Name = L"admin_del_btn";
			this->admin_del_btn->Size = System::Drawing::Size(270, 109);
			this->admin_del_btn->TabIndex = 1;
			this->admin_del_btn->Text = L"Admin";
			this->admin_del_btn->UseVisualStyleBackColor = false;
			this->admin_del_btn->Click += gcnew System::EventHandler(this, &Admin::admin_del_btn_Click);
			// 
			// user_del_btn
			// 
			this->user_del_btn->BackColor = System::Drawing::Color::RoyalBlue;
			this->user_del_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->user_del_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->user_del_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->user_del_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_del_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_del_btn->ForeColor = System::Drawing::Color::Transparent;
			this->user_del_btn->Location = System::Drawing::Point(20, 278);
			this->user_del_btn->Name = L"user_del_btn";
			this->user_del_btn->Size = System::Drawing::Size(270, 109);
			this->user_del_btn->TabIndex = 0;
			this->user_del_btn->Text = L"User";
			this->user_del_btn->UseVisualStyleBackColor = false;
			this->user_del_btn->Click += gcnew System::EventHandler(this, &Admin::user_del_btn_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label4);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1568, 100);
			this->panel6->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1568, 100);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Delete";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_admin_pan
			// 
			this->add_admin_pan->Controls->Add(this->i_lab);
			this->add_admin_pan->Controls->Add(this->add_suc_lab);
			this->add_admin_pan->Controls->Add(this->add_btn);
			this->add_admin_pan->Controls->Add(this->label19);
			this->add_admin_pan->Controls->Add(this->label17);
			this->add_admin_pan->Controls->Add(this->label16);
			this->add_admin_pan->Controls->Add(this->label15);
			this->add_admin_pan->Controls->Add(this->groupBox7);
			this->add_admin_pan->Controls->Add(this->groupBox6);
			this->add_admin_pan->Controls->Add(this->pass_box);
			this->add_admin_pan->Controls->Add(this->panel2);
			this->add_admin_pan->Controls->Add(this->name_box);
			this->add_admin_pan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_admin_pan->Location = System::Drawing::Point(352, 0);
			this->add_admin_pan->Name = L"add_admin_pan";
			this->add_admin_pan->Size = System::Drawing::Size(1568, 1080);
			this->add_admin_pan->TabIndex = 1;
			// 
			// i_lab
			// 
			this->i_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i_lab->ForeColor = System::Drawing::Color::Fuchsia;
			this->i_lab->Location = System::Drawing::Point(514, 996);
			this->i_lab->Name = L"i_lab";
			this->i_lab->Size = System::Drawing::Size(562, 57);
			this->i_lab->TabIndex = 16;
			this->i_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_suc_lab
			// 
			this->add_suc_lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_suc_lab->ForeColor = System::Drawing::Color::Green;
			this->add_suc_lab->Location = System::Drawing::Point(521, 939);
			this->add_suc_lab->Name = L"add_suc_lab";
			this->add_suc_lab->Size = System::Drawing::Size(555, 57);
			this->add_suc_lab->TabIndex = 15;
			this->add_suc_lab->Text = L"The Admin Added Successfully";
			this->add_suc_lab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->add_suc_lab->Visible = false;
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::Silver;
			this->add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_btn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->add_btn->FlatAppearance->BorderSize = 0;
			this->add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(660, 833);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(278, 75);
			this->add_btn->TabIndex = 14;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &Admin::add_btn_Click);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(382, 671);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(133, 48);
			this->label19->TabIndex = 13;
			this->label19->Text = L"Level : ";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(366, 523);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(149, 48);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Gender : ";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(337, 373);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(178, 48);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Password :";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(382, 223);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 48);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Name : ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->lvl2_rad);
			this->groupBox7->Controls->Add(this->lvl1_rad);
			this->groupBox7->Location = System::Drawing::Point(521, 665);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(554, 56);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			// 
			// lvl2_rad
			// 
			this->lvl2_rad->AutoSize = true;
			this->lvl2_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lvl2_rad->Location = System::Drawing::Point(346, 11);
			this->lvl2_rad->Name = L"lvl2_rad";
			this->lvl2_rad->Size = System::Drawing::Size(53, 44);
			this->lvl2_rad->TabIndex = 2;
			this->lvl2_rad->TabStop = true;
			this->lvl2_rad->Text = L"2";
			this->lvl2_rad->UseVisualStyleBackColor = true;
			// 
			// lvl1_rad
			// 
			this->lvl1_rad->AutoSize = true;
			this->lvl1_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lvl1_rad->Location = System::Drawing::Point(171, 11);
			this->lvl1_rad->Name = L"lvl1_rad";
			this->lvl1_rad->Size = System::Drawing::Size(53, 44);
			this->lvl1_rad->TabIndex = 0;
			this->lvl1_rad->TabStop = true;
			this->lvl1_rad->Text = L"1";
			this->lvl1_rad->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->female_rad);
			this->groupBox6->Controls->Add(this->male_rad);
			this->groupBox6->Location = System::Drawing::Point(521, 515);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(554, 56);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			// 
			// female_rad
			// 
			this->female_rad->AutoSize = true;
			this->female_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female_rad->Location = System::Drawing::Point(362, 9);
			this->female_rad->Name = L"female_rad";
			this->female_rad->Size = System::Drawing::Size(139, 44);
			this->female_rad->TabIndex = 1;
			this->female_rad->TabStop = true;
			this->female_rad->Text = L"Female";
			this->female_rad->UseVisualStyleBackColor = true;
			// 
			// male_rad
			// 
			this->male_rad->AutoSize = true;
			this->male_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male_rad->Location = System::Drawing::Point(104, 9);
			this->male_rad->Name = L"male_rad";
			this->male_rad->Size = System::Drawing::Size(102, 44);
			this->male_rad->TabIndex = 0;
			this->male_rad->TabStop = true;
			this->male_rad->Text = L"Male";
			this->male_rad->UseVisualStyleBackColor = true;
			// 
			// pass_box
			// 
			this->pass_box->Font = (gcnew System::Drawing::Font(L"Tahoma", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_box->Location = System::Drawing::Point(521, 365);
			this->pass_box->Name = L"pass_box";
			this->pass_box->Size = System::Drawing::Size(555, 59);
			this->pass_box->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label14);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1568, 100);
			this->panel2->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1568, 100);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Add Admin";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name_box
			// 
			this->name_box->Font = (gcnew System::Drawing::Font(L"Tahoma", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_box->Location = System::Drawing::Point(521, 215);
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(555, 59);
			this->name_box->TabIndex = 0;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1920, 1080);
			this->Controls->Add(this->records_pan);
			this->Controls->Add(this->delete_pan);
			this->Controls->Add(this->waiting_pan);
			this->Controls->Add(this->add_admin_pan);
			this->Controls->Add(this->graphs_pan);
			this->Controls->Add(this->menu_pan);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->menu_pan->ResumeLayout(false);
			this->menu_pan->PerformLayout();
			this->records_pan->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->waiting_pan->ResumeLayout(false);
			this->one_vacc_pan->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->none_vacc_pan->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->graphs_pan->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->delete_pan->ResumeLayout(false);
			this->delete_admin_pan->ResumeLayout(false);
			this->delete_admin_pan->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->delete_user_pan->ResumeLayout(false);
			this->delete_user_pan->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->add_admin_pan->ResumeLayout(false);
			this->add_admin_pan->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//for handeling chart update
		int click_graph_count;

		//Load Page
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {

		admin_rad->Checked = false;
		none_rad->Checked = false;
		once_rad->Checked = false;
		twice_rad->Checked = false;
		all_rad->Checked = false;
		age_rad->Checked = false;
		high_age_rad->Checked = false;
		
		this->flowLayoutPanel1->Controls->Clear();

		// Loop that create the groupbox and labels
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;

			GroupBox^ groupbox = f->Draw_GroupBox(user);

			this->flowLayoutPanel1->Controls->Add(groupbox);
		}
		
	}


private: System::Void wait_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	waiting_pan->BringToFront();
	panel7->BringToFront();
}
	    
	   //Chart stats
private: System::Void Graphs_Click(System::Object^ sender, System::EventArgs^ e) {
	graphs_pan->BringToFront();
	//Graphs and stats

	//initialize gov_map an take values
	cliext::map<String^, int> gov_map;
	gov_map["Alexandria"] = 0;
	gov_map["Aswan"] = 0;
	gov_map["Asyut"] = 0;
	gov_map["Beheira"] = 0;
	gov_map["Beni Suef"] = 0;
	gov_map["Cairo"] = 0;
	gov_map["Dakahlia"] = 0;
	gov_map["Damietta"] = 0;
	gov_map["Faiyum"] = 0;
	gov_map["Gharbia"] = 0;
	gov_map["Giza"] = 0;
	gov_map["Ismailia"] = 0;
	gov_map["Kafr El Sheikh"] = 0;
	gov_map["Luxor"] = 0;
	gov_map["Matruh"] = 0;
	gov_map["Minya"] = 0;
	gov_map["Monufia"] = 0;
	gov_map["North Sinai"] = 0;
	gov_map["Port Said"] = 0;
	gov_map["Qalyubia"] = 0;
	gov_map["Qena"] = 0;
	gov_map["Red Sea"] = 0;
	gov_map["Sohag"] = 0;
	gov_map["South Sinai"] = 0;
	gov_map["Suez"] = 0;
	gov_map["New Valley"] = 0;

	//here if he click again after the first click it will clear the last one and if we make any changes in the data
	if (click_graph_count==0)
	{
		chart1->Series["None vaccinated"]->Points->Clear();
		chart1->Series["Vaccinated once"]->Points->Clear();
		chart1->Series["Vaccinated twice"]->Points->Clear();
		chart2->Series["Male"]->Points->Clear();
		chart2->Series["Female"]->Points->Clear();
		chart1->Series["None vaccinated"]->Label = "";
		chart1->Series["Vaccinated once"]->Label = "";
		chart1->Series["Vaccinated twice"]->Label = "";
		for (auto i = gov_map.begin(); i != gov_map.end(); ++i)
		{
			chart3->Series[(*i)->first]->Points->Clear();
			chart3->Series[(*i)->first]->Label = "";
		}
	}

	//count to control the statistics
	click_graph_count++;
	double count_user=0;
	double count_male=0;
	double count_female=0;
	double count_vacc_none=0;
	double count_vacc_one=0;
	double count_vacc_two=0;
	
	//loop on the vector that have all user and assign values to the counters
	for (int i = 0; i < f->user_vector.size(); i++) {
		User^ user = f->user_vector[i];
		count_user++;

		if (user->gender == "Male") {
			count_male++;
		}
		else if (user->gender == "Female")
		{
			count_female++;
		}
		if (user->vaccinated == "0")
		{
			count_vacc_none++;
		}
		else if (user->vaccinated == "1")
		{
			count_vacc_one++;
		}
		else if (user->vaccinated == "2")
		{
			count_vacc_two++;
		}
		
		gov_map[user->governorate]++;
	}
	
	//it will enter here for the first time you click on graphs btn and if we make any update on the data
	if (click_graph_count == 1)
	{
		//chart1
		double vacc_none_prs = (count_vacc_none / count_user) * 100;
		vacc_none_prs = (int)(vacc_none_prs * 100 + .5);
		vacc_none_prs = (double)vacc_none_prs / 100;

		double vacc_one_prs = (count_vacc_one / count_user) * 100;
		vacc_one_prs = (int)(vacc_one_prs * 100 + .5);
		vacc_one_prs = (double)vacc_one_prs / 100;

		double vacc_two_prs = (count_vacc_two / count_user) * 100;
		vacc_two_prs = (int)(vacc_two_prs * 100 + .5);
		vacc_two_prs = (double)vacc_two_prs / 100;

		chart1->Series["None vaccinated"]->Points->AddXY("", vacc_none_prs);
		if (vacc_none_prs != 0)
		{
			chart1->Series["None vaccinated"]->Label = " " + vacc_none_prs + "%";
		}
		chart1->Series["Vaccinated once"]->Points->AddXY("", vacc_one_prs);
		if (vacc_one_prs != 0)
		{
			chart1->Series["Vaccinated once"]->Label = " " + vacc_one_prs + "%";
		}
		chart1->Series["Vaccinated twice"]->Points->AddXY("", vacc_two_prs);
		if (vacc_two_prs != 0)
		{
			chart1->Series["Vaccinated twice"]->Label = " " + vacc_two_prs + "%";
		}
		
		
		//chart2
		
		double male_prs = (count_male / count_user) * 100;
		male_prs = (int)(male_prs * 100 + .5);
		male_prs = (double)male_prs / 100;
		double female_prs = 100 - male_prs;

		chart2->Series["Male"]->Points->AddXY("", male_prs);
		
		if (male_prs!=0)
		{
			chart2->Series["Male"]->Label =" " + male_prs + "%";
		}
		chart2->Series["Female"]->Points->AddXY("", female_prs);
		
		if (female_prs!=0)
		{
			chart2->Series["Female"]->Label = " " + female_prs + "%";
		}
		

		//chart3
		for (auto i = gov_map.begin(); i != gov_map.end(); ++i)
		{
			
			double gov_map_prs = ((*i)->second / count_user) * 100;
			chart3->Series[(*i)->first]->Points->AddXY("", gov_map_prs);
			gov_map_prs = (int)(gov_map_prs * 100 + .5);
			gov_map_prs = (double)gov_map_prs / 100;
			
			if (gov_map_prs != 0)
			{
				chart3->Series[(*i)->first]->Label = " " + gov_map_prs + "%";
			}
			
		}
		
		
	}
	
}

//if we click on delete btn it xill bring the delete panel to front
private: System::Void modify_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_pan->BringToFront();
}

	   /*if we click on record btn it will bring the record panel to front and
	   calling the adminload func again to make the records group box*/
private: System::Void rec_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Admin_Load(sender,e);
	records_pan->BringToFront();
}
private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	f->Write_File();
	f->Write_Admin_File();
	Application::Exit();
}


private: System::Void none_vacc_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	none_vacc_pan->BringToFront();
	f->non_vacc_que = f->Read_None_Vacc_User();

	if (!f->non_vacc_que.empty())
	{
		empty_lab->Visible = false;
		vaccinate_btn->Enabled = true;

		User^ user = f->non_vacc_que.front();
	
		if (user->gender == "Female")
		{
			this->pictureBox1->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-girl-100.png");
		}
		else
		{
			this->pictureBox1->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-standing-man-100.png");
		}

		name_lab->Text = user->fullname;
		id_lab->Text = user->national_id;
	}
	else
	{
		pictureBox1->Visible = false;
		name_lab->Visible = false;
		id_lab->Visible = false;
		empty_lab->Visible = true;
		vaccinate_btn->Enabled = false;
	}
}


private: System::Void one_vacc_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	one_vacc_pan->BringToFront();
	f->one_vacc_que = f->Read_Vacc_One_User();

	if (!f->one_vacc_que.empty())
	{
		one_vacc_empty_lab->Visible = false;
		one_vacc_bnt->Enabled = true;

		User^ user = f->one_vacc_que.front();

		if (user->gender == "Female")
		{
			this->pictureBox2->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-girl-100.png");
		}
		else
		{
			this->pictureBox2->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-standing-man-100.png");
		}

		one_vacc_name_lab->Text = user->fullname;
		one_vacc_id_lab->Text = user->national_id;
	}
	else
	{
		pictureBox2->Visible = false;
		one_vacc_name_lab->Visible = false;
		one_vacc_id_lab->Visible = false;
		one_vacc_empty_lab->Visible = true;
		one_vacc_bnt->Enabled = false;
	}
}

	   //function to vaccinate btn in wating list
private: System::Void vaccinate_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!f->non_vacc_que.empty())
	{
		click_graph_count = 0;
		empty_lab->Visible = false;

		User^ user = f->non_vacc_que.front();
		
		f->Update_Delete(user, 2);

		user->vaccinated = "1";

		f->user_vector.push_back(user);

		f->non_vacc_que.pop();

		none_vacc_btn_Click(sender, e);
	}
	else
	{
		pictureBox1->Visible = false;
		name_lab->Visible = false;
		id_lab->Visible = false;
		empty_lab->Visible = true;
	}
	
}

		//function to filter none vacc user in Records panel	   
private: System::Void none_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();
	

	if (!age_rad->Checked && !high_age_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;

			if (user->vaccinated == "0" && none_rad->Checked)
			{
				GroupBox^ groupbox = f->Draw_GroupBox(user);
				this->flowLayoutPanel1->Controls->Add(groupbox);
			}
		}
	}

	else if(age_rad->Checked)
	{
		age_rad_CheckedChanged(sender, e);
	}

	else if (high_age_rad->Checked)
	{
		high_age_rad_CheckedChanged(sender, e);
	}
	
}

	   //function to filter vacc once user in Records panel	   
private: System::Void once_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	if (!age_rad->Checked && !high_age_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;

			if (user->vaccinated == "1" && once_rad->Checked)
			{
				GroupBox^ groupbox = f->Draw_GroupBox(user);
				this->flowLayoutPanel1->Controls->Add(groupbox);
			}
		}
	}

	else if (age_rad->Checked)
	{
		age_rad_CheckedChanged(sender, e);
	}

	else if (high_age_rad->Checked)
	{
		high_age_rad_CheckedChanged(sender, e);
	}
}

	   //function to filter vacc twice user in Records panel	   
private: System::Void twice_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	if (!age_rad->Checked && !high_age_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;

			if (user->vaccinated == "2" && twice_rad->Checked)
			{
				GroupBox^ groupbox = f->Draw_GroupBox(user);
				this->flowLayoutPanel1->Controls->Add(groupbox);
			}
		}
	}

	else if (age_rad->Checked)
	{
		age_rad_CheckedChanged(sender, e);
	}

	else if (high_age_rad->Checked)
	{
		high_age_rad_CheckedChanged(sender, e);
	}
}

	   //function to display all user in Records panel	   
private: System::Void all_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	if (!age_rad->Checked && !high_age_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			GroupBox^ groupbox = f->Draw_GroupBox(user);
			this->flowLayoutPanel1->Controls->Add(groupbox);
		}
	}

	else if (age_rad->Checked)
	{
		age_rad_CheckedChanged(sender, e);
	}

	else if (high_age_rad->Checked)
	{
		high_age_rad_CheckedChanged(sender, e);
	}
}
private: System::Void age_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();
	User^ temp;
	cliext::vector<User^> sort_vector;
	
	if (none_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "0")
			{
				sort_vector.push_back(user);
			}
		}
	}

	else if (once_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "1")
			{
				sort_vector.push_back(user);
			}
		}
	}
	
	else if (twice_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "2")
			{
				sort_vector.push_back(user);
			}
		}
	}
	else
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			sort_vector.push_back(user);

		}
	}
	

	for (int i = 0; i < sort_vector.size(); i++)
	{
		for (int j = i + 1; j < sort_vector.size(); j++)
		{
			if (Int32::Parse(sort_vector[j]->age) < Int32::Parse(sort_vector[i]->age))
			{
				temp = sort_vector[i];
				sort_vector[i] = sort_vector[j];
				sort_vector[j] = temp;
			}
		}
	}

	for (auto i = sort_vector.begin(); i < sort_vector.end(); ++i)
	{
		User^ user = *i;
		GroupBox^ groupbox = f->Draw_GroupBox(user);
		this->flowLayoutPanel1->Controls->Add(groupbox);
	}
}
private: System::Void high_age_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();
	User^ temp;
	cliext::vector<User^> sort_vector;
	
	if (none_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "0")
			{
				sort_vector.push_back(user);
			}
		}
	}

	else if (once_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "1")
			{
				sort_vector.push_back(user);
			}
		}
	}

	else if (twice_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			if (user->vaccinated == "2")
			{
				sort_vector.push_back(user);
			}
		}
	}

	else if (all_rad->Checked)
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			sort_vector.push_back(user);

		}
	}

	else
	{
		for (auto i = f->user_vector.begin(); i < f->user_vector.end(); ++i)
		{
			User^ user = *i;
			sort_vector.push_back(user);
		}
	}

	for (int i = 0; i < sort_vector.size(); i++)
	{
		for (int j = i + 1; j < sort_vector.size(); j++)
		{
			if (Int32::Parse(sort_vector[j]->age) > Int32::Parse(sort_vector[i]->age))
			{
				temp = sort_vector[i];
				sort_vector[i] = sort_vector[j];
				sort_vector[j] = temp;
			}
		}

	}

	for (auto i = sort_vector.begin(); i < sort_vector.end(); ++i)
	{
		User^ user = *i;
		GroupBox^ groupbox = f->Draw_GroupBox(user);
		this->flowLayoutPanel1->Controls->Add(groupbox);
	}
}
private: System::Void one_vacc_bnt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!f->one_vacc_que.empty())
	{
		click_graph_count = 0;
		one_vacc_empty_lab->Visible = false;

		User^ user = f->one_vacc_que.front();
		
		f->Update_Delete(user, 2);

		user->vaccinated = "2";

		f->user_vector.push_back(user);

		f->one_vacc_que.pop();

		one_vacc_btn_Click(sender, e);
	}
	else
	{
		pictureBox2->Visible = false;
		one_vacc_name_lab->Visible = false;
		one_vacc_id_lab->Visible = false;
		one_vacc_empty_lab->Visible = true;
	}
}
private: System::Void get_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	not_found_lab->Visible = false;
	groupBox5->Visible = false;

	if (id_del_box->Text != "")
	{
		if (f->Check_User(id_del_box->Text))
		{
			User^ user = f->SearchUser(id_del_box->Text);

			if (user->gender == "Female")
			{
				this->pictureBox3->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-girl-100.png");
			}
			else
			{
				this->pictureBox3->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-standing-man-100.png");
			}
			
			label8->Text = user->fullname;
			label9->Text = user->national_id;
			label10->Text = user->gender;
			label11->Text = user->age;
			label12->Text = user->governorate;

			if (user->vaccinated == "0")
			{
				label13->Text = L"No Dose";
			}
			else if (user->vaccinated == "1")
			{
				label13->Text = L"One Dose";
			}
			else
			{
				label13->Text = L"Two Doses";
			}

			groupBox5->Visible = true;
		}

		else
		{
			not_found_lab->Visible = true;
		}
	}
}
private: System::Void id_del_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	id_del_box->MaxLength = 13;
}
private: System::Void delete_all_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (MessageBox::Show("Are you sure you want to delete all users?", "Delete all users", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		click_graph_count = 0;
		f->user_vector.clear();
		deleted_lap->Visible = true;
	}
}
private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	click_graph_count = 0;
	User^ user = f->SearchUser(label9->Text);
	f->Update_Delete(user, 2);
	user_del_btn_Click(sender, e);

}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	A^ admin = gcnew A();

	admin->name = name_box->Text;
	admin->password = pass_box->Text;
	
	if (male_rad->Checked)
	{
		admin->gender = "Male";
	}
	else
	{
		admin->gender = "Female";
	}

	if (lvl1_rad->Checked)
	{
		admin->lvl = "1";
	}
	else
	{
		admin->lvl = "2";
	}

	if (!f->admin_vector.empty())
	{
		int id = Int32::Parse(f->admin_vector[f->admin_vector.size() - 1]->id);
		id++;
		admin->id = id.ToString();
	}
	else
	{
		admin->id = "1";
	}

	f->admin_vector.push_back(admin);

	add_suc_lab->Visible = true;
	i_lab->Text = "ID : " + admin->id;
}
private: System::Void add_admin_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	add_admin_pan->BringToFront();

	name_box->Clear();
	pass_box->Clear();
	male_rad->Checked = false;
	female_rad->Checked = false;
	lvl1_rad->Checked = false;
	lvl2_rad->Checked = false;
	add_suc_lab->Visible = false;
	i_lab->Text = "";
}

private: System::Void admin_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();
	this->groupBox3->Visible = false;
	this->groupBox2->Visible = false;
	this->label6->Visible = false;
	this->label7->Visible = false;

	// Loop that create the groupbox and labels
	for (auto i = f->admin_vector.begin(); i < f->admin_vector.end(); ++i)
	{
		A^ admin = *i;

		GroupBox^ groupbox = f->Draw_GroupBox(admin);

		this->flowLayoutPanel1->Controls->Add(groupbox);
	}
}
private: System::Void user_rad_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox3->Visible = true;
	this->groupBox2->Visible = true;
	this->label6->Visible = true;
	this->label7->Visible = true;
	Admin_Load(sender, e);
}
private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	login->Show();
	this->Hide();
}

private: System::Void user_del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_user_pan->BringToFront();
	label4->Text = "Delete User";

	deleted_lap->Visible = false;
	id_del_box->Clear();
	groupBox5->Visible = false;
	not_found_lab->Visible = false;
}


private: System::Void admin_del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_admin_pan->BringToFront();
	label4->Text = "Delete Admin";

	del_all_admin_lab->Visible = false;
	admin_id_box->Clear();
	groupBox9->Visible = false;
	label20->Visible = false;
}
private: System::Void del_admin_Click(System::Object^ sender, System::EventArgs^ e) {
		f->Delete_Admin(ad_id_lab->Text);
		admin_del_btn_Click(sender, e);
}
private: System::Void get_admin_Click(System::Object^ sender, System::EventArgs^ e) {
	label20->Visible = false;
	groupBox9->Visible = false;

	if (admin_id_box->Text != "")
	{
		bool found = 0;
		int i;
		
		for (i = 0; i < f->admin_vector.size(); i++)
		{
			if (f->admin_vector[i]->id == admin_id_box->Text)
			{
				found = 1;
				break;
			}
		}

		if (found == 1)
		{
			if (f->admin_vector[i]->gender == "Female")
			{
				this->pictureBox4->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-girl-100.png");
			}
			else
			{
				this->pictureBox4->Image = gcnew Bitmap("C:/Users/pc/Desktop/recDs/icons8-standing-man-100.png");
			}

			ad_name_lab->Text = f->admin_vector[i]->name;
			ad_id_lab->Text = f->admin_vector[i]->id;
			ad_gender_lab->Text = f->admin_vector[i]->gender;
			ad_lvl_lab->Text = "Privilege Level: " + f->admin_vector[i]->lvl;

			groupBox9->Visible = true;
		}

		else
		{
			label20->Visible = true;
		}
	}
}
private: System::Void del_all_admin_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to delete all Admins?", "Delete all Admins", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		f->admin_vector.clear();
		del_all_admin_lab->Visible = true;
	}
}
};
}