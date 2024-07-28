#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
  int n,k;
  vector<char>m;
  while(t--)
  {
      cin>>n>>k;
      int x=n/k+1;
      char g[n][n];
      for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
            cin>>g[i][j];
    for(int i=0;i<n;i+=k)
        {
    for(int j=0;j<n;j+=k)
         m.push_back(g[i][j]);

      m.push_back('\n');
     }  //end of for loop
  } //end of while loop
 for(int i=0;i<m.size();i++)
    cout<<m.at(i);
    return 0;
}
