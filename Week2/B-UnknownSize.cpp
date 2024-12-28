#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1,k=0;
    vector<int>a;
    while(i<=n)
    {
        if(n%i==0){
            k++;
            a.push_back(i);
        }
        i++;
    }
    cout<<k<<endl;
    for(int i=0;i<a.size();i++)
     cout<<a[i]<<" ";
    return 0;
}