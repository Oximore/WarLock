#ifndef GRID_H
#define GRID_H
#include "entity.h"

class Grid
{
private :
int m_dimX;
int m_dimY;
Entity *** m_Entities ;

public :
Grid(int dimX,int dimY,int nbPlayer);
void print();
void resDep(int , int );
};
#endif
