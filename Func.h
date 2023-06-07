#pragma once
#include<cliext/vector>
#include<cliext/queue>
#include"User.h"
#include"AdminClass.h"
#include<fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

ref class F
{
public:

	//user_data_structure
	cliext::vector<User^> user_vector;
	cliext::queue<User^>non_vacc_que;
	cliext::queue<User^>one_vacc_que;

	//admin data_structure
	cliext::vector<A^> admin_vector;


	//Write in file
	//Hossam
	void Write_File()
	{
		StreamWriter^ user_File = gcnew StreamWriter("Files/User.txt",false);

		for (auto i = this->user_vector.begin(); i < this->user_vector.end() ; ++i)
		{
			User^ user = *i;

			user_File->WriteLine(user->fullname);
			user_File->WriteLine(user->national_id);
			user_File->WriteLine(user->password);
			user_File->WriteLine(user->gender);
			user_File->WriteLine(user->governorate);
			user_File->WriteLine(user->age);
			user_File->WriteLine(user->vaccinated);
			user_File->WriteLine(user->linked_national_id);
		}
	
		user_File->Close();
	}

	//Write in admin file
	//Hossam
	void Write_Admin_File()
	{
		StreamWriter^ admin_file = gcnew StreamWriter("Files/Admin.txt", false);

		for (auto i = this->admin_vector.begin(); i < this->admin_vector.end(); ++i)
		{
			A^ admin = *i;

			admin_file->WriteLine(admin->name);
			admin_file->WriteLine(admin->password);
			admin_file->WriteLine(admin->id);
			admin_file->WriteLine(admin->gender);
			admin_file->WriteLine(admin->lvl);
		}

		admin_file->Close();
	}

	/*Function for Delete the user ir update his record and it take three parameters
		First parameter: it take the user record
		Second parameter: it take the operation 1) for update, 2) for delete
		*/
	//Hossam
	void Update_Delete(User^ user, int op)
	{
		//Update operation
		if (op == 1)
		{
			for (int i = 0; i < this->user_vector.size(); ++i)
			{
				if (user->national_id == this->user_vector[i]->national_id)
				{
					this->user_vector[i] = user;
				}
			}
		}


		//Delete Operation
		else if (op == 2)
		{
			for (int i = 0; i < this->user_vector.size(); ++i)
			{
				if (user->national_id == this->user_vector[i]->national_id)
				{
					this->Delete_Linked_User(user);
					for (int j = i; j < this->user_vector.size() - 1; j++)
					{
						this->user_vector[j] = this->user_vector[j + 1];
					}
					this->user_vector.pop_back();
				}
			}
		}
	}

	//Delete Admin from the vector
	//Hossam
	void Delete_Admin(String^ id)
	{
		for (int i = 0; i < this->admin_vector.size(); ++i)
		{
			if (id == this->admin_vector[i]->id)
			{
				for (int j = i; j < this->admin_vector.size() - 1; j++)
				{
					this->admin_vector[j] = this->admin_vector[j + 1];
				}
				this->admin_vector.pop_back();
			}
		}
	}

	//Read Data From the User file
	//Omar
	cliext::vector<User^> Read_File()
	{
		StreamReader^ user_File = gcnew StreamReader("Files/User.txt");
		
		cliext::vector<User^>user_vector;
		while (!user_File->EndOfStream)
		{
			User^ user = gcnew User;
			user->fullname = user_File->ReadLine();
			user->national_id = user_File->ReadLine();
			user->password = user_File->ReadLine();
			user->gender = user_File->ReadLine();
			user->governorate = user_File->ReadLine();
			user->age = user_File->ReadLine();
			user->vaccinated = user_File->ReadLine();
			user->linked_national_id = user_File->ReadLine();

			user_vector.push_back(user);
		}
		user_File->Close();
		return user_vector;
	}

	//Read Admin file
	//Omar
	cliext::vector<A^> Read_Admin_File()
	{
		StreamReader^ admin_file = gcnew StreamReader("Files/Admin.txt");

		cliext::vector<A^>admin_vector;
		while (!admin_file->EndOfStream)
		{
			A^ admin = gcnew A;
			admin->name = admin_file->ReadLine();
			admin->password = admin_file->ReadLine();
			admin->id = admin_file->ReadLine();
			admin->gender = admin_file->ReadLine();
			admin->lvl = admin_file->ReadLine();

			admin_vector.push_back(admin);
		}
		admin_file->Close();
		return admin_vector;
	}

	//Check if the national id valid or not and return a Boolean
	//Omar
	bool Valid_National_ID(String^ n_Id)
	{
		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ us = *i;
			if (us->national_id == n_Id)
			{
				return false;
			}
		}
		return true;
	}


	//Read Non vacc users and put it into queue
	//Ahmed
	cliext::queue<User^> Read_None_Vacc_User()
	{
		cliext::queue<User^>none_vacc_que;

		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ user = *i;

			if (user->vaccinated == "0")
				none_vacc_que.push(user);
		}

		return none_vacc_que;
	}


	//Read vacc one users and put it into queue
	//Ahmed
	cliext::queue<User^> Read_Vacc_One_User()
	{
		cliext::queue<User^>one_vacc_que;

		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ user = *i;

			if (user->vaccinated == "1")
				one_vacc_que.push(user);
		}

		return one_vacc_que;
	}



	// search if the user is exist or not and return the user if he is found
	//Shokry
	User^ SearchUser(String^ na_id)
	{
		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ u = *i;

			if (u->national_id == na_id)
				return u;
		}

	}

	//Search For The linked user to a specific national id and push them into vector and return the vector at the end
	//Shokry
	cliext::vector<User^> Linked_User(User^ user)
	{
		cliext::vector<User^> sons_vector;
		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ u = *i;
			if (u->linked_national_id == user->national_id)
			{
				sons_vector.push_back(u);
			}
		}
		return sons_vector;
	}

	
	//Search for the linked user an unlink them if the father user was deleted
	//Shokry
	void Delete_Linked_User(User^ user)
	{
		cliext::vector<User^>linked_user = Linked_User(user);

		if (!linked_user.empty())
		{
			for (auto i = linked_user.begin(); i < linked_user.end(); ++i)
			{
				User^ u = *i;
				u->linked_national_id = "0";
				Update_Delete(u, 1);
			}
		}
	}

	//check user if exist ot not but return a Boolean value
	//Ayman
	bool Check_User(String^ na_id)
	{
		for (auto i = this->user_vector.begin(); i < this->user_vector.end(); ++i)
		{
			User^ u = *i;

			if (u->national_id == na_id)
				return true;
		}
		return false;
	}
	
	//Draw Groupbox of user and return it
	//Ayman
	GroupBox^ Draw_GroupBox(User^ user)
	{
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
		groupbox->Margin = System::Windows::Forms::Padding(100, 20, 0,100);
		groupbox->Location = System::Drawing::Point(103, 103);
		groupbox->Name = L"groupBox2";
		groupbox->Size = System::Drawing::Size(281, 266);
		groupbox->TabIndex = 0;
		groupbox->TabStop = false;

		return groupbox;
	}

	//Draw Groupbox of admin and return it
	//Ayman
	GroupBox^ Draw_GroupBox(A^ admin)
	{
		//picture
		PictureBox^ picture = gcnew PictureBox();
		if (admin->gender == "Female")
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
		name->Text = admin->name;
		name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		//label id
		Label^ na_id = gcnew Label();
		na_id->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		na_id->Location = System::Drawing::Point(0, 131);
		na_id->Name = L"label12";
		na_id->Size = System::Drawing::Size(281, 25);
		na_id->TabIndex = 1;
		na_id->Text = admin->id;
		na_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		//label gender
		Label^ gender = gcnew Label();
		gender->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		gender->Location = System::Drawing::Point(0, 156);
		gender->Name = L"label13";
		gender->Size = System::Drawing::Size(281, 25);
		gender->TabIndex = 2;
		gender->Text = admin->gender;
		gender->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		//label lvl
		Label^ lvl = gcnew Label();
		lvl->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lvl->Location = System::Drawing::Point(0, 181);
		lvl->Name = L"label14";
		lvl->Size = System::Drawing::Size(281, 25);
		lvl->TabIndex = 3;
		lvl->Text = "Privilege Level: " + admin->lvl;
		lvl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		//Group box
		GroupBox^ groupbox = gcnew GroupBox();
		groupbox->Margin = System::Windows::Forms::Padding(3, 3, 30, 3);
		groupbox->Controls->Add(picture);
		groupbox->Controls->Add(name);
		groupbox->Controls->Add(na_id);
		groupbox->Controls->Add(gender);
		groupbox->Controls->Add(lvl);
		groupbox->Margin = System::Windows::Forms::Padding(100, 20, 0, 100);
		groupbox->Location = System::Drawing::Point(103, 103);
		groupbox->Name = L"groupBox2";
		groupbox->Size = System::Drawing::Size(281,230);
		groupbox->TabIndex = 0;
		groupbox->TabStop = false;

		return groupbox;
	}
};
