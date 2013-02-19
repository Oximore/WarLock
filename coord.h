#ifndef COORD_H
#define COORD_H

class Coord
{
private :

int m_X;
int m_Y;

public :
Coord();
Coord(int,int);
int getX();
int getY();
void setX(int);
void setY(int);
bool isEqual(Coord);
};

#endif
