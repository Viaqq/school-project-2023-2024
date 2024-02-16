#include <iostream>
#include "work_array.h"

int getMinIndexEl(int* Ar, int size) {
	int min = 0;
	for (int i = 0; i < size; i++) {
		if (Ar[min] > Ar[i]) {
			min = i;
		}
	}
	return min;
}

int getMaxIndexEl(int* Ar, int size) {
	int max = 0;
	for (int i; i < size; i++) {
		if (Ar[max] < Ar[i]) {
			max = i;
		}
	}
	return max;
}

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void showEl(int* Ar, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << Ar[i];
		if (i < (size - 1)) {
			std::cout << " ";
		} else {
			std::cout << std::endl;
		}
	}
}
