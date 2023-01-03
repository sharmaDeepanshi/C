#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  void to_upper(char);
  void to_lower(char);
  clrscr();
  printf("Enter character:");
  scanf("%c",&a);
  if(a>=97 && a<=122)
  {
    to_upper(a);
  }
  else if(a>=62 && a<=90)
  {
    to_lower(a);
  }
  else
     printf("Please enter valid character");
  getch();
}
void to_upper(char a)
{
  a-=32;
  printf("%c",a);
}
void to_lower(char a)
{
  a+=32;
  printf("%c",a);
}
void is_upper(char a)
{
  if(a>=97 && a<=122)
  { printf("character is in UPPERCASE");
  }
  else{
    printf("character is not in UPPERCASE");
  }
}
void is_lower(char a)
{
   if(a>=65 && a<=90)
  {
     printf("character is in LOWERCASE");
  }
  else{
    printf("character is not in LOWERCASE");
  }
}