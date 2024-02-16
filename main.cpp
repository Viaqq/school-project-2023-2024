#include <iostream>
#include "work_array.h"
#include "sorts.h"

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

        return 0;
}
