#include<stdio.h>
void main()
{
int i,n,f1,f2,f3;
scanf("%d",n);
for(i=0;i<n;i++)
{
    f3=f1+f2;
    printf("%d",f3);
    f1=f2;
    f2=f3;
    
}
}
