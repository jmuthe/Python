/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

union{
   int g  :20;
  struct{
        int a    :4;
        int b    :4;
        int c    :8;
        int d     :4 ;
   }PS;
} Packet ;
int main()
{
    /* 
    Packet.PS.a=4;
    Packet.PS.b=6;
    Packet.PS.c=7;
    Packet.PS.d=8;
    */
    Packet.g=0xAD476 ;
   
    
    printf("a = %x and b is %x c is %x d is %x g is %x ",Packet.PS.a,Packet.PS.b, Packet.PS.c, Packet.PS.d,Packet.g);
    
    return 0;
}

