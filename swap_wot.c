/*Swap the number with out using the third(temp) variable*/
/*Input: a = 3 b = 5
  Output: a = 5 b = 3*/
  #include<stdio.h>
  void main()
  {
    int a,b;
    printf("Enter the two numbers to swap it\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping : a = %d b = %d\n",a,b);
    //Swaping with out 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swapping : a = %d b = %d\n",a,b);

  }