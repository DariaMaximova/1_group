#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "autoClass.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include < string.h >

using namespace std;

Auto::Auto() {

	init();
	cout << " Call 1st constructor\n";
	strcpy(type, "-");
	strcpy(brand, "-");
	power = 0;
	volume = 0;
	price = 0;
}

Auto::Auto(char typearg[50], char brandarg[50]) {
	init();
	cout << " Call 2nd constructor\n";
	strcpy(type, typearg);
	strcpy(brand, brandarg);
	power = 0;
	volume = 0;
	price = 0;
}

Auto::Auto(char typearg[50], char brandarg[50], float power, int volume, int price) {
	init();
	cout << " Call 3d constructor\n";
	strcpy(type, typearg);
	strcpy(brand, brandarg);
	this->power = power;
	this->volume = volume;
	this->price = price;
}
Auto::~Auto()
{
	cout << " Memory has been cleaned. Good bye." << endl;
	delete type;
	delete brand;
	power = 0;
	volume = 0;
	price = 0;
}

void Auto::input() {
	cout << " Enter type: " << endl;
	cin >> type;
	cout << " Enter brand: " << endl;
	cin >> brand;
	cout << " Enter power: " << endl;
	cin >> power;
	cout << " Enter volume: " << endl;
	cin >> volume;
	count_price();
}

void Auto::foutput() {
	ofstream fout("auto.txt", ios_base::app);
	cout << endl << " Type is : " << type << endl;
	fout << endl << " Type is : " << type << endl;
	cout << " Brand is : " << brand << endl;
	fout << " Brand is : " << brand << endl;
	cout << " Power is : " << power << endl;
	fout << " Power is : " << power << endl;
	cout << " Volume is : " << volume << endl;
	fout << " Volume is : " << volume << endl;

	cout << " Price is : " << price << endl;
	fout << " Price is : " << price << endl;
}

void Auto::count_price() {
	int bmw = 160;
	int lada = 100;
	int lexus = 500;
	int another = 700;

	int car = 50000;
	int truck = 100000;
	int any = 300000;

	 if (strcmp(brand, "bmw") == 0) {
		 price = bmw * power * volume;
	}
	 else if (strcmp(brand, "lada") == 0) {
		 price = lada * power * volume;
	 }
	 else if (strcmp(brand, "lexus") == 0) {
		 price = lexus * power * volume;
	 }
	 else{
		 price = another * power * volume;
	 }

	 if (strcmp(type, "car") == 0) {
		 price += car;
	 }
	 else if (strcmp(type, "truck")==0) {
		 price += truck;
	 }
	 else {
		 price += any;
	 }
}


void Auto::output() {
	cout << endl << " Type is : " << type << endl;
	cout << " Brand is : " << brand << endl;
	cout << " Power is : " << power << endl;
	cout << " Volume is : " << volume << endl;
	cout << " Price is : " << price << endl << endl;
}

	
void Auto::init() {
	type = new char[50];
	brand = new char[50];
}

