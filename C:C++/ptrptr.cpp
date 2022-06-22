#include <iostream>
using namespace std;
int main()
{
int *p;
int (*ptr)[5];
int arr[5];

p = arr; 			// Points to 0th element of the arr
ptr = &arr; 		// Points to the whole array arr
cout << "p =" << p <<" ptr = "<< ptr<< endl;
p++;
ptr++;
cout << "p =" << p <<" ptr = "<< ptr<< endl;  
return 0;
}