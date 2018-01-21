#include<stdio.h>
void main()
{
int a,b,N;
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
N=a<b;
N<100000?printf("positive"):printf("negative");
}
