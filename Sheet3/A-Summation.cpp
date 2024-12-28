#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     {
         cin>>a[i];
        sum+=a[i];
     }
     if(sum<0) 
     cout<<sum*-1;
     else if(sum>0) cout<<sum;
    return 0;
}