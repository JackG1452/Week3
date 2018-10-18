#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Module.h"

class Student {
private:
	std::string Name_;
	std::string BNumber_;
	std::string Course_;
	int YearofStudy_;

	std::vector<Module>ModuleMarks;

	int ModuleOneMark_;
	int ModuleTwoMark_;
	int ModuleThreeMark_;

public:

	Student();
	Student(std::string Name, std::string BNumber, std::string Course, int YearofStudy);

	void SetName(std::string name);
	std::string GetName() const;

	void SetBNumber(std::string BNumber);
	std::string GetBNumber() const;

	void SetCourse(std::string Course);
	std::string GetCourse() const;

	void SetYearofStudy(int YearofStudy);
	int GetYearofStudy() const;

	
	std::string ToString();

	void CalculateClassification() const;

	void AddModule(std::string ModuleTitle, std::string ModuleCode, int CreditPoints, int ModuleMark);

	void UpdateModule(std::string ModuleCode, int ModuleMark);

	void DeleteModule(std::string ModuleCode);
};