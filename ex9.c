#include<stdio.h>
void main() 
{
   float num1,num2,num3;
    printf("enter number 1 : ") ;
    scanf("%f",&num1);
    printf("enter number 2 : ") ;
    scanf("%f",&num2);
    printf("enter number 3 : ") ;
    scanf("%f",&num3);
    printf("Output : \n\t%10.2f\n\t%-10.2f\n\t%10.2f",num1,num2,num3);
}