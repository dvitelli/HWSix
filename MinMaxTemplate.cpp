
#include "pch.h"
#include <iostream>

template<typename T>
T max(const T & l, const T & d) {

	return (l > d ? l : d);
}

template<typename T>
T min(const T & l, const T & d) {

	return (l < d ? l : d);
}

int main()
{
	int one = 4;
	int two = 5;

	double dOne = 5.23;
		double dTw = 457.9;
	
	std::string stringOne = "Dom";
	std::string stringTwo = "Shawn";

	std::cout << "max " << max<int>(one, two) << std::endl;
	std::cout << "min " << min<int>(one, two) << std::endl;

	std::cout << "max " << max<double>(dOne, dTw) << std::endl;
	std::cout << "min " << min<double>(dOne, dTw) << std::endl;
	 

	
}
