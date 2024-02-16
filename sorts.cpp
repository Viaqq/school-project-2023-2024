#include "work_array.h"

void SelectionSort(int* Ar, int size) {
        for (int i = 0; i < size; i++) {
		int _Ar[size - i] = {};
		int _i = i;
		for (int l = 0; l < (size - i); l++) {
			_Ar[l] = Ar[_i];
			_i++;
		}
                int min = GetMin(_Ar, size - i) + i;
                Swap(&Ar[i], &Ar[min]);
	}
}

void BubbleSort(int* Ar, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1 - i); j++) {
			if (Ar[j] < Ar[j + 1]) {
				Swap(&Ar[j], &Ar[j + 1]);
			}
		}
	}
}

void InsertionSort(int* Ar, int size) {
	for (int i = 1; i < size; i++) {
		int a = Ar[i];
		int j = i - 1;
		while (j >= 0 && Ar[j] > a) {
			Ar[j + 1] = Ar[j];
			j--;
		}
		Ar[j + 1] = a;
	}
}

void QuickSort(int* Ar, int size) {
	int l = 0;
	int r = size - 1;
	int pivot = Ar[size / 2];
	while (l < r) {
		while (Ar[l] < pivot) {
			l++;
		}
		while (Ar[r] > pivot) {
			r--;
		}
		if (l < r) {
			Swap(&Ar[l], &Ar[r]);
			r--;
			l++;
		}
		if (r > 0) {
			QuickSort(&Ar[0], l);
		}
		if (l < size) {
			QuickSort(&Ar[l], size - l);
		}
	}
}

void ShellSort(int* Ar, int size) {
	for (int i = size / 2; i > 0; i = i / 2) {
		for (int j = i; j < size; j++) {
			int k = Ar[j];
			int g = j;
			while (g >= i && Ar[g - i] >= k) {
				Ar[g] = Ar[g - i];
				g -= i;
			}
			Ar[g] = k;
		}
	}
}

void CountSort(int* Ar, int size) {

}

void MergeSort(int* Ar, int size) {

}
