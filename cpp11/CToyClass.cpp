#include "pch.h"
#include <iostream>
#include "CToyClass.h"

using namespace std;

CToyClass::CToyClass(unsigned int price, unsigned int product_year)
{
	cout << "CToyClass constructor" << endl;
}

CToyClass::~CToyClass()
{
	cout << "CToyClass destructor" << endl;
}

void CToyClass::Show(void)
{
	cout << "Im Toy" << endl;
}

Car::Car(int speed, unsigned int price, unsigned int product_year)
	: CToyClass(price, product_year)
{
	cout << "Car constructor" << endl;
}

Car::~Car()
{
	cout << "Car destructor" << endl;
}

void Car::Show(void)
{
	cout << "Im CAR" << endl;
}

void Car::Move(void)
{
	cout << "Car is moving" << endl;
}

Robot::Robot(int power, unsigned int price, unsigned int product_year)
	: CToyClass(price, product_year)
{
	cout << "Robot constructor" << endl;
}

Robot::~Robot()
{
	cout << "Robot destructor" << endl;
}

void Robot::Show(void)
{
	cout << "Im Robot" << endl;
}

void Robot::Move(void)
{
	cout << "Robot is moving" << endl;
}
