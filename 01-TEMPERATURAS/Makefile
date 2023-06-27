all: tests tablas

tests: TestDeConversion
	./TestDeConversion

TestDeConversion: Conversion.o
	gcc TestDeConversion.c Conversion.o -o TestDeConversion

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

tablas: Conversion.o
	gcc TablaDeConversion.c Conversion.o -o tablas

clean:
	rm -rf tablas TestDeConversion *.o