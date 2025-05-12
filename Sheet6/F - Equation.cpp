#include <iostream>
using namespace std;
long long Exponential_function(long long n,long long x){
    long long i=1;
    long long result=1;
    while(i<=n)
    {
        result*=x;
        i++;
    }
    return result;
}
int main(){
    long long n;
    long long x;
    long long sum=0;
    cin>>x>>n;
    for(long long i=2;i<=n;i+=2)
     {
         sum+=Exponential_function(i,x);
     }
    cout<<sum;
}