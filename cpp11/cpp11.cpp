// cpp11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream> //cout, 
#include <array>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include "CToyClass.h"

using namespace std;

void disp(const int& n)
{
	cout << n << endl;
}

int main()
{
    cout << "range based for\n"; 
	int c_array[5] = { 1, 2, 3, 4, 5 };
	for (const auto& i : c_array) {
		cout << i << endl;
	}

	cout << "for_each & array\n";
	std::array<int, 5> NumberArray = { 1, 2, 3, 4, 5 };
	std::for_each(NumberArray.begin(), NumberArray.end(), disp);
	int *iptr = NumberArray.data();
	cout << *(iptr + 1) << "," << *(iptr + 2) << endl;

	cout << "for_each & struct\n";
	struct Sum {
		Sum() { sum = 0; }
		void operator()(int n) { sum += n; }
		int sum;
	};
	Sum s = std::for_each(NumberArray.begin(), NumberArray.end(), Sum());
	cout << s.sum << endl;

	std::list<int> NumberList = { 1, 2, 3, 4, 5 };
	std::vector<int> NumberVector = { 1, 2, 3, 4, 5 };
	std::deque<int> NumberDeque = { 1, 2, 3, 4, 5 };

	Car car(100, 200, 1900);
	Robot robot(50000, 300, 1950);
	CToyClass *pToyClass = nullptr;
	pToyClass = &car;
	pToyClass->Show();
	pToyClass = &robot;
	pToyClass->Show();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
