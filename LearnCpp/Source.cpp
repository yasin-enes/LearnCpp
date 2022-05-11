#pragma once
#include <iostream>
float bol(int a, int b)
{
	float c = a / b;
	return c;
}

float bol(int a)
{
	float c = a / 2;
	return c;
}


int topla(int a, int b)
{
	int c;
	c = a + b; //klavyeden girilen 2 sayinin toplamini bulur
	return c;
}

int cikar(int a, int b)
{
	return (a - b); //klavyeden girilen 2 sayinin farkini bulur
}

int doSomething(int a, int b)
{
	// carpimlari ile toplamlarinin farkini bulur
	return (a - b);
}

std::string print()
{
	std::cout << "A\n";
	return "A";
}

void doPrint(int a, int b)
{
	std::cout << "girdiginiz sayilarin toplaminin 2 kati: " << 2 * (a + b) << std::endl;
}


int carp(int a, int b)
{
	int c;
	c = a * b;
	return c;
}