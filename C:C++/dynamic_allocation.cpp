#include <iostream>
using namespace std;

int main() {

  int* pointInt;

  float* pointFloat;

  pointInt = new int;
  pointFloat = new float;

  *pointInt = 45;
  *pointFloat = 45.45;

  cout << *pointInt << endl;
  cout << *pointFloat << endl;

  delete pointInt;
  delete pointFloat;

  cout << *pointInt << endl;
  cout << *pointFloat << endl;  

  return 0;
}