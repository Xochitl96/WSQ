#include <iostream>
using namespace std;

int gdc(int a, int b){
	int res=1;
	for(int i=1; i<=a; i++){
		if((a%i==0) && (b%i==0)){
			res=i;
		}
	}
	return res;
}
int main(){
	int a, b;
	char resp;
	do{
		cout <<"¡Buen día! Este programa te permite calcular el máximo común divisor" <<endl;
	cout <<"Dame un numero entero" <<endl;
	cin >> a;
	cout <<"Dame otro numero entero" <<endl;
	cin >> b;
	int res=gdc(a,b);

	cout <<"El máximo común divisor de los numeros  " <<a <<"  y "  <<b <<" es  "  <<res <<endl;

	cout <<"¿Deseas volver a calcular el máximo común divisor? si='s' o no= 'n'" <<endl;
	cin >> resp;

	}while(resp=='s');

	cout <<"¡Qué tengas un excelente día!" <<endl;
	

	return 0;


}
