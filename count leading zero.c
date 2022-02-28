#include<stdio.h>
#include<limits.h>
int main()
{
    int num,count;
    printf("Enter any number:");
    scanf("%d",&num);
    count=0;
    while(!(num&(~INT_MAX)))
    {
        count++;
        num<<=1;
    }
    printf("Total number of leading zeros = %d",count);
    return 0;
}