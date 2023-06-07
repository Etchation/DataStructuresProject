#pragma once

using namespace System;

ref class User
{
public:
	String^ fullname;
	String^ national_id;
	String^ password;
	String^ gender;
	String^ age;
	String^ governorate;
	String^ vaccinated;
	String^ linked_national_id = "0"; 
};

