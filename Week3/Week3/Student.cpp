

#include "Student.h"
Student::Student() {
	std::cout << "Default message" << std::endl;
}

Student::Student(std::string name, std::string BNumber, std::string Course, int YearofStudy) : Name_(name), BNumber_(BNumber), Course_(Course), YearofStudy_(YearofStudy){
	if (YearofStudy < 0 || YearofStudy >5) {
		std::cout << Name_ << " Has Error With Year of Study\n\n" << std::endl;
	}
	else {
		std::cout << "Custom message" << std::endl;
	}
}

void Student::AddModule(std::string ModuleTitle, std::string ModuleCode, int CreditPoints, int ModuleMark) {

	Module NewModule(ModuleTitle, ModuleCode, CreditPoints, ModuleMark);
	ModuleMarks.push_back(NewModule);
}

void Student::DeleteModule(std::string ModuleCode) {

	for (int i = 0; i < ModuleMarks.size(); i++)
	{
		if (ModuleMarks.at(i).GetModuleCode() == ModuleCode) {
			ModuleMarks.clear();
		}
	}
}

void Student::UpdateModule(std::string ModuleCode, int ModuleMark) {

	for (int i = 0; i < ModuleMarks.size(); i++)
	{
		if (ModuleMarks.at(i).GetModuleCode() == ModuleCode) {

			ModuleMarks.at(i).SetModuleMark(ModuleMark);
		}
	}
}





void Student::CalculateClassification() const {

	int total = 0;

	for (int i = 0; i < ModuleMarks.size(); i++)
	{
		total += ModuleMarks.at(i).GetModuleMark();
	}

	double Classification = total / ModuleMarks.size();

	if (Classification >= 70) {
		std::cout << Classification << " Your Degree Classifications is a 1st\n" << std::endl;
	}
	else if (Classification >= 60 and Classification <=69) {
		std::cout << Classification << " Your Degree Classifications is a 2-1\n" << std::endl;
	}
	else if (Classification >= 50 and Classification <= 59) {
		std::cout << Classification << " Your Degree Classifications is a 2nd\n" << std::endl;
	}
	else if (Classification >= 40 and Classification <= 49) {
		std::cout << Classification << " Your Degree Classifications is a 3rd\n" << std::endl;
	}
	else {
		std::cout << Classification << " Fail" << std::endl;
	}
}

std::string Student::ToString()
{
	return Name_ + BNumber_ + Course_ + std::to_string(YearofStudy_);
}


void Student::SetName(std::string name){
	Name_ = name;
}

std::string Student::GetName() const {
	return Name_;
}

void Student::SetBNumber(std::string BNumber) {
	BNumber_ = BNumber;
}

std::string Student::GetBNumber() const {
	return BNumber_;
}

void Student::SetCourse(std::string Course) {
	Course_ = Course;
}
std::string Student::GetCourse() const {
	return Course_;
}

void Student::SetYearofStudy(int YearofStudy) {

	if (YearofStudy > 0 and YearofStudy <= 5) {
		YearofStudy_ = YearofStudy;
	}
	else {
		std::cout << Name_ <<" Has Error With Year of Study" << std::endl;
	}
}
int Student::GetYearofStudy() const {
	return YearofStudy_;
}