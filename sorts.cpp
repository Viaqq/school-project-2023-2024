#include <iostream>

//TEMP (from work_array.cpp)

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

//FUNCTION

int selectionSort(int* Ar, int size) {
        for (int i = 0; i < size; i++) {
		int _Ar[size - i] = {};
		int _i = i;
		for (int l = 0; l < (size - i); l++) {
			_Ar[l] = Ar[_i];
			_i++;
		}
                int min = getMinIndexEl(_Ar, size - i) + i;
                swap(&Ar[i], &Ar[min]);
	}
        return *Ar;
}

//TEMP (main function)

int main() {
	int Ar[9] = {1, 4, 5, 6, 3, 7, 9, 100, 6};
	showEl(Ar, 9);
	std::cout << "before sorting" << std::endl;
	int min = getMinIndexEl(Ar, 9);
	std::cout << min << "	min element index before sorting" << std::endl;
	selectionSort(Ar, 9);
	showEl(Ar, 9);
	std::cout << "after sorting" << std::endl;
	return 0;
}
