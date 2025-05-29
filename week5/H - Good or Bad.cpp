#include <iostream>

using namespace std;

int main(){
    // Good if and only if it has "010" or "101" 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0;
        bool test=false;
        while(i<s.length()-2)
        {
            string x=s.substr(i,3);
            if(x=="010" || x=="101")
            {
                test=true;
                break;
            }
            i++;
        }
        if(test==true) cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }
}