all: build/main

build/main: build/object/main.o build/object/render.o build/object/border.o build/object/input.o
	@echo "Linking"
	@g++ build/object/main.o build/object/render.o build/object/border.o build/object/input.o -o build/main

build/object/main.o: src/main.cpp
	@echo "Compiling src/main.cpp"
	@g++ -c src/main.cpp -o build/object/main.o

build/object/render.o: lib/render.cpp
	@echo "Compiling lib/render.cpp"
	@g++ -c lib/render.cpp -o build/object/render.o

build/object/border.o: lib/border.cpp
	@echo "Compiling lib/border.cpp"
	@g++ -c lib/border.cpp -o build/object/border.o

build/object/input.o: lib/input.cpp
	@echo "Compiling lib/input.cpp"
	@g++ -c lib/input.cpp -o build/object/input.o

clean:
	@echo "Cleaning"
	@rm build/main build/object/main.o build/object/render.o build/object/border.o build/object/input.o
