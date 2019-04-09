// PrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

void printPrimeNumbers(int &);

int main()
{

	int input;
	int start = 2;

    std::cout << "Enter an integer: "; 
	std::cin >> input;


	std::vector<int> primeNumbers;


	for (int i = 0; i < input - 1; i++) {

		auto it = primeNumbers.begin() + i; //+ 1
		primeNumbers.insert(it, start + i);

	}
	
	for_each(primeNumbers.begin(), primeNumbers.end(), printPrimeNumbers);


}  

void printPrimeNumbers(int &n) {

	if ((n % 2) != 0) {

		if((n % 3) != 0 || n == 3){

			if ((n % 5) != 0 || n == 5) {

				if ((n % 7) != 0 || n == 7) {

					std::cout << n << " ";
				}


			}

		
		}

	}
}

