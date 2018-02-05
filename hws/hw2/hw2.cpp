/*
Programmer: Ryan Delap
Assignment: Homework 2
Date: Feburary 5th, 2018
*/

#include <iostream>
using namespace std;

int main() {
	//Transfer data
	float transfer_hours_attempted = 52;
	float transfer_quality_points = 182;
	float transfer_gpa = transfer_quality_points / transfer_hours_attempted;

	//MSU Data
	float msu_hours_attempted = 25;
	float msu_quality_points = 93;
	float msu_gpa = (float) msu_quality_points / (float) msu_hours_attempted;

	//Calculate total GPA between colleges.
	float total_gpa = (transfer_quality_points + msu_quality_points) / (msu_hours_attempted + transfer_hours_attempted);

	//Print results
	cout << "\n-----------------------------\n";

	cout << "Transfer Hours Attempted: " << transfer_hours_attempted;
	cout << "\nTransfer Quality Points: " << transfer_quality_points;
	cout << "\nTransfer GPA: " << transfer_gpa;

	cout << "\n\nMSU Hours Attempted: " << msu_hours_attempted;
	cout << "\nMSU Quality Points: " << msu_quality_points;
	cout << "\nMSU GPA: " << transfer_gpa;
		
	cout << "\n\n";
	cout << "Total GPA: " << total_gpa;

	cout << "\n-----------------------------\n";

}