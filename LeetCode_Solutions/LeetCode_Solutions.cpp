#pragma once

#include <iostream>
#include <vector>
#include "GetMiddleElement.cpp"
#include "IsHappyNumber.h"

using namespace std;

int main()
{
	// Find the middle element in a Linked List with one pass
	vector<int> a;
	a.push_back(1);

	cout << isHappyNumber(1) << endl; // True
	cout << isHappyNumber(3) << endl; // False
	cout << isHappyNumber(5) << endl; // False
	cout << isHappyNumber(7) << endl; // True
	cout << isHappyNumber(10) << endl; // True
}

