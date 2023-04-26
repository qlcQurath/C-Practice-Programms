/*Calcuate the Factorial of the number using loop*/
#include<stdio.h>
void main()
{
    int fact = 1,i,num;  

    /*Some compilers may assign any garbage value to the uninitialized variable, 
    to avoid this we are assigning 'fact' as 1 
    Beacuse this can lead to wrong calculations*/

    printf("Enter the number for factorial\n");
    scanf("%d",&num);

    if(num == 0)
        fact = 1;       //Because factorial of 0 is 1

    /*calculating the factorial of the number*/\
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    
    //print thr factorial number
    printf("Factorial of %d is %d\n",num,fact);
}