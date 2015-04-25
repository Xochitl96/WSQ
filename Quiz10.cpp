//Quiz10
//TC1017
//Monserrat Sanchez

include <iostream>
using namespace std;
int findThrees(int num[])
{
	int sum;
	sum=0;
	for(int i=0; i<5; i++)
	{
		if((num[i]%3)==0)
		{
			sum= sum + num[i];
		}
		else continue;
	}
	return sum;
}

int main()
{
	int resultado, num[4];
	cout <<"Ingrese 4 numeros diferentes enteros " <<endl;
	for(int i=1; i<5; i++)
	{
		cout<<"El numero es:  " <<i <<endl;
		cin>> num[i];

	}
	resultado= findThrees(num);
	cout <<"La suma es :  " <<resultado <<endl;
	return 0;
}
