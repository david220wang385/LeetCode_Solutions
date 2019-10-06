#include "IsHappyNumber.h"
#include <unordered_map>

using namespace std;

bool isHappyNumber(int n) {
	int num = n;
	int result = 0;
	unordered_map<int, int> prev_vals;

	while (result != 1) {
		
		result = 0;

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
		prev_vals.emplace(result, result);
		num = result;
	}

	// If the while loop finishes that means num is 1, meaning that n is a happy number
	return true;
}