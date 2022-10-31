#include <iostream>

using namespace std;

struct carData{
  int carNum;
  int miles;
  int gallons;
}; 

const int NumofThings = 5;

int main() {
  carData data[NumofThings];

  for (int i = 0; i < NumofThings; i++){  
    cin >> data[i].carNum;
    }

  
}