#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "autoClass.h"
#include <iostream>


Auto::Auto() {

	init();
	std::cout << " Call 1st constructor\n";
	strcpy(type, "-");
	strcpy(brand, "-");
	power = 0;
	volume = 0;
	price = 0;
}

Auto::Auto(char typearg[50], char brandarg[50]) {
	init();
	std::cout << " Call 2nd constructor\n";
	strcpy(type, typearg);
	strcpy(brand, brandarg);
	power = 0;
	volume = 0;
	price = 0;
}

Auto::Auto(char typearg[50], char brandarg[50], float power, int volume, int price) {
	init();
	std::cout << " Call 3d constructor\n";
	strcpy(type, typearg);
	strcpy(brand, brandarg);
	this->power = power;
	this->volume = volume;
	this->price = price;
}
Auto::~Auto()
{
	std::cout << " Memory has been cleaned. Good bye." << std::endl;
	delete type;
	delete brand;
	power = 0;
	volume = 0;
	price = 0;
}

void Auto::input() {
	std::cout << " Enter type: " << std::endl;
	std::cin >> type;
	std::cout << " Enter brand: " << std::endl;
	std::cin >> brand;
	std::cout << " Enter power: " << std::endl;
	std::cin >> power;
	std::cout << " Enter volume: " << std::endl;
	std::cin >> volume;
	std::cout << " Enter price: " << std::endl;
	std::cin >> price;
}

void Auto::output() {
	std::cout << std::endl << " Type is : " << type << std::endl;
	std::cout << " Brand is : " << brand << std::endl;
	std::cout << " Power is : " << power << std::endl;
	std::cout << " Volume is : " << volume << std::endl;
	std::cout << " Price is : " << price << std::endl << std::endl;
}

	
void Auto::init() {
	type = new char[50];
	brand = new char[50];
}
