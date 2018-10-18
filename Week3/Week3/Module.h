#pragma once

#include <iostream>
#include <string>

class Module {
private:
	std::string ModuleTitle_;
	std::string ModuleCode_;
	int ModuleCreditPoints_;
	int ModuleMark_;

public:

	Module();
	Module(std::string ModuleTitle, std::string ModuleCode, int ModuleCreditPoints, int ModuleMark);

	void SetModuleTitle(std::string ModuleTitle);
	std::string GetModuleTitle() const;

	void SetModuleCode(std::string ModuleCode);
	std::string GetModuleCode() const;

	void SetModuleCreditPoints(int ModuleCreditPoints);
	int GetModuleCreditPoints() const;

	void SetModuleMark(int ModuleMark);
	int GetModuleMark() const;



	void PrintModule() const;

};