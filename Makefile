FLAGS = -Wall -Werror

all: build

build/sort.o: src/sort.cpp
	mkdir -p build/
	gcc $(FLAGS) -c src/sort.cpp -o build/sort.o

build/unit.o: src/unit.cpp
	mkdir -p build/
	gcc $(FLAGS) -c src/unit.cpp -o build/unit.o

build/test.o: test/main.c
	mkdir -p build/
	gcc $(FLAGS) -c test/main.c -o build/test.o

build: build/sort.o build/unit.o
	mkdir -p bin/
	gcc $(FLAGS) build/sort.o build/unit.o -o bin/app

test:  build/test.o build/unit.o
	mkdir -p bin/
	gcc $(FLAGS) build/unit.o build/test.o -o bin/app_test

clean:
	rm build/*.o

run:
	./bin/app
