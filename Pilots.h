#pragma once
#include"Header.h"

class Pilots : public Staff
{
private:
	string PName, PLname;
	size_t PNationalCode, level, PilotPersonalCode;
public:
	Pilots():PNationalCode(0), level(0), PilotPersonalCode(0) {}

	void SetPilotsInfo()
	{
		setStaffInfo();
		while (true)
		{
			cout << "Level (1,2,3): ";
			cin >> level;
			if (level <= 3 && level >= 1)
			{
				break;
			}
			else
				cout << "Invalid Input!\a\n";
		}
	}

	void setPScodePilotSearchJob()
	{
		PilotPersonalCode = getPScode();
	}

	size_t getPilotPScode()
	{
		return PilotPersonalCode;
	}

	void setPScode(size_t Ps)
	{
		setPersonalCode(Ps);
	}

	size_t getlevel()
	{
		return level;
	}

	void getpilot()
	{
		cout << " -> Pilot: " << getPScode() << endl;
	}

	void getPilotsInfo()
	{
		cout << "-> Name:" << getFname() << " -> LastName: " << getLname() << " -> SSN:" << getSSN()
			<< " -> PersonalCode: " << getPScode() << " -> BirthDate: " << getByear() << "/" << getBmonth() << "/" << getBday()
			<< "\n-> Time Of Employment: " << getEyear() << "/" << getEmonth() << "/" << getEday() << " -> level: " << getlevel() << endl;
		cout << "______________________________________________________________________________________________________________________\n";
	}

};