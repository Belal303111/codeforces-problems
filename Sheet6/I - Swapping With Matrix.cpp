#include <iostream>
#include <vector>
using namespace std;

void swap_matrx(vector<vector<int>>&a,int x,int y)
{
    //swap rows
    for(int i=0;i<a.size();i++)
      swap(a[x][i],a[y][i]);
     //swap columns
    for(int i=0;i<a.size();i++)
      swap(a[i][x],a[i][y]);
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        cin>>a[i][j];
        
    swap_matrx(a,x-1,y-1);
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}