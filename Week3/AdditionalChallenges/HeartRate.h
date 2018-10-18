#pragma once
#include <iostream>
#include <string>

class HeartRate {
private:
	std::string firstName_;
	std::string lastName_;
	int Day_;
	int Month_;
	int Year_;
	int Age_;

public:
	

	HeartRate();
	HeartRate(std::string firstName, std::string lastName, int Day, int Month, int Year);

	void SetfirstName(std::string firstName);
	std::string GetfirstName() const;

	void SetlastName(std::string lastName);
	std::string GetlastName() const;

	void SetDay(int Day);
	int GetDay() const;

	void SetMonth(int Month);
	int GetMonth() const;

	void SetYear(int Year);
	int GetYear() const;

	void SetAge(int Age);
	int GetAge() const;

	void PrintHeartRate() const;
	int CalculateAge() const;
	int CalculateMaxiumHeartRate() const;
	void CalculateTargetHeartRate() const;

};