#include <iostream>

using namespace std;

void shift_right(int a[],int n,int x)
{
    for(int i=0;i<x;i++)
    {
        int temp=a[n-1];
        for(int j=n-1;j>0;j--)
          a[j]=a[j-1];
        a[0]=temp;
    }
}
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    shift_right(a,n,x);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}