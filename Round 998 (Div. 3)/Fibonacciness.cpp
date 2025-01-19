#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
 {
     int a[5];
 int k=0;
 for(int i=0;i<5;i++)
 {
     if(i!=2)
      cin>>a[i];
     else a[i]=a[1]+a[0];
     if(i>=2)
     {
         if(a[i]==a[i-1]+a[i-2]) k++;
         //cout<<"K:"<<k<<endl;
     }
 }
 a[2]=a[3]-a[1];
 int l=0;
 for(int i=2;i<5;i++)
    {
        if(a[i]==a[i-1]+a[i-2]) l++;
       //  cout<<"L:"<<l<<endl;
    }
 if(k>l)
 cout<<k;
 else cout<<l;
 }
    return 0;
}
