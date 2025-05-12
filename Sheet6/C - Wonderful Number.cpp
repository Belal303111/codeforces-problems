// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector<int> toBinary(int n)
{
     vector<int>m;
     while(n!=0)
     {
         m.push_back(n%2);
         n/=2;
     }
     return m;
}
bool Ispailendrom(int n){
    vector<int>m=toBinary(n);
     int i=0,j=m.size()-1;
     while(i<j)
     {
         if(m[i]==m[j]) {
            i++;
            j--;
         }
         else return false;
     }
     return true;
    }
int main() {
    int n;
    cin>>n;
    if(Ispailendrom(n) && n%2!=0) cout<<"YES";
   else cout<<"NO";
    return 0;
}