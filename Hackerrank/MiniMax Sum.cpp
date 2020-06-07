//__author__ = Vikrant Kumar Tufani
// Date : 07 June 2020 
// Sample Input
//1 2 3 4 5
//Output
//10 14

//Ques : Mini-Max Sum

#include<iostream>
using namespace std;

int main()
{
	int n=5,i=0, j=0;
	long long int a[10], temp=0;
	long long int sum=0, psum[10];
	
	//cout<<"\n Enter Array elements: \n";	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	//Total Sum
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	
	//Subarray sum stored in form of array
	for(i=0; i<n; i++)
	{
		psum[i] = sum - a[i];
	}

	//Sorting the Subarray sum array
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(psum[j] > psum[j+1])
			{
				temp = psum[j];
				psum[j] = psum[j+1];
				psum[j+1] = temp;
			}
		}
	}
	
	//Output	
	cout<<psum[0]<<" ";
	cout<<psum[n-1];
}
