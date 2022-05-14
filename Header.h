#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"PersonDetail.h"
#include"Staff.h"
#include"Stewards.h"
#include"Pilots.h"
#include"TravelDetail.h"
#include"Ticket.h"
#include"Flight.h"


void AddPilot(vector<Pilots>& PilotsObject);
void AddTicket(vector<Ticket>& TicketObject, vector<Flight>& FlightObject);
void AddSteward(vector<Stewards>& StewardsObject);
void AddAirPlane(vector<AirPlanes>& AirplanesObject);
void AddFlight(vector<Flight>& FlightObject, vector<AirPlanes>& AirPlanesObject, vector<Stewards>& StewardsObject, vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject);
int AddMenu();
void AddInfoHandler(vector<Pilots>& PilotsObeject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int Choice);
void AddData(vector<Pilots>& PilotsObeject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject);
void ShowFlights(vector<Flight>& FlightObject, vector<Ticket>& TicketObject);
void ShowAirPlanesJobs(vector<Flight>& FlightObjects, vector<AirPlanes>& AirPlanesObject);
void ShowingStaffsJobs(vector<Flight>& FlightObject, vector<Pilots>& PilotsObject, vector<Stewards>& StewardsObject);
void ShowPersonInfo(vector<Ticket>& TicketObject, vector<Pilots>& PilotsObject, vector<Stewards>& StewardsObject);
int ShowMenu();
void ShowInfoHandler(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int choose);
void ShowData(vector<Pilots>& PilotsObject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject);
int mainmenu();
void MainMenuHandler(vector<Pilots>& PilotsObeject, vector<Ticket>& TicketObject, vector<Stewards>& StewardsObject, vector<Flight>& FlightObject, vector<AirPlanes>& AirplanesObject, int& select);
