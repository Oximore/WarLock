

all: a.out

a.out:
	g++ coord.cpp entity.cpp grid.cpp main.cpp player.cpp


clean:
	rm *.gch