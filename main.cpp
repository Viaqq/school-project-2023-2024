#include <iostream>
#include "work_array.h"
#include "sorts.h"

void createEqMas(int* Ar, int* _Ar, int size) {
        for (int i = 0; i < size; i++) {
                _Ar[i] = Ar[i];
        }
}

int main() {
        std::cout << std::endl;

        int Ar[9] = {1, 4, 5, 6, 3, 7, 9, 100, 6};
        int _Ar[9] = {};
        createEqMas(Ar, _Ar, 9);
        int __Ar[9] = {};
        createEqMas(Ar, __Ar, 9);
        int ___Ar[9] = {};
        createEqMas(Ar, ___Ar, 9);
        int ____Ar[9] = {};
        createEqMas(Ar, ____Ar, 9);
        int _____Ar[9] = {};
        createEqMas(Ar, _____Ar, 9);
        int ______Ar[9] = {};
        createEqMas(Ar, ______Ar, 9);

	std::cout << "Selection Sort" << std::endl;
        showEl(Ar, 9);
        selectionSort(Ar, 9);
        showEl(Ar, 9);
        std::cout << std::endl;

        std::cout << "Bubble Sort" << std::endl;
        showEl(_Ar, 9);
        bubbleSort(_Ar, 9);
        showEl(_Ar, 9);
        std::cout << std::endl;

        std::cout << "Insertion Sort" << std::endl;
        showEl(__Ar, 9);
        insertionSort(__Ar, 9);
        showEl(__Ar, 9);
        std::cout << std::endl;

        std::cout << "Quick Sort" << std::endl;
        showEl(___Ar, 9);
        quickSort(___Ar, 9);
        showEl(___Ar, 9);
        std::cout << std::endl;

        std::cout << "Shell Sort" << std::endl;
        showEl(____Ar, 9);
        shellSort(____Ar, 9);
        showEl(____Ar, 9);
        std::cout << std::endl;

	std::cout << "Count Sort" << std::endl;
        showEl(_____Ar, 9);
        //countSort(_____Ar, 9);
        showEl(_____Ar, 9);
        std::cout << std::endl;

        std::cout << "Merge Sort" << std::endl;
        showEl(______Ar, 9);
        //mergeSort(______Ar, 9);
        showEl(______Ar, 9);
        std::cout << std::endl;

        return 0;
}
