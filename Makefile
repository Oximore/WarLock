


all: Warlock

Warlock: main.cpp coord.cpp entity.cpp grid.cpp player.cpp
	g++ main.cpp coord.cpp entity.cpp grid.cpp player.cpp -o Warlock



clean:
	-rm *.gch
	-rm Warlock