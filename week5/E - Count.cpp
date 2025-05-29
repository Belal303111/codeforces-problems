#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sum=0,i=0;
    while(i<s.length())
    {
        char a=s[i];
        int b=a - '0';
        sum+=b;
        i++;
    }
    cout<<sum;
    return 0;
}