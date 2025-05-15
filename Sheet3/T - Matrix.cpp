#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   int a[n][n];
   int primary=0,secondary=0,k=1;
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
        if(i==j) {
            primary+=a[i][j]; 
                   // cout<<a[i][j]<<endl;
                 //   cout<<"primary "<<primary<<endl;
        }
        if(j==n-k)
        {
            secondary+=a[i][j];
          //  cout<<a[i][j]<<endl;
        //    cout<<"secondary "<<secondary<<endl;
            k++;
        }
     }
     int sub=primary-secondary;
     if(sub>=0) cout<<sub;
     else cout<<sub*-1;
    return 0;
}