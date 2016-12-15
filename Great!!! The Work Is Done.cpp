#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int h,n,arr[105];
	while(scanf("%d%d",&h,&n)==2)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int sum=0,count=0;
		while(sum<h)
		{
			count++;
			for(int i=0;i<n;i++)
			{
				sum=sum+arr[i];
			}
			if(sum>=h)
			{
				break;
			}
		}
		if(count<=1)
		printf("Project will finish within %d day.\n",count);
		else
		printf("Project will finish within %d days.\n",count);
	}

	return 0;
}
