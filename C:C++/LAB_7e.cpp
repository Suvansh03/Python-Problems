#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;
class Complex {
    private:
        int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;    
    }
    Complex (int r, int i){
        real = r;
        imag = i;
    }
    string to_string(){
        stringstream ss;
        if(imag >= 0)
            ss << real << " + " << imag << "i";
        else
            ss << real << " - " << abs(imag) << "i";
        return ss.str();
    }
    Complex operator+(Complex c2){
        Complex ans;
        ans.real = real + c2.real;
        ans.imag = imag + c2.imag;
        return ans;
    }
};
int main(){
    Complex c1(8,-5), c2(2,3);
    Complex result = c1 + c2;
    cout << result.to_string();
}