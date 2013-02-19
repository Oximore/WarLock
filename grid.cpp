#include "grid.h"
#include "entity.h"
#include "player.h"
#include <iostream>

using namespace std;

Grid::Grid(int dimX,int dimY,int nbPlayer)
{
	m_dimX=dimX;
	m_dimY=dimY;
	m_Entities=new Entity**[dimX];
	for(int i=0;i<m_dimX;i++)
	{
		m_Entities[i]=new Entity*[dimY];
		for(int j=0;j<m_dimY;j++)
		{
			m_Entities[i][j]=NULL;
		}		
	} 	
	for(int i=0;i<nbPlayer;i++)
	{
	m_Entities[i*5][3]=new Player(Coord(i*5,3),15,i);
	}

}
