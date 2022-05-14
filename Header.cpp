#include"Header.h"

void AddPilot(vector<Pilots>& PilotsObject)
{
	system("cls");
	cout << "\t\t\t\t\t    Add Pilot's Info" << endl;

	Pilots temp;

	temp.SetPilotsInfo();

	PilotsObject.push_back(temp); // Save Pilots Info Into The Related Vector.
	cout << "Saved SuccessFully." << endl;
	system("pause");
	return;
}

void AddTicket(vector<Ticket>& TicketObject, vector<Flight>& FlightObject)
{
	system("cls");
	cout << "\t\t\t\t\t    Add Ticket's Info" << endl;

	Ticket Ttemp;
	Ttemp.setPersonDetail();
	Ttemp.setFlightNoForAddTicket();// Get Flight Serial Number By UserInput.

	bool FOUND = false;
	for (size_t i = 0; i < FlightObject.size(); i++)// Search in Flights If Found then Flight Information will add to Ticket.
	{
		if (FlightObject[i].getFlightNo() == Ttemp.getFlightNo())
		{
			FOUND = true;
			Ttemp.setFlightOriginForAddTicket(FlightObject[i].getOrigin());
			Ttemp.setFlightDestinationForAddTicket(FlightObject[i].getDestination());
			Ttemp.setFYEARForAddTicket(FlightObject[i].getFyear());
			Ttemp.setFMonthForAddTicket(FlightObject[i].getFmonth());
			Ttemp.setFDayForAddTicket(FlightObject[i].getFday());
			Ttemp.setFhourForAddTicket(FlightObject[i].getFhour());
			Ttemp.setFminuteForAddTicket(FlightObject[i].getFminute());
			break;
		}
	}

	if (FOUND != true)
	{
		cout << "No Flight By -> " << Ttemp.getFlightNo() << " <- Serial Number Found!\a\n";
		system("pause");
		return;
	}

	//Ttemp.setAirPlanesInfo();
	TicketObject.push_back(Ttemp); // Save Tickets Info Into The Related Vector.
	cout << "Saved SuccessFully." << endl;
	system("pause");
	return;
}

void AddSteward(vector<Stewards>& StewardsObject)
{
	system("cls");
	cout << "\t\t\t\t\t    Add Ticket's Info" << endl;

	Stewards Stemp;
	Stemp.setStewardsInfo();

	StewardsObject.push_back(Stemp);// Save Stewards Info Into The Related Vector.
	cout << "Saved SuccessFully." << endl;
	system("pause");
	return;
}

void AddAirPlane(vector<AirPlanes>&AirplanesObject)
{
	system("cls");
	cout << "\t\t\t\t\t  Add AirPlane's Info" << endl;

	AirPlanes Atemp;

	Atemp.setAirPlanesInfo();

	AirplanesObject.push_back(Atemp);// Save AirPlane Info Into The Related Vector.
	cout << "Saved SuccessFully." << endl;
	system("pause");
	return;
}

void AddFlight(vector<Flight>& FlightObject, vector<AirPlanes>& AirPlanesObject, vector<Stewards>& StewardsObject, vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject)
{
	system("cls");
	cout << "\t\t\t\t\t    Add Flight Info" << endl;

	Flight Ftemp;
	vector<size_t> StewardsVector;
	

	size_t airplanNo = 0, SeatsNo = 0;
	Ftemp.setTravelDetail();
	bool found = false;
	while (true)
	{
		cout << "AirPlane Serial No:";
		cin >> airplanNo;
		for (size_t i = 0; i < AirPlanesObject.size(); i++)
		{
			if (AirPlanesObject[i].getAirplaneNo() == airplanNo)
			{
				found = true;
				cout << "AirPlane With Serial No -> " << AirPlanesObject[i].getAirplaneNo() << " <- Selected For This Flight." << endl;
				break;
			}
		}
		if (found != true)
		{
			cout << "No AirPlane By Serial Number -> " << airplanNo << " <- Found!\a\n";
		}
		else
			break;
		char ch;
		while (true)
		{
			cout << "Do You Want To Search Again?(y/n): ";
			cin >> ch;
			if (ch == 'y' || ch == 'n')
			{
				if (ch == 'y')
				{
					break;
				}
				else if (ch == 'n')
				{
					return;
				}
			}
			else
				cout << "Invalid Input!\a\n";
		}
	}
	Ftemp.setAirplaneNo(airplanNo);

	size_t temp = 0;
	cout << "-> Registered Stewards: " << endl;
	if (StewardsObject.size() == 0)
	{
		cout << "No Stewards Registered! Please Register Some Stewards.\a\n";
		system("pause");
		return;
	}
	for (size_t i = 0; i < StewardsObject.size(); i++) 
	{
		cout << "[" << i + 1 << "] PersonalCode : " << StewardsObject[i].getPScode() << endl;
	}
	cout << "-> If You Won't ADD AnyMore Press 0 <- " << endl;
	while (true) 
	{
		cout << "-> Enter PersonalCode: ";
		cin >> temp;
		StewardsVector.push_back(temp);
		if (temp == 0) 
		{
			break;
		}
	}

	for (size_t i = 0; i < StewardsObject.size(); i++)
	{
		for (size_t j = 0; j < StewardsVector.size(); j++)
		{
			if (StewardsObject[i].getPScode() == StewardsVector[j]) 
			{
				Ftemp.setFlightSteward(StewardsObject[i]);
			}
		}
	}

	cout << "-> Registered Pilots: " << endl;
	if (PilotsObject.size() == 0)
	{
		cout << "No Pilots Registered For Fly! Please Register Some Pilots.\a\n";
		system("pause");
		return;
	}
	cout << "Hear is List Of Pilots: " << endl;
	for (size_t i = 0; i < PilotsObject.size(); i++)
	{
		cout << i << ") ";
		PilotsObject[i].getPilotsInfo();
	}
	size_t select = 0;
	cout << "Select Pilot: ";
	cin >> select;
	Ftemp.setPScode(PilotsObject[select].getPScode());
	FlightObject.push_back(Ftemp);// Save Flights Info Into The Related Vector.
	cout << "Saved SuccessFully." << endl;
	system("pause");
	return;
}


int AddMenu()
{
	system("cls");
	int a = 0;
	cout << "\t\t\t                Choose Object To Add Data:\n\n";
	cout << "\t\t\t\t         [1]  <======> Add Pilot: " << endl;
	cout << "\t\t\t\t         [2]  <======> Add Ticket: " << endl;
	cout << "\t\t\t\t         [3]  <======> Add Steward: " << endl;
	cout << "\t\t\t\t         [4]  <======> Add Flight: " << endl;
	cout << "\t\t\t\t         [5]  <======> Add AirPlane: " << endl;
	cout << "\t\t\t\t         [6]  <======> Back To Main Menu." << endl;
	cout << "\n\t\t\t\t                   Input:";
	cout << "\n\n\t\t\t\t\t            => ";
	cin >> a;
	return a;
}


void AddInfoHandler(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int Choice)
{
	switch (Choice)
	{
	case 1:AddPilot(PilotsObject);
		break;
	case 2:AddTicket(TicketObject, FlightObject);
		break;
	case 3:AddSteward(StewardsObject);
		break;
	case 4:AddFlight(FlightObject, AirplanesObject, StewardsObject, PilotsObject, TicketObject);
		break;
	case 5:AddAirPlane(AirplanesObject);
		break;
	default:
		cout << "\t\t\t\t\t     Invalid Command!\a\n\n";
		system("pause");
		break;
	}
}



void AddData(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject)
{
	while (true)
	{
		int Choice = AddMenu();
		if (Choice == 6)
		{
			return;
		}
		else
			AddInfoHandler(PilotsObject, TicketObject, StewardsObject, FlightObject, AirplanesObject, Choice);
	}
}


void ShowFlights(vector<Flight>& FlightObject, vector<Ticket>& TicketObject)
{
	system("cls");
	cout << "\t\t\t\t              Flight Detailes:\n";

	if (FlightObject.size() == 0)
	{
		cout << "\t\t\t\t\t   No Flight Registered!\a\n";
		system("pause");
		return;
	}

	Flight temp;

	temp.setFlightDateForShow();

	for (size_t i = 0; i < FlightObject.size(); i++)
	{
		if (temp.getFday() == FlightObject[i].getFday() && temp.getFyear() == FlightObject[i].getFyear() && temp.getFmonth() == FlightObject[i].getFmonth())
		{
			FlightObject[i].print();
			cout << "\n\t\t\t\t =========> Passengers <=========" << endl;
			for (size_t j = 0; j < TicketObject.size(); j++)
			{
				if (FlightObject[i].getFlightNo() == TicketObject[j].getFlightNo())
				{
					cout << "-> First Name: " << TicketObject[j].getFname() << "Last Name: " << TicketObject[j].getLname() << endl;
				}
			}
		}
	}
	system("pause");
	return;
}

void ShowAirPlanesJobs(vector<Flight>& FlightObjects, vector<AirPlanes>& AirPlanesObject)
{
	system("cls");
	cout << "\t\t\t\t           Show AirPlanes Jobs:\n";

	if (AirPlanesObject.size() == 0)
	{
		cout << "\t\t\t\t\t No AirPlane Registered!\a\n";
		system("pause");
		return;
	}

	AirPlanes TempObj;

	TempObj.setAirPlanesNoForSearchingJobs(); // Get AirPlane Serial Number For Showing It's Flights.

	for (size_t i = 0; i < FlightObjects.size(); i++)
	{
		if (FlightObjects[i].getAirplaneNo() == TempObj.getAirplaneNo())
		{
			cout << i << ") ";
			FlightObjects[i].print();
		}
	}
	system("pause");
	return;
}

void ShowingStaffsJobs(vector<Flight>& FlightObject, vector<Pilots>& PilotsObject, vector<Stewards>& StewardsObject)
{
	system("cls");
	cout << "\t\t\t\t              Staffs Jobs:\n";

	size_t searchValue = 0;
	cout << "Enter Personal Code To Find: ";
	cin >> searchValue;

	bool Find = false;
	for (size_t i = 0; i < FlightObject.size(); i++)
	{
		if (FlightObject[i].getPilotPScode() == searchValue)
		{
			Find = true;
			cout << "Pilot: " << searchValue << endl;
			FlightObject[i].print();
		}
		else if (FlightObject[i].getStewardPScode() == searchValue)
		{
			Find = true;
			cout << "Steward " << searchValue << " Flights:" << endl;
			FlightObject[i].print();
		}
	}

	if (Find != true)
	{
		cout << "\t\t\t\tNo Staff By Personal Code -> " << searchValue << " <- Was Found!\a\n";
		system("pause");
		return;
	}
	system("pause");
	return;
}

void ShowPersonInfo(vector<Ticket>& TicketObject, vector<Pilots>& PilotsObject, vector<Stewards>& StewardsObject)
{
	system("cls");
	cout << "\t\t\t\t              Person Info:\n";

	size_t SearchValue = 0;
	cout << "Enter Personal Code To Find: ";
	cin >> SearchValue;

	bool _Find = false;

	for (size_t i = 0; i < TicketObject.size(); i++)
	{
		if (SearchValue == TicketObject[i].getSSN())
		{
			_Find = true;
			cout << "The Desiered Character is Passenger.\n";
			cout << "First Name: " << TicketObject[i].getFname() << " - Last Name: " << TicketObject[i].getLname() << "  - SSN: " << TicketObject[i].getSSN() << endl;
		}
	}

	for (size_t i = 0; i < PilotsObject.size(); i++)
	{
		if (SearchValue == PilotsObject[i].getSSN())
		{
			_Find = true;
			cout << "The Desired Character is Pilot.\n";
			cout << "First Name: " << PilotsObject[i].getFname() << " - Last Name: " << PilotsObject[i].getLname() << "  - SSN: " << PilotsObject[i].getSSN() << endl;
		}
	}

	for (size_t i = 0; i < StewardsObject.size(); i++)
	{
		if (SearchValue == StewardsObject[i].getSSN())
		{
			_Find = true;
			cout << "The Desiered Character is Steward.\n";
			cout << "First Name: " << StewardsObject[i].getFname() << " - Last Name: " << StewardsObject[i].getLname() << "  - SSN: " << StewardsObject[i].getSSN() << endl;
		}
	}

	if (_Find != true)
	{
		cout << "\t\t\t\t       No Body Found By This SSN!\a\n";
		system("pause");
		return;
	}

	system("pause");
	return;
}

int ShowMenu()
{
	system("cls");
	int b = 0;
	cout << "\t\t\t              Choose Option To Review Reports:\n\n";
	cout << "\t\t\t      [1]  <======> View Flights By Date: " << endl;
	cout << "\t\t\t      [2]  <======> View AirPlane's Jobs By Serial: " << endl;
	cout << "\t\t\t      [3]  <======> Show Employee's Jobs By Personal Code: " << endl;
	cout << "\t\t\t      [4]  <======> Search Person's Details By SSN:" << endl;
	cout << "\t\t\t      [5]  <======> Back To Main Menu." << endl;
	cout << "\n\t\t\t\t\t         Input:";
	cout << "\n\n\t\t\t\t\t           => ";
	cin >> b;
	return b;
}


void ShowInfoHandler(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int choose)
{
	switch (choose)
	{
	case 1:ShowFlights(FlightObject, TicketObject);
		break;
	case 2:ShowAirPlanesJobs(FlightObject, AirplanesObject);
		break;
	case 3:ShowingStaffsJobs(FlightObject, PilotsObject, StewardsObject);
		break;
	case 4:ShowPersonInfo(TicketObject, PilotsObject, StewardsObject);
		break;
	default:
		cout << "\t\t\t\t\t     Invalid Command!\a\n\n";
		system("pause");
		break;

	}
}

void ShowData(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject)
{
	while (true)
	{
		int choose = ShowMenu();
		if (choose == 5)
		{
			return;
		}
		else
			ShowInfoHandler(PilotsObject, TicketObject, StewardsObject, FlightObject, AirplanesObject, choose);
	}
}


int mainmenu()
{
	system("cls");
	int x = 0;
	cout << "\t\t\t\t           Choose An Operation:\n\n";
	cout << "\t\t\t\t       [1]  <======> Add Information: " << endl;
	cout << "\t\t\t\t       [2]  <======> Reporting Section: " << endl;
	cout << "\t\t\t\t       [3]  <======> Exit." << endl;

	cout << "\n\n\t\t\t\t                  Input:";
	cout << "\n\n\t\t\t\t\t           => ";
	cin >> x;
	return x;

}

void MainMenuHandler(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int& select)
{
	switch (select)
	{
	case 1:AddData(PilotsObject, TicketObject, StewardsObject, FlightObject, AirplanesObject);
		break;
	case 2:ShowData(PilotsObject, TicketObject, StewardsObject, FlightObject, AirplanesObject);
		break;
	default:
		cout << "\t\t\t\t\t     Invalid Command!\a\n\n";
		system("pause");
		break;
	}
}