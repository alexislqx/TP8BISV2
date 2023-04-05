#include <iostream>
#include "attaque.h"
using namespace std;


int main() {
  std::cout << "Hello World!\n";

  //Test de la classe attaque
  attaque feuille(1);
  attaque ciseau(2);
  if(ciseau.resoudreAttaque(feuille)){
    cout<<"Ciseaux à gagné"<<endl;
  }
  else{
    cout<<"Ciseaux à perdu"<<endl;
  }
  
}