#include "coord.h"


int Coord::getX()
{
	return m_X;
}
int Coord::getY()
{
	return m_Y;
}
void Coord::setX(int X)
{
	m_X=X;
}
void Coord::setY(int Y)
{
	m_Y=Y;
}

bool Coord::isEqual(Coord rhs)
{
	if((m_X=rhs.getX()) && (m_Y=rhs.getY()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Coord::Coord(int X , int Y)
{
	m_X=X;
	m_Y=Y;
}
Coord::Coord()
{
	m_X=0;
	m_Y=0;
}
