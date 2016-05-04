.PHONY:all
all:cstring  findNumber fillBlank

fillBlank:fillBlank.cpp
	g++ -o $@ $^ -gdwarf-2
findNumber:findNumber.cpp

cstring:cstring.cpp
	g++ -o $@ $^ -gdwarf-2
singleton:singleton.cpp
	g++ -o $@ $^ -lpthread -gdwarf-2
.PHONY:clean
clean:
	-rm -rf cstring singleton findNumber fillBlank
