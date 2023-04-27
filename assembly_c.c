/*Write assembly program in c to add two numbers*/
/*Usinf: asm{} to write it*/
#include<stdio.h>
void main()
{
    int a = 10,b = 15,c;

    //Assembly Code
    __asm__ (
        "mov ax,a"
        "mov bx,b"
        "add ax,bx"
        "mov c,ax"
        "leave"
    );
    printf("c = %d\n",c);
}