#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,score=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<a.size();i++)
    for(int j=i+1;j<a.size();j++)
        if(a[i]!=-1 && a[j]!=-1)
         if(a[i]+a[j]==k)
          {
              score++;
            a[i]=-1;
            a[j]=-1;
          }
    cout<<score<<endl;
    }
    return 0;
}
