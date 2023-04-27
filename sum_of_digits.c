/*Calculate the sum of Digits for the given number*/
/*Example: 123 = 1 + 2 + 3  = 6*/
#include<stdio.h>
void main()
{
    int sum=0,rem,num;
    printf("Enter the number\n");
    scanf("%d",&num);

    while(num>0)
    {
        rem = num%10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of Digits:%d\n",sum);
}