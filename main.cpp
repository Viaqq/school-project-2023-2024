#include <iostream>
#include "work_array.h"
#include "sorts.h"
#include "work_files.h"

void CreateEqualAr(int* Ar, int* _Ar, int size) {
        for (int i = 0; i < size; i++) {
                _Ar[i] = Ar[i];
        }
}

int main() {
	int a = 1;
	float b = 12.5;
	WriteRes("123", a, b, true);
	return 0;
}
