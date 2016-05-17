.PHONY:all

all:rotate_array fibb one_num double_power print_num

print_num:print_num.cpp

double_power:double_power.cpp

one_num:one_num.cpp
	g++ -o $@ $^ -gdwarf-2
rotate_array:rotate_array.cpp

fibb:fibb.cpp
	g++ -o $@ $^ -gdwarf-2
.PHONY:clean
clean:
	-rm -rf fibb rotate_array one_num double_power print_num
