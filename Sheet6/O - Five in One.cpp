#include <iostream>
#include <cmath>
using namespace std;

int max_num(int a[],int n)
{
  int maxm=a[0];
  for(int i=1;i<n;i++)
   {
	if(maxm<a[i]) maxm=a[i];
   }
 return maxm;
}
int min_num(int a[],int n)
{
  int minm=a[0];
  for(int i=1;i<n;i++)
   {
	if(minm>a[i]) minm=a[i];
   }
 return minm;
}
int num_of_primes(int a[],int n)
{
 int c=0;
  for(int i=0;i<n;i++)
    {
     if(a[i]<=1) continue;
	bool test=true;
       for(int j=2;j<=sqrt(a[i]);j++)
	{
	  if(a[i]%j==0) {
		test=false;
		break;
		}
  }
  if(test==true) c++; 
	}
return c;
}
int count_pilendrom(int a[],int n)
{
   int c=0;
  for(int i=0;i<n;i++)
    {
	 if(a[i]<10) {
	c++;
	continue;
  }
   int x=a[i],y=0;
   while(x>0)
{
  y*=10;
  y+=x%10;
  x/=10;
}
if(y==a[i]) c++;
} 
return c;
}
int num_of_max_divs(int a[],int n)
{ 
 int max_div=0,max_ele;
  for(int i=0;i<n;i++)
    {
	int c=0;
       for(int j=1;j<=sqrt(a[i]);j++)
	{
	  if(a[i]%j==0) c++;
 	}
 if(c>max_div){
   max_div=c;
   max_ele=a[i];
	}
if(c==max_div){
  if(max_ele<a[i])max_ele=a[i];
}
}
return max_ele;
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
 cin>>a[i];
cout<<"The maximum number : "<<max_num(a,n)<<endl;
cout<<"The minimum number : "<<min_num(a,n)<<endl;
cout<<"The number of prime numbers : "<<num_of_primes(a,n)<<endl;
cout<<"The number of palindrome numbers : "<<count_pilendrom(a,n)<<endl;
cout<<"The number that has the maximum number of divisors : "<<num_of_max_divs(a,n)<<endl;
}