#include <iostream>
#include "work_array.h"
#include "sorts.h"
#include <chrono>

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
	int Sizes[10] = {100, 500, 1000, 2500, 5000, 10000, 50000, 100000, 500000, 1000000};
	ShowAr(Sizes, 10);
	for (int i = 1; i < 10; i++) {
		Sizes[i] = rand() % 1000;
	}
	Sizes[0] = Sizes[8];
	ShowAr(Sizes, 10);
	//SelectionSort(Sizes, 10);
	//InsertionSort(Sizes, 10);
	//BubbleSort(Sizes, 10);
	//QuickSort(Sizes, 10);
	//MergeSort(Sizes, 10);
	//ShellSort(Sizes, 10);
	//CountSort(Sizes, 10);
	ShowAr(Sizes, 10);
        return 0;
}
