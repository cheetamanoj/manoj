#include<stdio.h>
#include<string.h>
void main()
{
char a[500];
int b = 0, c= 0, d = 0;
printf("Enter any string\n");
scanf("%s",a);
for(b= 0; a[b] !='\0'; b++)
{
c = c + 1;
}
for(b = 0; b <= c-1; b++)
{
if(a[b] == ' ')
{
d = d + 1;
}
}
printf("The number of space in the line are %d", d);
}
