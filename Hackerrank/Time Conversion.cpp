#include<iostream>
using namespace std;

int main() 
{
    char time[20];
    scanf("%s",time);
    if (time[0] == '1' && time[1] == '2')
        time[0] = time[1] = '0';
    if (time[8] == 'P') 
    {
        time[0] += 1; 
        time[1] += 2;
    }
    time[8] = '\0';
    if (time[1] > '9')
    {
        time[0]++;
        time[1]-=10;
    }
    printf("%s\n",time);
    return 0;
}
