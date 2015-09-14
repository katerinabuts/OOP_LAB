#include "stdafx.h"
#include "Airline.h"

Airline::Airline() {
	std::cout << " онструктор без параметров\n";
	destination = "";
	flightNumber = 0;
	typeOfAircraft = "";
	hours = 0;
	minutes = 0;
	weekdays = "";

}
Airline::Airline(std::string des, int fn, int toa, int h, int m, int wd) {
	std::cout << " онструктор с параметрами\n";
	destination = des;
	flightNumber = fn;
	setTypeOfAircraft(toa) ;
	hours = h;
	minutes = m;
	setWeekdays(wd);
}
Airline::Airline(const Airline &m) {
	std::cout << "конструктор копировани€\n";
	destination = m.destination;
	flightNumber = m.flightNumber;
	typeOfAircraft = m.typeOfAircraft;
	hours = m.hours;
	minutes = m.minutes;
	weekdays = m.weekdays;
}
Airline::~Airline() {
	std::cout << "диструктор\n";
}
void Airline::setDestination(std::string des) {
	destination = des;
}
std::string Airline::getDestination() {
	return destination;
}
void Airline::setFlightNumber(int n) { flightNumber = n; }
int Airline::getFlightNumber() { return flightNumber; }
void Airline::setHours(int h) {
			if (h<25 && h>=0)
				hours = h; 
}
int Airline::getHours() { return hours; }
void Airline::setMinutes(int m) {
	if (m<60 && m>=0)
	minutes = m;
}
int Airline::getMinutes() { return minutes; }
void Airline::setTypeOfAircraft(int type) { 
	if(type==1) typeOfAircraft="Boeing777";
	else 
		if(type==2) typeOfAircraft="Airbus310";
		else
			if(type==3)  typeOfAircraft="Boeing747";
	//typeOfAircraft = type;
}
std::string Airline::getTypeOfAircraft() { return typeOfAircraft; }
void Airline::setWeekdays(int wd) { 
	if (wd==1) weekdays = "Monday";
	else
		if (wd == 2) weekdays = "Tuesday";
			else
		if (wd == 3) weekdays = "Wednesday";
			else
		if (wd == 4) weekdays = "Thursday";
			else
		if (wd == 5) weekdays = "Friday";
			else
		if (wd == 6) weekdays = "Saturday";
			else
		if (wd == 7) weekdays = "Sunday";
}
std::string Airline::getWeekdays() { return weekdays; }
void Airline::print (){
std::cout << getDestination() << "\t\t\t" << getFlightNumber() << "\t\t" << getHours() << ":" << getMinutes() << "\t" << getTypeOfAircraft() << "\t" << getWeekdays() << "\n";
}
