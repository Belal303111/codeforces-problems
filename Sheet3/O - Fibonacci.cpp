#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n==1) cout<<0;
    else if(n==2) cout<<1;
    else{
    long long a=0,b=1,c;
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    }
    return 0;
}