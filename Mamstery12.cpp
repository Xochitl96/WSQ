//Mastery12
//TC1017
#include <iostream>
using namespace std;

//divide enteros
int divide(int a, int b)
{
	int respuesta= a/b;

        return respuesta;
    }
// residuo
int resd(int a, int b)
{
   int respuesta= a%b;

        return respuesta;
    }

int main()
{
	int first, second;
	cout <<"Dame un numero" <<endl;
	cin >> first;

	cout <<"Dame otro numero" <<endl;
	cin >> second;

	cout <<"Los numero que me diste son " <<first <<"  y  " <<second <<endl;

	int entera = divide(first,second);
	int residuo = resd(first,second);

    cout << "La division entera es  " <<entera << endl;
    cout << "El residuo es  " <<residuo  << endl;

    return 0;
    
}
