#include <iostream>

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

//TEMP

int main() {
	int Ar[8] = {2, 2, 1, 5, 5, 1, 4, 3};
	std::cout << "Original function file!!!" << std::endl;
	std::cout << getMinIndexEl(Ar, 8) << "     this is min (must be 2)" << std::endl;
	std::cout << getMaxIndexEl(Ar, 8) << "     this is max (must be 4)" << std::endl;
	showEl(Ar, 8);
	std::cout << "before swapping" << std:: endl;
	int min = getMinIndexEl(Ar, 8);
	swap(&Ar[min], &Ar[6]);
	showEl(Ar, 8);
	std::cout << "after swapping" << std::endl;
	return 0;
}
