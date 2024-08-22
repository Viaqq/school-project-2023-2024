all: main.o sorts.o work_array.o work_files.o
	g++ main.o sorts.o work_array.o work_files.o

main.o: main.cpp
	g++ -c main.cpp

sorts.o: sorts.cpp
	g++ -c sorts.cpp

work_array.o: work_array.cpp
	g++ -c work_array.cpp

work_files.o: work_files.cpp
	g++ -c work_files.cpp

clean:
	rm -rf *.o

clean_all:
	rm -rf *.o a.out
