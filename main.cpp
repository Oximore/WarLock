#include <iostream>
#include <cstdlib>
#include "grid.h"
#include "entity.h"
using namespace std ;


int main()
{
  cout << "Bienvenue !" << endl;

  Grid * grid = new Grid(5,5,2);
  grid->print();
  
  
  
  bool gameOver = false;

  int deplacementJoueur1 = 0;
  int deplacementJoueur2 = 0;
  
  while(!gameOver) {
    
    grid->print();
    cout << "Déplacement (de 1 à 9): ..." << endl;
    cin >> deplacementJoueur1;
    
    deplacementJoueur2 = 1 + rand()%9;
    
    grid->resDep(deplacementJoueur1, deplacementJoueur2);
    cout << endl;
    
  }
  return 0;
};
