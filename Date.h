#pragma once
#include"Header.h"

class date
{
private:
	size_t Year;
	size_t Month;
	size_t Day;
public:
	date():Year(0), Month(0), Day(0){}

	void getDate()
	{
		while (true)
		{
			cout << "Year: ";
			cin >> Year;
			if (Year > 2021)
			{
				cout << "Invalid Input!\a\n";
			}
			else
				break;
		}
		while (true)
		{
			cout << "Month: ";
			cin >> Month;
			if (Month > 12 || Month < 1)
			{
				cout << "Invalid Input!\a\n";
			}
			else 
				break;
		}
		while (true)
		{
			cout << "Day: ";
			cin >> Day;
			if (Day > 31 || Day < 1)
			{
				cout << "Invalid Input!\a\n";
			}
			else
				break;
		}
	}

	size_t getYear()
	{
		return Year;
	}

	size_t getDay()
	{
		return Day;
	}

	size_t getMonth()
	{
		return Month;
	}
};