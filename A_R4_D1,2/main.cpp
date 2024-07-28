#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>b;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            int maxm=a[0];
       for(int i=0;i<n;i+=2)
            if(a[i]>maxm) maxm=a[i];
       b.push_back(maxm);
    }
    for(int i=0;i<b.size();i++)
        cout<<b.at(i)<<endl;
    return 0;
}
