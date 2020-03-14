CC = g++

all: s14 s15 s16 s17 s18 s19 s20 s22 tar

s14: s14.cpp hw05.h s14f.o
	$(CC) -g s14.cpp -o s14 s14f.o

s14f.o: s14f.cpp hw05.h
	$(CC) -g -c s14f.cpp -o s14f.o

s15: s15.cpp hw05.h s15f.o
	$(CC) -g s15.cpp -o s15 s15f.o

s15f.o: s15f.cpp hw05.h
	$(CC) -g -c s15f.cpp -o s15f.o

s16: s16.cpp hw05.h s16f.o
	$(CC) -g s16.cpp -o s16 s16f.o

s16f.o: s16f.cpp hw05.h
	$(CC) -g -c s16f.cpp -o s16f.o

s17: s17.cpp hw05.h s17f.o
	$(CC) -g s17.cpp -o s17 s17f.o

s17f.o: s17f.cpp hw05.h
	$(CC) -g -c s17f.cpp -o s17f.o

s18: s18.cpp hw05.h s18f.o
	$(CC) -g s18.cpp -o s18 s18f.o

s18f.o: s18f.cpp hw05.h
	$(CC) -g -c s18f.cpp -o s18f.o

s19: s19.cpp hw05.h s19f.o
	$(CC) -g s19.cpp -o s19 s19f.o

s19f.o: s19f.cpp hw05.h
	$(CC) -g -c s19f.cpp -o s19f.o

s20: s20.cpp hw05.h s20f.o
	$(CC) -g s20.cpp -o s20 s20f.o

s20f.o: s20f.cpp hw05.h
	$(CC) -g -c s20f.cpp -o s20f.o

s22: s22.cpp hw05.h s22f.o
	$(CC) -g s22.cpp -o s22 s22f.o

s22f.o: s22f.cpp hw05.h
	$(CC) -g -c s22f.cpp -o s22f.o

clean:
	rm -r -f *.o s14 s15 s16 s17 s18 s19 s20 s22 *.dSYM

tar:
	tar cf hw05.tar Makefile *.cpp *.scr hw05.h
