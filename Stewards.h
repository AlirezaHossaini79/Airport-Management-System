#pragma once
#include"Header.h"

class Stewards : public Staff
{
	string nam, lnam;
	size_t nationalcode, PersonalSSNsteward;
public:
	Stewards():nam(""), lnam(""), nationalcode(0), PersonalSSNsteward(0) {}

	void setStewardsInfo()
	{
		setStaffInfo();
		nam = getFname();
		lnam = getLname();
		nationalcode = getSSN();
	}

	void setPesonalStewardCode()
	{
		PersonalSSNsteward = getPScode();
	}

	size_t getStewardPScode()
	{
		return PersonalSSNsteward;
	}

	void getStewardsInfo()
	{
		cout << "-> Name:" << getFname() << " -> LastName: " << getLname() << " -> SSN:" << getSSN()
			<< " -> PersonalCode: " << getPScode() << " -> BirthDate: " << getByear() << " / " << getBmonth() << " / " << getBday()
			<< " -> Time Of Employment: " << getEyear() << " / " << getEmonth() << " / " << getEday() << endl;
		cout << "\n_________________________________________________________________________________________________________________________________\n";
	}
};
