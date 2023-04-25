#include<stdio.h>
void fibo_series(int n,int n1,int n2)
{
    int n3;
    if(n>0)
    {
        n3 = n1 + n2;
        printf(" %d ",n3);
        n1 = n2;
        n2 = n3;
        fibo_series(n-1,n1,n2);
    }
}
void main()
{
   int num,n1=0,n2=1;
   printf("Enter the number of elements\n");
   scanf("%d",&num);
   printf("%d %d",n1,n2);     //print first two numbers
   fibo_series(num-2,n1,n2);      //num-2 is because two numbers are already printed
}