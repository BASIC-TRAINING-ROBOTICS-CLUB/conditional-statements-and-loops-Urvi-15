#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("enter value of a =");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    printf("enter value of c=");
    scanf("%d",&c);
    if(a^2+b^2==c^2)
    {
        printf (it is right angle triangle);
    }
    else
    {
        printf("it is not a right angel triangle ");
    }
}