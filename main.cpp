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
        return 0;
}
