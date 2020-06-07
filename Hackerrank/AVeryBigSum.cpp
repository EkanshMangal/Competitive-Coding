#include<iostream>
using namespace std;

int main()
{
	int n = 0, i=0;
	long long int sum = 0, a[10];
	
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0 ; i<n ; i++)
	{
		sum += a[i];
	}

}
