#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a[120];
	int i,j, sum=0,n, n1;
	int flag =0;
	
	cout<<"\nEnter Size: ";
	cin>>n;
	cout<<"\nEnter target Number: ";
	cin>>n1;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	for(i=0;i<n-1;i++)
	{
		sum = a[i];
		for(j=i+1;j<=n;j++)
		{
			if(sum == n1)
			{
				cout<<"\nStart Index: "<<a[i]<<"\nEnd Index: "<<a[j-1];
				flag = 1;
			}
			if(sum>n1 || j==n)
			   break;
			sum = sum + a[j];	
			
			/*if(flag == 1)
				break;*/
		}
	}
	
	if(flag == 1)
	{
		cout<<"\ntrue";
	}
	else
	{
		cout<<"\nfalse";
	}
	return 0;
}
