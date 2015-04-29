//Monserrat Sanchez
//Quiz 10 question 2
//TC1017
#include <iostream>
#include <vector>
using namespace std;

int dotProduct (vector <int> v1, vector <int> v2){
  int total = 0;
  for (int i = 0; i < v1.size (); i++){
    total += (v1 [i] * v2 [i]);
  }
  return total;
}

int main (){
  vector <int> list1;
  vector <int> list2;
  int x;
  int y;
  int size1;
  int size2;

  cout << "Por favor, introduzca los valores de la primera lista , uno por uno . Cuando haya terminado , escriba 0" << endl;
  do{
    cin >> x;
    list1.push_back (x);
  } while (x != 0);
  size1 = list1.size ();

  cout << "A continuación, introduzca los valores para la segunda lista uno por uno. Cuando haya terminado , escriba 0 de nuevo . Asegúrese de introducir la misma cantidad de valores que ha introducido en la primera lista !!" << endl;
  do{
    cin >> y;
    list2.push_back (y);
  } while (y != 0);
  size2 = list2.size ();

  cout << endl;
  if (size1 != size2){
    cout << "Error: Estas listas no son del mismo tamaño !" << endl;
    cout << "-1" << endl;
  } else {
    cout << "El producto de estas listas es:  " << dotProduct (list1, list2) << endl;
  }


return 0;

}

