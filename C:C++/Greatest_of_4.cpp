#include <iostream>
#include <cstdio>
using namespace std;

int max(int a, int b, int c, int d){
    if (a > b) {  
        if (a > c) {  
            if (a > d) {  
                cout << a;  
            }  
            else {  
                cout << d;  
            }  
        }  
    }  
    else if (b > c) {  
        if (b > d) {  
            cout << b;  
        }  
        else {  
            cout << d;  
        }  
    }  
    else if (c > d) {  
        cout << c;  
    }  
    else {  
        cout << d;  
    }
    return 0;  
}  
int main() {
    int a, b, c, d;
    cout<<"enter : ";
    cin>>a;
    cin>>b;cin>>c;cin>>d;
    max (a,b,c,d);
    
    return 0;
}

