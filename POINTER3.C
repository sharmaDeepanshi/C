#include<stdio.h>
#include<conio.h>
void main()
{ int i,sum=0;
  int a[10];
  int *b;
  clrscr();
  b=&a[0];
  printf("Enter array elements:");
  for(i=0;i<10;i++)
  {
      scanf("%d ",b+i);
  }
  b=a;
  printf("\nArray elements:");
  for(i=0;i<10;i++)
  {
       printf("%d ",*(b+i));
       sum+=*(b+i);
  }
  printf("\nSum of array elements:%d",sum);
  getch();
}
