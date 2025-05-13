#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
   int i=0,c=0;
   while(a[i]%2==0)
   {
       a[i]/=2;
       if(i==n-1)
       {
           c++;
           i=0;
       }
       i++;
   }
   cout<<c;
}