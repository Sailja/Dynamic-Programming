#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int lis(int ar[], int n)
{
	int li[n];
	li[0]=1;	
	for(int i=1;i<n;i++)
	{
		int max=0;
		for(int j=0;j<i;j++)
		{
			if(ar[j]<ar[i])
			{
				if(max<li[j])
					max=li[j];
			}
					
		}
		if(max!=0)
				li[i]=max+1;
		else
				li[i]=1;
		
	}
	return *max_element(li, li+n);
	
}

int main()

{
  int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60,0,1,2,3,4,5,6,7 };
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Length of LIS is %d\n", lis( arr, n ) );
 
  getchar();
  return 0;
}
