// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0,b=1,c;
    if(n==1) cout<<a;
    if(n>=2)
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}