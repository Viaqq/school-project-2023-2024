#include "numbers.h"
#include <cmath>

int ConvertCharToInt(const char* number, int size) {
	int res = 0;
	for (int i = 0; i < size; i++) {
		int res_mid = number[i] - 48;
		res += res_mid * pow(10, size - 1 - i);
	}
	return res;

}
