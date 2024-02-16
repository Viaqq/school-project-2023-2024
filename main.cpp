#include <iostream>
#include "work_array.h"
#include "sorts.h"

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

int main() {
        std::cout << std::endl;

        int Ar[9] = {1, 4, 5, 6, 3, 7, 9, 100, 6};
        int _Ar[9] = {};
        CreateEqMas(Ar, _Ar, 9);
        int __Ar[9] = {};
        CreateEqMas(Ar, __Ar, 9);
        int ___Ar[9] = {};
        CreateEqMas(Ar, ___Ar, 9);
        int ____Ar[9] = {};
        CreateEqMas(Ar, ____Ar, 9);
        int _____Ar[9] = {};
        CreateEqMas(Ar, _____Ar, 9);
        int ______Ar[9] = {};
        CreateEqMas(Ar, ______Ar, 9);

	std::cout << "Selection Sort" << std::endl;
        ShowAr(Ar, 9);
        SelectionSort(Ar, 9);
        ShowAr(Ar, 9);
        std::cout << std::endl;

        std::cout << "Bubble Sort" << std::endl;
        ShowAr(_Ar, 9);
        BubbleSort(_Ar, 9);
        ShowAr(_Ar, 9);
        std::cout << std::endl;

        std::cout << "Insertion Sort" << std::endl;
        ShowAr(__Ar, 9);
        InsertionSort(__Ar, 9);
        ShowAr(__Ar, 9);
        std::cout << std::endl;

        std::cout << "Quick Sort" << std::endl;
        ShowAr(___Ar, 9);
        QuickSort(___Ar, 9);
        ShowAr(___Ar, 9);
        std::cout << std::endl;

        std::cout << "Shell Sort" << std::endl;
        ShowAr(____Ar, 9);
        ShellSort(____Ar, 9);
        ShowAr(____Ar, 9);
        std::cout << std::endl;

	std::cout << "Count Sort" << std::endl;
        ShowAr(_____Ar, 9);
        //CountSort(_____Ar, 9);
        ShowAr(_____Ar, 9);
        std::cout << std::endl;

        std::cout << "Merge Sort" << std::endl;
        ShowAr(______Ar, 9);
        //MergeSort(______Ar, 9);
        ShowAr(______Ar, 9);
        std::cout << std::endl;

	std::cout << "Check Sorts" << std::endl;
	int Test0[4] = {4, 4, 4, 4};
	int Test1[5] = {1, 2, 2, 3, 80};
	int Test2[6] = {896, 67, 9, 6, 3, 3};
	int Test3[8] = {1, 1, 4, 4, 789, 789, 2890, 56785};
	int Test4[8] = {456, 678, 34, 3, 2, 1};
	int Test5[0] = {};
	ShowAr(Test0, 4);
	std::cout << "Must return 0" << std::endl;
	ShowAr(Test1, 5);
	std::cout << "Must return 0" << std::endl;
	ShowAr(Test2, 6);
	std::cout << "Must return 1" << std::endl;
	ShowAr(Test3, 8);
	std::cout << "Must return 0" << std::endl;
	ShowAr(Test4, 8);
	std::cout << "Must return -1" << std::endl;
	ShowAr(Test5, 0);
	std::cout << "Must return 0" << std::endl;	
	int t0 = CheckSorts(Test0, 4);
	int t1 = CheckSorts(Test1, 5);
	int t2 = CheckSorts(Test2, 6);
	int t3 = CheckSorts(Test3, 8);
	int t4 = CheckSorts(Test4, 8);
	int t5 = CheckSorts(Test5, 0);
	std::cout << t0 << " " << t1 << " " << t2 << " " << t3 << " " << t4 << " " << t5 << std::endl;
        return 0;
}
