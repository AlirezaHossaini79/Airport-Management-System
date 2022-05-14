#pragma once
#include"Header.h"

class AirPlanes
{
	size_t NumOfSeats, AirPlaneNo;
public:
	AirPlanes() : NumOfSeats(0), AirPlaneNo(0) {}
	void setAirPlanesInfo()
	{
		cout << "AirPlane Serial No:";
		cin >> AirPlaneNo;
		cout << "Number Of Seats: ";
		cin >> NumOfSeats;
	}

	void setAirPlanesNoForSearchingJobs()
	{
		cout << "AirPlane Serial No:";
		cin >> AirPlaneNo;
	}

	void setAirplaneNo(size_t No)
	{
		AirPlaneNo = No;
	}

	size_t getAirplaneNo()
	{
		return AirPlaneNo;
	}

	void setNumOfSeats(size_t SeatsNo)
	{
		NumOfSeats = SeatsNo;
	}

	size_t getNumOfSeats()
	{
		return NumOfSeats;
	}

};