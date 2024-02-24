#include "work_array.h"
#include <cstring>

//Why is it here?
static void merge(int* Ar, int total_size, int left_size) {
	int left = 0;
	int right = left_size;
	int l = 0;
	int* res = new int [total_size];
	while (l < total_size) {
		if (Ar[left] >= Ar[right]) {
			res[l] = Ar[right];
			left++;
			right++;
			if (right < total_size) {
				while (left < left_size) {
					res[l++] = Ar[left++];
				}
				break;
			}
		}
		if (Ar[left] < Ar[right]) {
			res[l] = Ar[left];
			left++;
			l++;
			if (left >= left_size) {
				while (right < total_size) {
					res[l++] = Ar[right++];
				}
				break;
			}
		}
	}
	std::memcpy(Ar, res, total_size * 4);
	delete [] res;

}

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
