#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num & 1)
    printf("LSB of %d is set(1).",num);
    else
    printf("MSB of %d is not set(0).",num);
    return 0;
    
}
