#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

void readNumbersFromFile(string random_numbers){
  float average = 0.0, Total = 0.0, var = 0.0, variation = 0.0;
  int counter=0, count = 0;
  string line;
  vector <int> numbers;
  ifstream theFile(random_numbers);
  if(theFile.is_open()){
      while(getline(theFile,line)){
      int number = stoi(line);
      Total = Total + number;
      counter++;
      numbers.push_back(number);
    }
  }

  average = Total/counter;

  for(int i = 0; i < numbers.size(); i++){
    var = var + ((numbers[i] - average)*(numbers[i] - average));
  }
  variation = var/numbers.size();

  cout<< counter << " líneas en ese archivo"<< endl;
  cout << "El total de los valores es: " << Total << endl;
  cout << "El promedio es esos valores es:  " << average << endl;
  cout << "La desviacion estandar es :  " << sqrt(variation) << endl;
}

int main(){
  readNumbersFromFile("random_numbers.txt");
  return 0;
}
