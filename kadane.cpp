#include <iostream>
using namespace std;

int maxSubArraySum(int a[],int n)
{
  int curr_max=a[0];
  int max_so_far=a[0];
  for(int i=1;i<n;i++)
    {
      curr_max=max(a[i],curr_max+a[i]);
      max_so_far=max(curr_max,max_so_far);
    }
  return max_so_far;
}

int main()
{
  int a[]={-2,-2,3,4,-1,6,-5};
  int n=sizeof(a)/sizeof(a[0]);
  int max_sum=maxSubArraySum(a,n);
  cout<<max_sum<<endl;
  return 0;
}	  
