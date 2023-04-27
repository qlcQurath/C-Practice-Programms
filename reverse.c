/*Reverse the given Number*/
/*Input: 123
  Output: 321*/
#include<stdio.h>
void main()
{
    int num, rev = 0,rem;
    printf("Enter the number to reverse it\n");
    scanf("%d",&num);

    while (num>0)
    {
        rem  = num%10;
        rev = (rev*10) + rem;
        num /= 10;
    }
    printf("Revers Number : %d\n",rev);
}