//Matrix operation - Addition, Subtraction, Multiplication using switch case statement
#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],r[20][20];
    int ch,i,j,k,m,n,p,q,flag=0;

    //Giving options to choose from
    printf("Enter your choise\n");
    printf("1. Matix Addition\n");
    printf("2. Matix Subtraction\n");
    printf("3. Matix Multiplication\n");
    scanf("%d",&ch);

    //Getting matrix dimentions
    printf("Enter the number rows and columns for 'a' matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the number rows and columns for 'b' matrix\n");
    scanf("%d%d",&p,&q);

    //switch statement for the matrix operations
    switch (ch)
    {
        case 1: if(m==p&&n==q)
                {
                    flag=1;
                    printf("Enter the elements of matrix a\n");
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                    }
                    printf("Enter the elements of matrix b\n");
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<q;j++)
                        {
                            scanf("%d",&b[i][j]);
                        }
                    }

                    //Adding the given matrix
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            r[i][j] = a[i][j] + b[i][j];
                        }
                    }
                    printf("Matrix Addition\n");
                }
                else
                    printf("Matrix addition is not possible\n");
            break;
        case 2: if(m==p&&n==q)
                {
                    flag=1;
                    printf("Enter the elements of matrix a\n");
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                    }
                    printf("Enter the elements of matrix b\n");
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<q;j++)
                        {
                            scanf("%d",&b[i][j]);
                        }
                    }

                    //Subtraction of the given matrix
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            r[i][j] = a[i][j] - b[i][j];
                        }
                    }
                    printf("Matrix Subtraction\n");
                }
                else
                    printf("Matrix subtraction is not possible\n");
            break;
        case 3: if(n==p)
                {
                    flag=1;
                    printf("Enter the elements of matrix a\n");
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                    }
                    printf("Enter the elements of matrix b\n");
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<q;j++)
                        {
                            scanf("%d",&b[i][j]);
                        }
                    }

                    //Multiplying the matrices
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<q;j++)
                        {
                            r[i][j]=0;
                            for(k=0;k<n;k++)
                            {
                                r[i][j] = r[i][j] + a[i][k]*b[k][j];
                            }
                        }
                    }
                    printf("Matrix Multiplication\n");
                }
                else
                    printf("Matrix multiplication is not possible\n");
            break;
        default: printf("Enter the valid choise\n");
            break;
    }

    //Check if the flag value updated to 1 or not
    //if yes then print the resultent matrix
    if(flag==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",r[i][j]);
            }
            printf("\n");
        }
    }

}