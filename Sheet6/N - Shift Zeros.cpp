#include <iostream>
#include <vector>
using namespace std;

vector<int> shift_zeroes(int a[],int n)
{
    vector<int>b;
    int c=0;
    for(int i=0;i<n;i++)
      {
          if(a[i]!=0){
          b.push_back(a[i]);
          c++;
      }
        }
      while(c<n){
          b.push_back(0);
          c++;
      }
      return b;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
   vector<int>b= shift_zeroes(a,n);
    for(int i=0;i<n;i++)
     cout<<b[i]<<" ";
}