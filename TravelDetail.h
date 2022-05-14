#pragma once
#include"Header.h"
#include"AirPlanes.h"


class TravelDetail : public date, public AirPlanes
{
	string Origin, Destination;
	size_t Fyear, Fmonth, Fday, Fhour, Fminute, FlightNo;
public:
	TravelDetail() :FlightNo(0), Origin(""), Destination(""), Fyear(0), Fmonth(0), Fday(0), Fhour(0), Fminute(0) {}
	void setTravelDetail()
	{
		cout << "Flight Serial No:";
		cin >> FlightNo;
		cout << "Origin: ";
		cin.ignore();
		getline(cin, Origin);
		cout << "Destination: ";
		getline(cin, Destination);
		cout << "TravelDate: ";
		getDate();
		Fyear = getYear();
		Fmonth = getMonth();
		Fday = getDay();
		while (true)
		{
			cout << "Hour: ";
			cin >> Fhour;
			if (Fhour <= 24 && Fhour >= 00)
			{
				break;
			}
			else
				cout << "Invalid Input!\a\n";
		}
		while (true)
		{
			cout << "Minute: ";
			cin >> Fminute;
			if (Fminute <= 60 && Fminute >= 00)
			{
				break;
			}
			else
				cout << "Invalid Input!\a\n";
		}
	}

	void setFlightNoForAddTicket()
	{
		cout << "Flight Serial No:";
		cin >> FlightNo;
	}

	void setFlightOriginForAddTicket(string OrigiN)
	{
		Origin = OrigiN;
	}

	void setFlightDestinationForAddTicket(string Destinate)
	{
		Destination = Destinate;
	}

	void setFYEARForAddTicket(size_t fy)
	{
		Fyear = fy;
	}

	void setFMonthForAddTicket(size_t fm)
	{
		Fmonth = fm;
	}

	void setFDayForAddTicket(size_t fd)
	{
		Fday = fd;
	}

	void setFhourForAddTicket(size_t fh)
	{
		Fhour = fh;
	}

	void setFminuteForAddTicket(size_t fmi)
	{
		Fminute = fmi;
	}

	void setFlightDateForShow()
	{
		cout << "TravelDate: ";
		getDate();
		Fyear = getYear();
		Fmonth = getMonth();
		Fday = getDay();
		while (true)
		{
			cout << "Hour: ";
			cin >> Fhour;
			if (Fhour <= 24 && Fhour >= 00)
			{
				break;
			}
			else
				cout << "Invalid Input!\a\n";
		}
		while (true)
		{
			cout << "Minute: ";
			cin >> Fminute;
			if (Fminute <= 60 && Fminute >= 00)
			{
				break;
			}
			else
				cout << "Invalid Input!\a\n";
		}
	}


	size_t getFlightNo()
	{
		return FlightNo;
	}

	string getOrigin()
	{
		return Origin;
	}

	string getDestination()
	{
		return Destination;
	}

	size_t getFyear()
	{
		return Fyear;
	}

	size_t getFmonth()
	{
		return Fmonth;
	}

	size_t getFday()
	{
		return Fday;
	}

	size_t getFhour()
	{
		return Fhour;
	}

	size_t getFminute()
	{
		return Fminute;
	}
};