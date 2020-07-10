#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "autoClass.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout ("auto.txt", ios_base::trunc);

	Auto* BMW = new Auto ();
	BMW->output();
	delete BMW;

	char ladaType[50]= " truck";
	char ladaBrand[50]= " Lada";
	Auto* Lada = new Auto(ladaType, ladaBrand);
	Lada->output();
	delete Lada;

	char fordType[50] = " a car";
	char fordBrand[50] = " Ford";
	float power = 25.45; 

	int volume = 55;
	int price = 100;
	Auto* Ford = new Auto(fordType, fordBrand, power, volume, price);
	Ford->output();
	delete Ford;

	Auto* cars = new Auto[3];
	for (int i = 0; i < 3; i++) {
		cars[i].input();
		cars[i].foutput();
	}
	fout.close();
}

