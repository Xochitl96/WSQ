//Mastery16
//TC1017
//Else

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

	int a;
	int b;
	int prom;
	cout << "¿Cuanto obtuviste en matematicas?" << endl;
	cin >> a;
	cout << "¿Cuanto obtuviste en Fisica?" << endl;
	cin >> b;
	prom = (a+b)/ 2;

	if (prom >90)
	{
		cout << "¡Felicidades eres un genio en las ciencias exactas" << endl;
	}
	else 
	{
		cout << "¡Esfuerzate más, dentro de ti hay un genio!" << endl;
	}

	

	return 0;

	

}
