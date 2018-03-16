
#include<stdio.h>
int main(void)
{
  int c,b,temp;
  scanf("%d %d",&c,&b);
  temp=c;
  c=b;
  b=temp;
  printf("%d %d",c,b);
  
return 0;
}
