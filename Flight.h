#pragma once
#include"Header.h"

class Flight : public TravelDetail, public Pilots, public Stewards
{
	vector <Stewards> steward;
	vector <Ticket> passenger;
	size_t PilotPScode, StewardPScode;
public:
	Flight() : PilotPScode(0), StewardPScode(0){}

	void setFlightSteward(Stewards& obj)
	{
		steward.push_back(obj);
	}

	vector <Stewards> getFlightSteward()
	{
		return steward;
	}

	void setFlightPassenger(Ticket& Pobj)
	{
		passenger.push_back(Pobj);
	}

	vector <Ticket> getFlightPassenger()
	{
		return passenger;
	}

	void print()
	{
		cout << "-> Flight Serial No: " << getFlightNo() << " -> AirPlane Serial No: " << getAirplaneNo() << " -> Origin: " << getOrigin()
			<< " -> Destination: " << getDestination() << " -> Date of Event: " << getFyear() << "/" << getFmonth() << "/" << getFday()
			<< " -> Time: " << getFhour() << ":" << getFminute()<<" ";
		getpilot();
		cout << "\n\t\t\t\t =========> Stewards <=========" << endl;
		for (size_t i = 0; i < steward.size(); i++)
		{
			cout << "-> (" << i + 1 << ") First Name: " << steward[i].getFname() << " -> Last Name: " << steward[i].getLname() << endl;
		}
	}
};