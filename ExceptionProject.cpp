// ExceptionProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Employee {

	std::string name;
	int number;
	std::string hireDate;


public: 

	class InvalidEmployeeNumber {};

	Employee(std::string in, int inTwo, std::string inThree) {

		name = in;
		hireDate = inThree;

		if (inTwo < 0 || inTwo > 9999) {

			throw InvalidEmployeeNumber(); 

		} else{

			number = inTwo;

		}

	}

	void setName(std::string in) {

		name = in;

	} void setNumber(int in) {

		if (in < 0 || in > 9999) {

			throw InvalidEmployeeNumber();

		}
		else {

			number = in;

		}

	

	} void setHireDate(std::string in) {

		hireDate = in;

	} std::string getName() {

		return name;

	} int getNumber() {

		return number;

	} std::string getHireDate() {

		return hireDate;

	}

};

class ProductionWorker : public Employee{

	int shift;
	double hourlyPay;
	std::string dayOrNight;

public:

	class InvalidPayRate{};
	class NegativeHourlyPay {};
	class InvalidShift {};

	ProductionWorker() : Employee("John Smith", 0000, "4/20/69") {

		shift = 1;
		hourlyPay = 0;

	}

	ProductionWorker(int in, double inTwo) : Employee("John Smith", 0000, "4/20/69") {

	
		if (in < 0) {

			throw InvalidPayRate();

		}
		else {

			hourlyPay = in;
		}

		if (shift < 1 || shift > 2) {

			throw InvalidShift();
		}
		else {

			shift = in;
		}

		if (shift == 1) {

			dayOrNight = "Day";
			

		}
		else if(shift == 2) {

			dayOrNight = "Night";
			
		}


	}

	void setShift(int in) {

		if (in < 1 || in > 2) {

			throw InvalidShift();
		}
		else {

			shift = in;
		}

		if (in == 1) {

			dayOrNight = "Day";

		}
		else if (in == 2) {

			dayOrNight = "Night";
		}

	} void setHourlyPay(double in) {


		if (in > 0) {

			hourlyPay = in;

		}
		else {

			throw NegativeHourlyPay();

		}
		

	} int getShift() {

		return shift;

	} double getHourlyPay() {

		return hourlyPay;

	}

};

int main()
{

	ProductionWorker one;

	std::string name;
	std::string date;
	int number;
	int hourlyPay;
	int shift;

	std::cout << "Enter number: " << std::endl;
	std::cin >> number;
	one.setNumber(number);

	std::cout << "Enter hourly pay: " << std::endl;
	std::cin >> hourlyPay;
	one.setHourlyPay(hourlyPay);

	std::cout << "Enter shift: " << std::endl;
	std::cin >> shift;
	one.setShift(shift);

	std::cout << "party people";

}


