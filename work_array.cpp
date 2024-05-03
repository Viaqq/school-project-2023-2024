#include <iostream>

int GetMin(const int* Ar, int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		while (Ar[left] >= Ar[right] && left < right) {
			left++;
		}
		while (Ar[right] > Ar[left] && left < right) {
			right--;
		}
	}
	return left;
}

int GetMax(const int* Ar, int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		while (Ar[left] <= Ar[right] && left < right) {
			left++;
		}
		while (Ar[right] < Ar[left] && left < right) {
			right--;
		}
	}
	return left;
}

void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void ShowAr(const int* Ar, int size, char del = ' ') {
	std::cout << Ar[0];
	for (int i = 1; i < size; i++) {
		std::cout << del << Ar[i];
	}
	std::cout << std::endl;
}
