//Mastery19
//TC1017

#include <iostream>
using namespace std;

int  main()
{
	float a,b,c, promedio;
	char resp;

	cout<<"Este programa calcula el promedio, las veces que tú desees"  <<endl;

	do{
		cout <<"Buen día, dame tu calificacion de matematicas " <<endl;
		cin>>a;
		cout <<"Dame tu calificacion de fisica" <<endl;
		cin>>b;
		cout <<"Dame tu calificacion de programcion" <<endl;
		cin>>c;
		promedio = (a+b+c)/3;

		cout<< "Tú promedio es  " <<promedio <<endl;

		cout <<"¿Deseas realizar el calculo de otro promedio? si='s' ó no= 'n'" <<endl;
		cin >>resp;

	} while (resp=='s');

	cout <<"¡Qué tengas un excelente día, nos vemos pronto" <<endl;

	
	return 0;
}
