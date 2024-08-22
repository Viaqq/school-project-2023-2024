#include "processkeys.h"
#include "numbers.h"
#include <iostream>

int ProcessKeys(const char* key) {
	char SortFunctions[][20] = {"merge", "CheckSorts", "SelectionSort", "BubbleSort", "InsertionSort", "QuickSort", "ShellSort", "CountSort", "MergeSort"};
	char FileFunctions[][20] = {"WriteRes"};
	char ArrayFunctions[][20] = {"GetMin", "GetMax", "Swap", "ShowAr"};
	char NumberFunctions[][20] = {"ConvertCharToInt"};
	int hw_num = ConvertCharToInt(&key[6], 2);
	int func_num = ConvertCharToInt(&key[10], 1);
	if (hw_num == 14) {
		std::cout << SortFunctions[func_num] << std::endl;
	} else if (hw_num == 15) {
		std::cout << FileFunctions[func_num] << std::endl;
	} else if (hw_num == 16) {
		std::cout << ArrayFunctions[func_num] << std::endl;
	} else if (hw_num == 17) {
		std::cout << ArrayFunctions[func_num] << std::endl;
	}
	return hw_num;

}
