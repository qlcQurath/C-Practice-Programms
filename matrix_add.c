/*Program for MAtrix Addition - 2D MAtrix*/
/*Input : a = |2 4|     b = |4 1|
              |3 5|         |7 2|
  Output: r = |6  5|
              |10 7|*/
#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],r[50][50];
    int m,n,p,q,i,k,j;

    //Scanning the values for Matrix 'a'
    printf("Enter the number of rows and columns for 'a' matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix 'a'\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Scanning the values for Matrix 'b'
    printf("Enter the number of rows and columns for 'b' matrix\n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of matrix 'b'\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //Adding matrix 'a' and 'b'
    if((m==p)&&(n==q))      
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)        //insted of 'q' , 'n' also can be used
            {
                r[i][j] = a[i][j]+b[i][j];
            }
        }
    }
    else
    {
        printf("Matrix addition is not possible : check the row and colunm values\n");
    }
    //printing the Sum of two matrix
    printf("Sum of two matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            printf("%d\t",r[i][j]);
        printf("\n");
    }
}