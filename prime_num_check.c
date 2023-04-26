/*Check the number is Prime or not*/
#include<stdio.h>
void main()
{
    int num,flag=0,i;
    printf("Enter the number to check prime\n");
    scanf("%d",&num);

    /*check the number is 0 or 1, if yes then flag will be 1*/
    if(num == 0 || num == 1)
        flag = 1;

    /*since prime number starts from 2 , i = 2*/
    for(i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    /*chack flag value to print prime or not*/
    if(flag == 0)
        printf("The number is Prime\n");
    else
        printf("The number is not prime\n");
}