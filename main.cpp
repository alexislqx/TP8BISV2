#include <iostream>
#include "attaque.h"
#include "loup.h"
#include "pierre.h"
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
  // test de la classe animal
  loup girafe(10,10);
  pierre emeraude(10,10);
  
} 