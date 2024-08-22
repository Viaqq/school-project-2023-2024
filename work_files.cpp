#include <fstream>
#include "work_files.h"

void WriteRes(const char* file_name, int number_1, float number_2, bool update = true) {
	FILE* file;
	if (update) {
		file = fopen(file_name, "a");
		//В файл дописываются строки
	} else {
		file = fopen(file_name, "w");
		//Файл перезаписывается
	}
	fprintf(file, "%d\t%f\n", number_1, number_2);
	fclose(file);
}
