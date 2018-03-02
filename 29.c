#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
clrscr();
printf("Enter string:");
for(i=0;i<100;i++)
{
scanf("%c",&a[i]);
if(a[i]=='k')
{
break;
}
}
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
getch();
}
