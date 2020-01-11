compiler=g++
VPATH=src:o_files

__: main
main : main.o sprinter.o
	$(compiler) o_files/main.o ./o_files/sprinter.o -o sprinter.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

sprinter.o : sprinter.cpp
	$(compiler) -c ./src/sprinter.cpp -o ./o_files/sprinter.o