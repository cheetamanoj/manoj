#include<stdio.h>
void main()
{
    char r[10],b[10];
    int c[100],d[100],i,n,n1;
    printf("Enter a string 1");
    scanf("%s",&r);
    printf("\nEnter a string 2");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=r[i];
        d[i]=b[i];
    }
    n=0;
    n1=0;
    for(i=0;r[i]!='\0';i++)
    {
        n+=c[i];
        n1+=d[i];
    }
    if(n>=n1)
    {
        printf("%s",r);
    }
    else
    {
        printf("%s",r);
    }
}
