#include <iostream>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<0) continue;
        if(n==0) cout<<0;
        while(n>0)
        {
            cout<<n%10<<" ";
            n/=10;
        }
        cout<<endl;
    }
    return 0;
}