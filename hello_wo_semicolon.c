/*Print "Hello" without using semicolon*/

#include<stdio.h>
void main()
{
    //First method
    if(printf("Hello\n")){}

    //Second Method
    switch (printf("Hello\n")){}

    //Third Method
    /*Adding "!" symbol, because it will prevent from infinite loop running 
    as ther is no exit conditon inside the loop"*/
    while (!printf("Hello\n")){}
}