//WSQ08
//TC1017
#include <iostream>
using namespace std;

int theSum(int x, int y){
	int answer = x + y;
	return answer;
}

int theDifference(int x, int y){
	int answer = x - y;
	return answer;
}

int main(){
	int first, second; //no son variables

	cout << "This program does some calculation on two inputs " << endl;
	cout << "Give me an integer please:  " <<endl;
	cin >> first;

	cout << "Give me another interger please:  " <<endl;
	cin >> second;

	cout << "The numbers you gave are:  " <<first << "and  " << second << endl;

	int sum = theSum(first,second);
	int difference = theDifference(first,second);

	cout <<"And the sun of those two values is:  " <<sum << endl;
	cout << "And the difference of those two values is:  "  <<difference << endl;
	return 0;
	
}
