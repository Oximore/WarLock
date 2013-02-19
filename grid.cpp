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
	m_Entities[i*4][2]=new Player(Coord(i*4,2),15,i);

	}

}

void Grid::resDep(int moveJ1, int moveJ2){
	
	
}

void Grid::print(){
  int var_tmp;
  
  for(int i=0 ; i<m_dimX ; i++){
    for(int j=0 ; j<m_dimY ; j++){
      
      if (m_Entities[i][j] == NULL)
	var_tmp = 9;
      else
	var_tmp = m_Entities[i][j]->getId();
      
      cout << var_tmp << " " ;
    }
    cout << endl;
  }
}
