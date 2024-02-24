#include <iostream>
#include "work_array.h"
#include "sorts.h"
#include <chrono>

int CheckSorts(const int* Ar, int size) {
	int minToMax = 0;
	int maxToMin = 0;
	for (int i = 0; i < size - 1; i++) {
		if (Ar[i] <= Ar[i + 1]) {
			minToMax++;
		}
		if (Ar[i] >= Ar[i + 1]) {
			maxToMin++;
		}
	}
	if (minToMax == size - 1) {
		return 0;
	} else if (maxToMin == size - 1) {
		return 1;
	} else {
		return -1;
	}
}

void CreateEqMas(int* Ar, int* _Ar, int size) {
        for (int i = 0; i < size; i++) {
                _Ar[i] = Ar[i];
        }
}

void TimeTest() {
	int Sizes[10] = {100, 500, 1000, 2500, 5000, 10000, 50000, 100000, 500000, 1000000};
	for (int i = 0; i < 10; i++) {
		int Ar[Sizes[i]] = {};
		for (int l = 0; l < Sizes[i]; l++) {
			Ar[l] = rand() % 1000;
		}
		auto start_time = std::chrono::steady_clock::now();
		QuickSort(Ar, Sizes[i]);
		auto end_time = std::chrono::steady_clock::now();
		std::cout << "duration time = " << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << " us" << std::endl;
	}
}

int main() {
	//TEST ALL FUNCTIONS (WHAT WAS THE MISTAKE IN CPP_13)!!!!!!!!!!!!!!!!!!
	TimeTest();
        return 0;
}
