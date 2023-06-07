#pragma once
#include"Func.h"
#include"User.h"
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
	public ref class Admin2 : public System::Windows::Forms::Form
	{
		F^ f;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ high_age_rad;
	private: System::Windows::Forms::RadioButton^ age_rad;
	private: System::Windows::Forms::Label^ admin_name;
	private: System::Windows::Forms::Button^ logout_btn;
	private: System::Windows::Forms::Button^ exit_btn;

		   A^ admin;
		   Form^ login;
	public:
		Admin2(F^ fu,A^a,Form^l)
		{
			InitializeComponent();
			admin = a;
			f = fu;
			login = l;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Panel^ records_pan;

	private: System::Windows::Forms::Panel^ graphs_pan;







	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label3;














	private: System::Windows::Forms::Panel^ panel8;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ none_rad;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ twice_rad;

	private: System::Windows::Forms::RadioButton^ once_rad;
	private: System::Windows::Forms::RadioButton^ all_rad;








	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
















	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;










private: System::Windows::Forms::Panel^ menu_pan;

private: System::Windows::Forms::Button^ Graphs;


private: System::Windows::Forms::Button^ rec_btn;



























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin2::typeid));
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
			this->records_pan = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
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
			this->graphs_pan = (gcnew System::Windows::Forms::Panel());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menu_pan = (gcnew System::Windows::Forms::Panel());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->admin_name = (gcnew System::Windows::Forms::Label());
			this->Graphs = (gcnew System::Windows::Forms::Button());
			this->rec_btn = (gcnew System::Windows::Forms::Button());
			this->records_pan->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->graphs_pan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel4->SuspendLayout();
			this->menu_pan->SuspendLayout();
			this->SuspendLayout();
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->high_age_rad);
			this->groupBox3->Controls->Add(this->age_rad);
			this->groupBox3->Location = System::Drawing::Point(4, 475);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(147, 140);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			// 
			// high_age_rad
			// 
			this->high_age_rad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->high_age_rad->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->high_age_rad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"high_age_rad.Image")));
			this->high_age_rad->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->high_age_rad->Location = System::Drawing::Point(3, 82);
			this->high_age_rad->Name = L"high_age_rad";
			this->high_age_rad->Size = System::Drawing::Size(85, 38);
			this->high_age_rad->TabIndex = 8;
			this->high_age_rad->TabStop = true;
			this->high_age_rad->Text = L"Age";
			this->high_age_rad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->high_age_rad->UseVisualStyleBackColor = true;
			this->high_age_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::high_age_rad_CheckedChanged);
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
			this->age_rad->TabIndex = 7;
			this->age_rad->TabStop = true;
			this->age_rad->Text = L"Age";
			this->age_rad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->age_rad->UseVisualStyleBackColor = true;
			this->age_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::age_rad_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->all_rad);
			this->groupBox2->Controls->Add(this->twice_rad);
			this->groupBox2->Controls->Add(this->once_rad);
			this->groupBox2->Controls->Add(this->none_rad);
			this->groupBox2->Location = System::Drawing::Point(4, 194);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(145, 179);
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
			this->all_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::all_rad_CheckedChanged);
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
			this->twice_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::twice_rad_CheckedChanged);
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
			this->once_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::once_rad_CheckedChanged);
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
			this->none_rad->CheckedChanged += gcnew System::EventHandler(this, &Admin2::none_rad_CheckedChanged);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-2, 433);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 37);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Sorting :";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-2, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 37);
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
			this->label3->Location = System::Drawing::Point(0, -3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1568, 100);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Records";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// menu_pan
			// 
			this->menu_pan->BackColor = System::Drawing::Color::Transparent;
			this->menu_pan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menu_pan.BackgroundImage")));
			this->menu_pan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menu_pan->Controls->Add(this->exit_btn);
			this->menu_pan->Controls->Add(this->logout_btn);
			this->menu_pan->Controls->Add(this->admin_name);
			this->menu_pan->Controls->Add(this->Graphs);
			this->menu_pan->Controls->Add(this->rec_btn);
			this->menu_pan->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu_pan->Location = System::Drawing::Point(0, 0);
			this->menu_pan->Margin = System::Windows::Forms::Padding(2);
			this->menu_pan->Name = L"menu_pan";
			this->menu_pan->Size = System::Drawing::Size(352, 1080);
			this->menu_pan->TabIndex = 6;
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
			this->exit_btn->Location = System::Drawing::Point(157, 1001);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(36, 35);
			this->exit_btn->TabIndex = 9;
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Admin2::exit_btn_Click);
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
			this->logout_btn->Location = System::Drawing::Point(104, 914);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(147, 60);
			this->logout_btn->TabIndex = 8;
			this->logout_btn->Text = L"LogOut";
			this->logout_btn->UseVisualStyleBackColor = false;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Admin2::logout_btn_Click);
			// 
			// admin_name
			// 
			this->admin_name->BackColor = System::Drawing::Color::Transparent;
			this->admin_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_name->Location = System::Drawing::Point(0, 0);
			this->admin_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->admin_name->Name = L"admin_name";
			this->admin_name->Size = System::Drawing::Size(352, 214);
			this->admin_name->TabIndex = 6;
			this->admin_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->Graphs->Location = System::Drawing::Point(26, 600);
			this->Graphs->Margin = System::Windows::Forms::Padding(2);
			this->Graphs->Name = L"Graphs";
			this->Graphs->Size = System::Drawing::Size(302, 102);
			this->Graphs->TabIndex = 3;
			this->Graphs->Text = L"Graphs";
			this->Graphs->UseVisualStyleBackColor = true;
			this->Graphs->Click += gcnew System::EventHandler(this, &Admin2::Graphs_Click);
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
			this->rec_btn->Location = System::Drawing::Point(26, 300);
			this->rec_btn->Margin = System::Windows::Forms::Padding(2);
			this->rec_btn->Name = L"rec_btn";
			this->rec_btn->Size = System::Drawing::Size(302, 102);
			this->rec_btn->TabIndex = 1;
			this->rec_btn->Text = L"Records";
			this->rec_btn->UseVisualStyleBackColor = true;
			this->rec_btn->Click += gcnew System::EventHandler(this, &Admin2::rec_btn_Click);
			// 
			// Admin2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1920, 1080);
			this->Controls->Add(this->records_pan);
			this->Controls->Add(this->graphs_pan);
			this->Controls->Add(this->menu_pan);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin2::Admin_Load);
			this->records_pan->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->graphs_pan->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->menu_pan->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//for handeling chart update
		int click_graph_count;

		//Load Page
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {

		admin_name->Text = "Hi, " + admin->name;
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
		if (click_graph_count == 0)
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
		double count_user = 0;
		double count_male = 0;
		double count_female = 0;
		double count_vacc_none = 0;
		double count_vacc_one = 0;
		double count_vacc_two = 0;

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

			if (male_prs != 0)
			{
				chart2->Series["Male"]->Label = " " + male_prs + "%";
			}
			chart2->Series["Female"]->Points->AddXY("", female_prs);

			if (female_prs != 0)
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

		   /*if we click on record btn it will bring the record panel to front and
		   calling the adminload func again to make the records group box*/
	private: System::Void rec_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin_Load(sender, e);
		records_pan->BringToFront();
	}
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		f->Write_File();
		f->Write_Admin_File();
		Application::Exit();
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

		else if (age_rad->Checked)
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
private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	login->Show();
	this->Hide();
}
};
}