#pragma once
#include <iostream>
#include <string>

class Airline {
	std::string destination;
	int flightNumber;
	std::string typeOfAircraft;
	enum{Boeing777=1,Airbus310,Boeing747};
	int hours;
	int minutes;
	std::string weekdays;
	enum { Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

public:
	Airline();
	Airline(std::string des, int fn, int toa, int h, int m, int wd);
	Airline(const Airline &m);
	~Airline();
	void setDestination(std::string);
	std::string getDestination();
	void setFlightNumber(int);
	int getFlightNumber();
	void setTypeOfAircraft(int);
	std::string getTypeOfAircraft();
	void setHours(int);
	int getHours();
	void setMinutes(int);
	int getMinutes();
	void setWeekdays(int);
	std::string getWeekdays();
	void print();
};