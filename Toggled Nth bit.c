#include<stdio.h>
int main()
{
    int num,n,newNum;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Enter nth bit to set(0-31):");
    scanf("%d",&n);
    newNum=num^(1<<n);
    printf("Bit toggled successfully.\n\n");
    printf("Number before setting %d bit: %d(in decimal)\n",n,num);
    printf("Number after setting %d bit: %d(in decimal)\n",n,newNum);
    return 0;
}
