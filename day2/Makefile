.PHONY:all

all:rotate_array fibb one_num

one_num:one_num.cpp
	g++ -o $@ $^ -gdwarf-2
rotate_array:rotate_array.cpp

fibb:fibb.cpp
	g++ -o $@ $^ -gdwarf-2
.PHONY:clean
clean:
	-rm -rf fibb rotate_array one_num
