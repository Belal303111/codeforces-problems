#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
      cin>>a[i][j];
      
   int x;
   cin>>x;
   bool test = false;
    for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
      if(a[i][j]==x)
      {
          test=true;
          break;
      }
      if(test==true) break;
     }
     if(test==true) cout<<"will not take number";
     else cout<<"will take number";
   
}