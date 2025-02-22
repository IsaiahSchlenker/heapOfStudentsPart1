heapOfStudents: date.o address.o student.o main.o
	g++ date.o address.o student.o main.o -o heapOfStudents

address.o: address.h address.cpp
	g++ -c address.cpp

date.o: date.h date.cpp
	g++ -c date.cpp

student.o: student.h student.cpp
	g++ -c student.cpp

main.o: date.h address.h student.h main.cpp
	g++ -c -g main.cpp

run: heapOfStudents
	./heapOfStudents

clean:
	rm heapOfStudents
	rm *.o
