#include <iostream>

using namespace std;

int len_of_dis_num(int a[],int size)
{
    int c=0;
    for(int i=0;i<size;i++)
    {
        int j=0;
        while(j<i)
        {
            if(a[i]==a[j]) break;
            j++;
        }
        if(j>=i) c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
     cout<<len_of_dis_num(a,n);
}