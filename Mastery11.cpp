//Mastery11
//TC1017
#include <iostream>
using namespace std;

int Cuadrado(int n)
{
    return n*n;
}

int main (){
	int a;
	cout <<"Estre programa calcula la pontencia de un numero\n" <<endl;
	cout <<"Dame un numero entero positivo" <<endl;
	cin>> a;


	cout <<"El resultado es   " <<Cuadrado(a) <<endl; 

	return 0; 
}
