#include"Header.h"

int main()
{
	vector<Pilots> PilotsObeject;
	vector<Ticket> TicketObject;
	vector<Stewards> StewardsObject;
	vector<Flight> FlightObject;
	vector<AirPlanes> AirplanesObject;

	while (true)
	{
		int select = mainmenu();
		if (select == 3)
			break;
		else
			MainMenuHandler(PilotsObeject, TicketObject, StewardsObject, FlightObject, AirplanesObject, select);
	}
	return 0;
}