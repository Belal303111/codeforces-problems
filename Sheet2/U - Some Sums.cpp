// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int digit_sum(int n)
{
    int sum=0;
    while(n>0)
           {
               sum+=n%10;
               n/=10;
           }
    return sum;
}

int main() {
   int n,a,b;
   cin>>n>>a>>b;
   int sum=0;
   for(int i=1;i<=n;i++)
   {
       if(digit_sum(i)>=a && digit_sum(i)<=b)
           sum+=i;
//if(i >= a && i <= b) i=11  // أي if(11 >= 4 && 11 <= 16)-->false
       }
   cout<<sum;

    return 0;
}