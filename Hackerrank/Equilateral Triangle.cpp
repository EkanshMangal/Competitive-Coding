#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a[10][10];
	int i, j, n;
	
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j>(n-1/2) && i+j<n-1)
			{
				a[i][j]=1;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				cout<<'#';
			}
			if(a[i][j]!=1)
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
