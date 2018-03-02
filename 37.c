#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter a");
    scanf("%d",&a);
    printf("\t enter b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swap");
    printf("%d",a);
    printf("%d",b);
    
}
