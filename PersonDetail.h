#pragma once
#include"Header.h"

using namespace std;

class PersonDetail
{
private:
	string F_name;
	string L_name;
	size_t SSN;
public:
	PersonDetail() : SSN(0) {}

	void setPersonDetail()
	{
		cout << "Name: ";
		cin.ignore();
		getline(cin, F_name);
		cout << "Last Name: ";
		getline(cin, L_name);
		cout << "Social Security Number: ";
		cin >> SSN;
	}

	string getFname()
	{
		return F_name;
	}

	string getLname()
	{
		return L_name;
	}

	size_t getSSN()
	{
		return SSN;
	}
};