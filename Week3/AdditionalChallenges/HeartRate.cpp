

#include "HeartRate.h"
HeartRate::HeartRate() {
	std::cout << "Default message" << std::endl;
}

HeartRate::HeartRate(std::string firstName, std::string lastName, int Day, int Month, int Year) : firstName_(firstName), lastName_(lastName), Day_(Day), Month_(Month), Year_(Year){
		std::cout << "Custom message" << std::endl;
}


void HeartRate::PrintHeartRate() const
{
	std::cout << "First Name: "<< firstName_ << "\n" << "Last Name: " << lastName_ << "\n" << "Day of Birth: " << Day_ << "\n" << "Month of Birth: " << Month_ << "\n" << "Year of Birth: " << Year_ << "\n" << std::endl;
}

int HeartRate::CalculateAge() const
{
	int Age = 2018 - Year_;

	std::cout << "Your Age is " << Age << std::endl;

	return Age;
}

int HeartRate::CalculateMaxiumHeartRate() const
{
	int Max = 220 - Age_;

	/*std::cout << "Your Maximum Heart Rate is " << Max << std::endl;*/

	return Max;
}

void HeartRate::CalculateTargetHeartRate() const
{
	int TargetLow = CalculateMaxiumHeartRate()/2;
	int TargetHigh = (CalculateMaxiumHeartRate() / 100) * 85;

	std::cout << "Your Target Heart Rate Range is " << TargetLow << "-" <<TargetHigh <<std::endl;

}


void HeartRate::SetAge(int Age) {
	Age_ = Age;
}

int HeartRate::GetAge() const {
	return Age_;
}

void HeartRate::SetfirstName(std::string firstName) {
	firstName_ = firstName;
}

std::string HeartRate::GetfirstName() const {
	return firstName_;
}

void HeartRate::SetlastName(std::string lastName) {
	lastName_ = lastName;
}

std::string HeartRate::GetlastName() const {
	return lastName_;
}

void HeartRate::SetDay(int Day) {
	Day_ = Day;
}

int HeartRate::GetDay() const {
	return Day_;
}

void HeartRate::SetMonth(int Month) {
		Month_ = Month;
}
int HeartRate::GetMonth() const {
	return Month_;
}

void HeartRate::SetYear(int Year) {

		Year_ = Year;
}
int HeartRate::GetYear() const {
	return Year_;
}
