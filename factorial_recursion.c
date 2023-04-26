/*Calculating factorial of a number using recursion fungtion*/
#include<stdio.h>
int fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
void main()
{
    int num,fact1;
    printf("Enter the number for factorial\n");
    scanf("%d",&num);

    fact1 = fact(num);
    printf("Fcatorial of %d is %d",num,fact1);
}