#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
        cin>>n[i];
  for(int i=0;i<t;i++)
    {
        if(n[i]<4) {
            cout<<n[i]/2<<endl;
         continue;
        }
        if(n[i]%4!=0) {
            cout<<n[i]/4+1<<endl;
         continue;
        }
        else {
            cout<<n[i]/4<<endl;
            continue;
        }
    }
    return 0;
}
