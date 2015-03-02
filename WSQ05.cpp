//Temperature
#include <iostream>
using namespace std;

int main()
{
	int F;
	int C;
	cout << "Dame los grados de Farenheit que deseas convertir" << endl;
	cin >> F;
	C = 5 * (F - 32)/9;
	cout << "La temperatura en Celsius es " << C << endl;

	if (C<0){

		cout << "En esta temperatura el agua es solida" << endl;
	}
	if (0<C && C<100){
		cout << "En esta temperatura el agua es liquida" <<endl;
	}
	if (C==0){
		cout << "En esta temperatura el agua esta congelada" <<endl;
	}
	if (C==100){
		cout << "En esta temperatura el agua esta herviendo" <<endl;
	}
	if (100<C){
		cout << "En esta temperatura el agua es vapor" <<endl;
	}

	return 0;

}
