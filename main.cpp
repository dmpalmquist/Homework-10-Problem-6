#include <iostream>

using namespace std;

struct carData{
  double carNum;
  double miles;
  double gallons;
}; 

const int NumofThings = 5;

int main() {
  carData data[NumofThings];

  for (int i = 0; i < NumofThings; i++){  
    cin >> data[i].carNum >> data[i].miles >> data[i].gallons;
    }

  
}