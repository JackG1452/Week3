

#include "Module.h"
Module::Module() {
	std::cout << "Default message" << std::endl;
}

Module::Module(std::string ModuleTitle, std::string ModuleCode, int ModuleCreditPoints, int ModuleMark): ModuleTitle_(ModuleTitle), ModuleCode_(ModuleCode), ModuleCreditPoints_(ModuleCreditPoints), ModuleMark_(ModuleMark){

		std::cout << "Custom message" << std::endl;
}


void Module::PrintModule() const
{
	std::cout << ModuleTitle_ << "\n" << ModuleCode_ << "\n" << ModuleCreditPoints_ << "\n" << ModuleMark_ << "\n" << std::endl;
}

void Module::SetModuleTitle(std::string ModuleTitle) {
	ModuleTitle_ = ModuleTitle;
}

std::string Module::GetModuleTitle() const {
	return ModuleTitle_;
}

void Module::SetModuleCode(std::string ModuleCode) {
	ModuleCode_ = ModuleCode;
}

std::string Module::GetModuleCode() const {
	return ModuleCode_;
}

void Module::SetModuleCreditPoints(int ModuleCreditPoints) {
	ModuleCreditPoints_ = ModuleCreditPoints;
}

int Module::GetModuleCreditPoints() const {
	return ModuleCreditPoints_;
}

void Module::SetModuleMark(int ModuleMark) {
	
		ModuleMark_ = ModuleMark;
}
int Module::GetModuleMark() const {
	return ModuleMark_;
}