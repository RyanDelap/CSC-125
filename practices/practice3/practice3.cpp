/*==============================================================
COURSE:	CSC 125, Practice 3
PROGRAMMER: Ryan Delap
DESCRIPTION: A program which caluclates
FILES:	practice3.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017
INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practice3.sln	to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include <iostream>

using namespace std;

int main()
{
	unsigned short hours_attempted = 17;
	unsigned short grade_points = 4;
	unsigned short quantity_points = hours_attempted * grade_points;

	cout << "Hours Attempted: " << hours_attempted;
	cout << "\nGrade Poisnt: " << grade_points;
	cout << "\nQuantity Points: " << quantity_points;
	cout << "\n";

}
