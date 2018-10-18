

#include <iostream>
#include <string>
#include "Student.h"
#include "Module.h"

using namespace std;

int main() {

	/*Student Jack;

	Jack.SetName("Jack Gillespie");
	Jack.SetBNumber("B00737690");
	Jack.SetCourse("Computer Games Development");

	Jack.PrintStudent();

	string name = Jack.GetName();
	string BNumber = Jack.GetBNumber();
	string Course = Jack.GetCourse();*/

	/*Student Jack("Jack Gillespie", "B00737690", "Games Dev", 2, 10, 120, 0);
	Jack.PrintStudent();
	

	Module ObjectOrientedProgramming("Object Oriented Programming", "COM326", 65, 84);
	ObjectOrientedProgramming.PrintModule();

	Jack.AddModule("Object Oriented Programming", "COM326", 65, 84);
	Jack.AddModule("Programming", "COM334", 65, 64);
	
	Jack.UpdateModule("COM334", 84);
	Jack.CalculateClassification();
	Jack.DeleteModule("COM326");

	Student John("John Smith", "B00737610", "Games Dev", 2, 30, 50, 0);
	John.PrintStudent();
	John.AddModule("Object Oriented Programming", "COM326", 65, 84);*/


	/*Student Billy("Billy Bragg","B00578985","Music Theory", 3, 07, 92, 147);
	Billy.PrintStudent();
	Billy.CalculateClassification();
	Student Billy;
	Billy.SetName("Billy Bragg");
	Billy.SetBNumber("B00578985");
	Billy.SetCourse("Music Theory");
	Billy.SetYearofStudy(-3);
	Billy.SetModuleOneMark(87);
	Billy.SetModuleTwoMark(92);
	Billy.SetModuleThreeMark(47);
	string name = Billy.GetName();
	string BNumber = Billy.GetBNumber();
	string Course = Billy.GetCourse();
	int YearofStudy = Billy.GetYearofStudy();
	int ModuleOneMark = Billy.GetModuleOneMark();
	int ModuleTwoMark = Billy.GetModuleTwoMark();
	int ModuleThreeMark = Billy.GetModuleThreeMark();*/
	std::vector<Student>Students;

	cout << "\tMenu System\n" << "Press 1 to Add a Student Record\n" << "Press 2 to Update and delete a student record (by student ID)\n" << "Press 3 to Display student details (including all module marks)\n" << "Press 4 to Exit the system\n" << endl;
	
	int input;
	cin >> input;
	while (input !=4) {
		if (input == 1) {

			cout << "Enter Student Name" << endl;
			string StudentName;
			getline(cin, StudentName);
			getline(cin, StudentName);

			cout << "Enter Student ID" << endl;
			string StudentID;
			getline(cin, StudentID);

			cout << "Enter Student Course" << endl;
			string StudentCourse;
			getline(cin, StudentCourse);

			cout << "Enter Student Year of Study" << endl;
			int StudentYear;
			cin >>StudentYear;

			Student NewStudent;

			NewStudent.SetName(StudentName);
			NewStudent.SetBNumber(StudentID);
			NewStudent.SetCourse(StudentCourse);
			NewStudent.SetYearofStudy(StudentYear);

			Students.push_back(NewStudent);
		}
		else if (input == 2) {
			cout << "If you wish to Update Record Press 1\nIf you wish to Delete Press 2" << endl;
			int NumberInput;
			cin >> NumberInput;

			if (NumberInput == 1) {
				cout << "Input Student ID" << endl;
				string StudentID;
				cin >> StudentID;
				//Update Loop
				for (int i = 0; i < Students.size(); i++)
				{
					if (Students.at(i).GetBNumber() == StudentID) {

						cout << "Add a Module" << endl;
						cout << "Enter Module Name\n" << endl;
						string Name;
						getline(cin, Name);
						cout << "Enter Module Code\n" << endl;
						string Code;
						getline(cin, Code);
						cout << "Enter Module Credit Points\n" << endl;
						int Credit;
						cin >> Credit;
						cout << "Enter Module Mark\n" << endl;
						int Mark;
						cin >> Mark;

						Students.at(i).AddModule(Name,Code,Credit,Mark);
					}
				}
			}
			else if (input == 2) {
				cout << "Input Student ID" << endl;
				string StudentID;
				cin >> StudentID;
				//Delete Loop
				for (int i = 0; i < Students.size(); i++)
				{
					if (Students.at(i).GetBNumber() == StudentID) {
						Students.clear();
					}
				}
			}

			
		}
		else if (input == 3) {
			cout << "Input Student ID to display" << endl;
			string StudentID;
			cin >> StudentID;
			for (int i = 0; i < Students.size(); i++) {
				if (Students.at(i).GetBNumber() == StudentID) {
					std::cout<<Students.at(i).ToString();
					
				}
			}
		}
		else {
			cout << "Error Try a number in the range 1-4" << endl;
	
		}
		cin >> input;
	}
	
	

	return 0;
}