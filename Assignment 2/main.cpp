/*
 * main.cpp
 *
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Programming Assignment #2
 *
 * Name:        OGBONNA WALTER IFEANYI
 * Reg. No:   	47536087HC
 * Department:  COMPUTER SCIENCE
 *
 */

#include <iostream>
#include <string>	          // uses C++ string class
#include <stdlib.h>
#include "HealthProfile.cpp"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Welcome information
    cout << " Welcome to our program to computerize healthcare records.\n";
    cout << " Please fill-in your information as requested. Thank you!\n\n";
    cout << "\n   [Kindly enter day, month and year values using numeric representations only.\n";
    cout << "   e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break]\n";
    
    
    // RECIEVING INPUTS FROM USER
	cout << "\n\tTODAY'S DATE:\n";
	cout << "\t Enter the current day: ";
	cin >> currentDay;
	cout << "\t Enter the current month: ";
	cin >> currentMonth;
	cout << "\t Enter the current year: ";
	cin >> currentYear;
	cout << "\n Enter your first name: ";
	cin >> firstName;
	cout << "\n Enter your last name: ";
	cin >> lastName;
	cout << "\n Enter your gender: ";
	cin >> gender;
	cout << "\n\tDATE OF BIRTH:\n";
	cout << "\t Enter your day of birth: ";
	cin >> day;
	cout << "\t Enter your month of birth: ";
	cin >> month;
	cout << "\t Enter your year of birth: ";
	cin >> year;
	cout << "\n Enter your height (in meters): ";
	cin >> height;
	cout << "\n Enter your weight (in kilograms): ";
 	cin >> weight;

    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
	HealthProfile patient01 (firstName, lastName, gender, month, day, year, weight, height, currentDay, currentMonth, currentYear);
    
    // Print information from the object - by calling getInformation() function
    cout << patient01.getInformation() ;
    
    return EXIT_SUCCESS;
}


