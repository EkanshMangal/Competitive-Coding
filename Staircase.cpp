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
		for(j=n-1; j>=n-1-i; j--)
		{
			a[i][j] = 1;
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=n-1; j>=n-1-i; j--)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
