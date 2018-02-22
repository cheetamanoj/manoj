 #include<stdio.h>
int main()
{
 int i;
 int count_word=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_word++;
   if(str[i]==' ')
 }
 printf("\nNumber of characters in string : %d",count_word);
 getch();
 return 0;
}
