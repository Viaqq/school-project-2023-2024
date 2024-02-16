all: main.o sorts.o work_array.o
	g++ main.o sorts.o work_array.o

main.o: main.cpp
	g++ -c main.cpp

sorts.o: sorts.cpp
	g++ -c sorts.cpp

work_array.o: work_array.cpp
	g++ -c work_array.cpp

clean:
	rm -rf *.o
