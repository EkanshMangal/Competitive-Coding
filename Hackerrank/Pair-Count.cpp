#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[100];
    int i,j,n,m;
    int count = 0, temp=0;
    int min=0;
    int pair;
    
    cin>>n;
    
    cout<<"\n";
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    
    for(i=0;i<n-1;i++)
    {
    	min = i;
    	for(j=i+1; j<n; j++)
        if(arr[j]<arr[min])
           min = j;
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
      
    }
    
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    
    m = arr[0];
    
    while(i<n)
    {
        if(arr[i] == arr[0])
        {
            count++;
        }
    }
    
    pair = count/2;
    
    cout<<"\n"<<pair;
    
    return 0;
}
