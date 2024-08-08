all: build/main

build/main: build/object/main.o build/object/snake.o
	@echo "Linking"
	@g++ build/object/main.o build/object/snake.o -o build/main

build/object/main.o: src/main.cpp
	@echo "Compiling src/main.cpp"
	@g++ -c src/main.cpp -o build/object/main.o

build/object/snake.o: lib/snake.cpp
	@echo "Compiling lib/snake.cpp"
	@g++ -c lib/snake.cpp -o build/object/snake.o

clean:
	@echo "Cleaning up"
	@rm build/main build/object/main.o build/object/snake.o
