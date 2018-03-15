#include<stdio.h>
int sum(int c,int d)
{
	int sum=0;
	sum=c+d;
	printf("%d",sum);
	return 0;
}
void main()
{
int c,d;
printf("TO FIND THE SUM OF TWO NOS\n");
	scanf("%d%d",&c,&d);
	sum(c,d);
}
