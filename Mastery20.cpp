//Mastery20
//TC1017

#include <iostream>
using namespace std;
int main(){
	int hasta;
  cout << "Ingrese el numero hasta donde quiere contar: " << endl;
  cin >> hasta;
  for (int numero = 1 ; numero <= hasta ; numero++) //no abro llaves: es una sola instruccion.
    cout << numero << endl; //única instruccion del ciclo
  return 0 ;
 
}
