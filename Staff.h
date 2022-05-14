#pragma once
#include"Header.h"
#include"Date.h"


class Staff : public PersonDetail, public date
{
private:
	size_t PersonalCode, Byear, Bmonth, Bday, Eyear, Emonth, Eday;
public:
	Staff() : PersonalCode(0), Byear(0), Bmonth(0), Bday(0), Eyear(0), Emonth(0), Eday(0) {}

	void setStaffInfo()
	{
		setPersonDetail();
		cout << "Personal Code: ";
		cin >> PersonalCode;
		cout << "Date Of Birth: ";
		getDate();
		Byear = getYear();
		Bmonth = getMonth();
		Bday = getDay();
		cout << "Date Of Employment: ";
		getDate();
		Eyear = getYear();
		Emonth = getMonth();
		Eday = getDay();
	}

	void setPersonalCode(size_t PScode)
	{
		PersonalCode = PScode;
	}

	size_t getPScode()
	{
		return PersonalCode;
	}

	size_t getByear()
	{
		return Byear;
	}

	size_t getBmonth()
	{
		return Bmonth;
	}

	size_t getBday()
	{
		return Bday;
	}

	size_t getEyear()
	{
		return Eyear;
	}

	size_t getEmonth()
	{
		return Emonth;
	}

	size_t getEday()
	{
		return Eday;
	}
};