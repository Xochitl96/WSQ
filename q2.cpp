#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void triangulo(int n){
	for(int i=1; i<=n; i++){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
	for (int i=(n-1); i>0; i--){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cout << "Please, give me the length of the middle line of the triangle" << endl;
	cin >> n;
	cout << endl << endl;
	triangulo(n);
	return 0;
}
