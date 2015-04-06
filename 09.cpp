//WSQ09
//TC1017
#include <iostream>
#include <cstdlib>
	 
using namespace std;

long long int factorial(long n)
{
	if(n==0){
		return 1;
	} 
	if(n>0)
	 { 
		long long int fact=1;
		for (long i=2;i<=n;i++)
			{
				cout << fact << endl;
				fact=fact*i;
			}
			return fact;
		}
	
}

int main(){
	long long int number;
	char resp;

	do{
		cout <<"Dame el numero que deseas calcular el factorial" <<endl;
	cin >> number;

	cout<< "El factorial es  " <<factorial(number) <<endl;

	
	cout <<"¿Deseas repetir el calculo del factorial? si='s' o no= 'n' " <<endl;
	cin >> resp;

	}	while(resp=='s');
	
	cout <<"¡Que tengas un bonito día" <<endl;

return 0;


}
