#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	float divi;

	cout <<"Escribe un numero:" <<endl;
	cin >> a;
	cout <<"Escribe otro numero: " <<endl;
	cin >> b;

	     
	cout << a << "+" << b << "= " << a+b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
	cout << a << "*" << b << "= " << a*b << endl;
	cout << a << "/" << b << "= " << a/b << endl;
	cout << "Residuo:" << a%b << endl;

	
	return 0;
}