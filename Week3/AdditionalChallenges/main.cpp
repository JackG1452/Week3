

#include <iostream>
#include <string>
#include "HeartRate.h"

using namespace std;

int main() {

	HeartRate Jack("Jack", "Gillespie", 2, 1, 1999);

	Jack.PrintHeartRate();

	Jack.SetAge(Jack.CalculateAge());
	std::cout << "Your Maximum Heart Rate is "<<Jack.CalculateMaxiumHeartRate()<<std::endl;
	Jack.CalculateTargetHeartRate();

	/*HeartRate Jack;

	Jack.SetfirstName("Jack");
	Jack.SetlastName("Gillespie");
	Jack.SetDay(2);
	Jack.SetMonth(1);
	Jack.SetYear(1999);


	string firstName = Jack.GetfirstName();
	string lastName = Jack.GetlastName();
	int Day = Jack.GetDay();
	int Month = Jack.GetMonth();
	int Year = Jack.GetYear();*/

	return 0;
}