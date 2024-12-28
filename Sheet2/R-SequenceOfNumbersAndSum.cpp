#include <iostream>

using namespace std;

int main(){
    int n,m;
    while(true)
     {
         cin>>n>>m;
         int k=0;
         if(n<=0 || m<=0) break;
         if(n<m)
         while(n<=m)
         {
             cout<<n<<" ";
             k+=n;
             n++;
         }
         else
         while(m<=n)
         {
             cout<<m<<" ";
             k+=m;
             m++;
         }
         if(k>0)
         cout<<"sum ="<<k<<endl;
         else break;
     }
     
    
    return 0;
}