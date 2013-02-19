#ifndef ENTITY_H
#define ENTITY_H
#include "coord.h"
class Entity
{
public :
int getId();

protected :
int m_Hp;
int m_Id;
Coord m_Coord;
};
#endif
