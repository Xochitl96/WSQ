//Mastery18
//TC1017
#include <iostream>
using namespace std;

int main(){

	int promedio;

	cout<< "Ingresa tu promedio general" <<endl;
	cin>> promedio;

	if(promedio>80){

		cout<< "Felicidades, sigue esforzandote" <<endl;
	}

	else {
		if (promedio<80)
		{
			cout << "Estas en la categoria de alumno irregular, mejora tu rendimiento academico"  <<endl;
		}
		else 
		{
			cout <<"Eres alumno regular, tu puedes mas " <<endl;
		}
	}
	return 0;
}
