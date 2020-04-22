#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	
	int array[] = {2,0,3,6,4,5,7};
	int num, total=0;
	for(num=0;num<8;num++)
	{
	 total += array[num];
	}

cout<<total;
return 0;
}
