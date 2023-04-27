/*Calculating Armstrong Number*/
#include<stdio.h>
void main()
{
    int num,sum=0,rem,temp;
    printf("Enter the number for Armstrong\n");
    scanf("%d",&num);

    temp = num;        //to check the "sum" value equal to the given number
    while(num>0)
    {
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num /= 10;
    }
    if(temp == sum)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
}