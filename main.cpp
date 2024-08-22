#include <iostream>
#include "work_array.h"
#include "sorts.h"
#include <chrono>

void CreateEqualAr(int* Ar, int* _Ar, int size) {
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
		//SelectionSort(Ar, Sizes[i]);
		//InsertionSort(Ar, Sizes[i]);
		//BubbleSort(Ar, Sizes[i]);
		//MergeSort(Ar, Sizes[i]);
		//ShellSort(Ar, Sizes[i]);
		//CountSort(Ar, Sizes[i]);
		auto end_time = std::chrono::steady_clock::now();
		std::cout << "duration time = " << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << " us" << std::endl;
	}
}

int main() {
	return 0;
}
