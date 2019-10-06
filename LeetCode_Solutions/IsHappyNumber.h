#pragma once

#include <unordered_map>

using namespace std;

/*
A happy number is a number where the sum of the squares of the digits is eventually equal to 1
Create an algorithm to determine whether a number 'n' is a happy number

i.e.
isHappyNumber(10) is true
1^2 + 0^2 = 1

isHappyNumber(7) is true
7^2 = 49
4^2 + 9^2 = 97
9^2 + 7^2 = 130
1^2 + 3^2 + 0^2 = 10
1^2 + 0^2 = 1
*/
bool isHappyNumber(int n);
