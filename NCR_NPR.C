#include<conio.h>
#include<stdio.h>
void main()
{
  int n,r;
  void ncr(int,int);
  void npr(int,int);
  clrscr();
  printf("enter a number of items:");
  scanf("%d",&n);
  printf("enter items being chosen at a time:");
  scanf("%d",&r);
  ncr(n,r);
  npr(n,r);
  getch();
}
void ncr(int n,int r)
{
  int ncr=fact(n)/(fact(r)*fact(n-r));
  printf("%dC%d=%d\n",n,r,ncr);
}
void npr(int n,int r)
{
  int npr=fact(n)/fact(n-r);
  printf("%dP%d=%d\n",n,r,npr);
}
int fact(int n)
{ int i,p=1;
  for(i=1;i<=n;i++)
  {  p*=i;
  }
  return p;
}