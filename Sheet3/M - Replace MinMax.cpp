#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int min_index=0,min=a[0],max_index=0,max=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max) {
            max_index=i;
            max=a[i];
        }
        if(a[i]<min) {
            min_index=i;
            min=a[i];
        }
    }
    swap(a[min_index],a[max_index]);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
    return 0;
}