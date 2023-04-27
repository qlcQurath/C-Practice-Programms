/*Convert the Decimal Number into Binary Number*/
#include<stdio.h>
void main()
{
    int num,a[10],i;
    printf("Enter the number\n");
    scanf("%d",&num);

    //calculating the binary value
    for(i=0;num>0;i++)
    {
        a[i] = num%2;
        num /= 2;
    }

    //Printing the binary value
    //It will be printed in reverse order
    printf("Binary of the given number is:");
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
}