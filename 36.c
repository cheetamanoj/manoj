#include<stdio.h>

#include<string.h>
void main()
{
int i; 
 int count=0;
char a[100];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	
if(digit(a[i]))
{
count++;
}
}
printf("count: %d ",count);

}
