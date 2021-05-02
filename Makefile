all: build_dir
	g++ main.cpp -o ./build/main.out

build_dir:
	mkdir ./build

clean:
	rm -r ./build