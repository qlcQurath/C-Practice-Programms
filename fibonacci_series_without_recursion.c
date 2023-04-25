#include<stdio.h>
void main()
{
    int n1=0,n2=1,n3,num,i;
    printf("Enter the number elements\n");
    scanf("%d",&num);

    /*Printing first two elements of the fibonacci series*/
    printf("%d %d",n1,n2);
    /*Start the loop from 2 , because first two elements are already known and printed*/
    for(i=2;i<num;i++)
    {
        n3 = n1+n2;
        printf(" %d ",n3);
        n1 = n2;
        n2 = n3;
    }
}