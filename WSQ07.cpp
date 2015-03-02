#include <iostream>
using namespace std;
int main(){
	int start, end, suma, contador, resultado;

	cout << "Este programa realiza la suma del rango que deseas" <<endl;

	cout << "Dame el primer numero del rango " <<endl; //Este numero será el limite menor del rango
	cin >> start;
	cout << "Dame el segundoo numero del rango" <<endl; //Este numero será el limite maoyor del rango
	cin >> end;

	suma=start;

	if(end<start){
		suma=end;
		end=start;
	}
	contador=0;

	while(suma!=end){
		resultado=contador+suma;
		contador=resultado;
		suma=suma+1;

	} 
	if(suma=end){
		resultado=contador+suma;
	}
	cout << "La suma del rango deseado es:  " << resultado   <<endl;

	return 0;
}