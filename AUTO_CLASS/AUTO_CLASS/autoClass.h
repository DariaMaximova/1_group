#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>

class Auto {
public:

	Auto();
	Auto(char typearg[50], char brandarg[50]);
	Auto(char typearg[50], char brandarg[50], float power, int volume, int price);
	~Auto();
	void input();
	void foutput();
	void count_price();
	void output();
	char *type;
	char *brand;
protected:
	float power;
	int volume;
private:
	void init();
	int price;
};
