/*Program to check the number is Palindrome or not*/
#include<stdio.h>
void main()
{
    int num,rem,rev=0,temp;
    printf("Enter the the number to check palindrome\n");
    scanf("%d",&num);
    temp = num;     //to compare the number we use temp variable

    /*Reverse the number*/
    while(num!=0)
    {
        rem = num%10;
        rev = (rev*10) + rem;
        num /= 10;
    }

    /*Check temp and rev variables match or not and print the output*/
    if(temp == rev)
        printf("The number is Palindrome\n");
    else
        printf("The number is Not Palindrome\n");
}