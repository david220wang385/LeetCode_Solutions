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

#include <unordered_map>

using namespace std;

bool isHappyNumber(int n) {
	int num = n;
	int result = 0;
	unordered_map<int, int> prev_vals;

	while (result != 1) {

		// Find the sum of the squares of the digits
		while (num > 0) {
			result += (int)pow((num % 10), 2);
			num /= 10;
		}

		// https://stackoverflow.com/questions/3136520/determine-if-map-contains-a-value-for-a-key
		// If the result is in the hashmap, then the result has already been repeated before
		auto it = prev_vals.find(result);
		if (it != prev_vals.end()) {
			return false;
		}

		// Otherwise the result hasn't been repeated yet, chance that n is a still a happy number
		prev_vals.emplace(result);
		num = result;
		result = 0;
	}

	// If the while loop finishes that means num is 1, meaning that n is a happy number
	return true;
}