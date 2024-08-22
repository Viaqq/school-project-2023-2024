#include "work_array.h"
#include <cstring>
#include "sorts.h"

static void merge(int* Ar, int total_left, int total_size) {
	int left = 0;
	int right = total_left;
	int i = 0;
	int* res = new int [total_size];
	while (i < total_size) {
		if (Ar[left] >= Ar[right]) {
			res[i] = Ar[right];
			i++;
			right++;
			if (right >= total_size) {
				while (left < total_left) {
					res[i++] = Ar[left++];
				}
				break;
			}
		}
		if (Ar[left] < Ar[right]) {
			res[i] = Ar[left];
			left++;
			i++;
			if (left >= total_left) {
				while (right < total_size) {
					res[i++] = Ar[right++];
				}
				break;
			}
		}
	}
	memcpy(Ar, res, total_size * 4);
	delete [] res;

}

int CheckSorts(const int* Ar, int size) {
	int v = 0;
	int u = 0;
	for (int i = 0; i < size - 1; i++) {
		if (Ar[i] >= Ar[i + 1]) {
			u++;
		}
		if (Ar[i] <= Ar[i + 1]) {
			v++;
		}
	}
	if (v == size - 1) {
		return 0;
	} else if (u == size - 1) {
		return 1;
	} else if (v == 0 && u == 0) {
		return 0;
	} else {
		return -1;
	}
}

void SelectionSort(int* Ar, int size) {
	for (int i = 0; i < size; i++) {
		int min = GetMin(&Ar[i], size - i) + i;
		Swap(&Ar[i], &Ar[min]);
	}
}

void BubbleSort(int* Ar, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1 - i); j++) {
			if (Ar[j] > Ar[j + 1]) {
				Swap(&Ar[j], &Ar[j + 1]);
			}
		}
	}
}

void InsertionSort(int* Ar, int size) {
	for (int i = 1; i < size; i++) {
		int k = Ar[i];
		int j = i - 1;
		while (j >= 0 && Ar[j] > k) {
			Ar[j + 1] = Ar[j];
			j--;
		}
		Ar[j + 1] = k;
	}
}

void QuickSort(int* Ar, int size) {
	int left = 0;
	int right = size - 1;
	int pivot = Ar[size / 2];
	while (left < right) {
		while (Ar[left] < pivot) {
			left++;
		}
		while (Ar[right] > pivot) {
			right--;
		}
		if (left < right) {
			Swap(&Ar[left], &Ar[right]);
			right--;
			left++;
		}
		if (right > 0) {
			QuickSort(&Ar[0], left);
		}
		if (left < size) {
			QuickSort(&Ar[left], size - left);
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
	long int count[1024];
	memset(count, 0, sizeof(long int) * 1024);
	for (int i = 0; i < size; ++count[Ar[i++]]);
	int c = 0;
	for (int j = 0; j < 1024; j++) {
		for (int k = 0; k < count[j]; k++) {
			Ar[c++] = j;
		}
	}
}

void MergeSort(int* Ar, int size) {
	if (size <= 1) {
		return;
	}
	MergeSort(&Ar[0], size / 2);
	MergeSort(&Ar[size / 2], size - size / 2);
	merge(&Ar[0], size / 2, size);
}
