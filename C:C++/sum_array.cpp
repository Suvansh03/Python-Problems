#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int m,n;
    while(t--){
    int i,a[n-1],sum=0;
    cin>>n>>m;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int left=(m*n)-sum;
    if(left>=0)
    cout<<left<<endl;
    else
    cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}
