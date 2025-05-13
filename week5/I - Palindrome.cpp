#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string x=s;
    int i=0,j=s.length()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    bool test=true;
    for(int i=0;i<s.length();i++)
     if(s[i]!=x[i]){
         test=false;
         break;
     }
     if(test==true) cout<<"YES";
     else cout<<"NO";
}