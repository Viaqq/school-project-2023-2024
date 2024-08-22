#include <iostream>
#include "work_array.h"
#include "sorts.h"
#include "work_files.h"
#include "processkeys.h"
#include "numbers.h"

void CreateEqualAr(int* Ar, int* _Ar, int size) {
        for (int i = 0; i < size; i++) {
                _Ar[i] = Ar[i];
        }
}

int main() {
	int a = ProcessKeys("HW_1y_14t_1");
	int b = ProcessKeys("HW_1y_14t_5");
	int c = ProcessKeys("HW_1y_16t_1");
	return 0;
}
