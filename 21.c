#include<stdio.h>
void main()
{
    int s=0,n,n1,remainder;
    printf("enter value n");
    scanf("%d",&n);
    printf("\n enter value n1");
    scanf("%d",&n1);
    n1=n;
    while(n>0)
    {
        remainder=n%10;
        s=s+remainder*remainder*remainder;
        n=n%10;
    }
    if(n1==s)
    {
        printf("armstrong number");
    }
    else
    {
        printf("\n not armstrong number");
        
    }
}
