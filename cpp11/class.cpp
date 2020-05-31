#include "pch.h"
#include "CToyClass.h"

void class_test(void)
{
	Car car(100, 200, 1900);
	Robot robot(50000, 300, 1950);
	CToyClass *pToyClass = nullptr;
	pToyClass = &car;
	pToyClass->Show();
	pToyClass = &robot;
	pToyClass->Show();
}