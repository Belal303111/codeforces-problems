#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s,n;
        cin>>s>>n;
        string x="";
        int i=0,j=0;
        while(i<s.length()&& j<n.length())
        {
            x+=s[i];
            x+=n[j];
            i++;
            j++;
        }
        for(i;i<s.length();i++)
         x+=s[i];
         for(j;j<n.length();j++)
         x+=n[j];
    cout<<x<<endl;
    }
    return 0;
}