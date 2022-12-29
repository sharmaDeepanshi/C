#include<stdio.h>
#include<conio.h>
void input_matrix(int a[3][3],int r1,int c1)
{ int i,j;
  printf("\nEnter elements of matrix:");
  for(i=0;i<r1;i++)
  { for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
  }
}
void output_matrix(int a[3][3],int r1,int c1)
{ int i,j;
  printf("\nElements of matrix:\n");
  for(i=0;i<r1;i++)
  { for(j=0;j<c1;j++)
    {  printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
void sum_of_matrix(int a[3][3],int b[3][3],int c[3][3],int r1,int c1)
{ int i,j;
  printf("\nSum of matrix:\n");
  for(i=0;i<r1;i++)
  { for(j=0;j<c1;j++)
      { c[i][j]=a[i][j]+b[i][j];
	printf("%d ",c[i][j]);
      }
      printf("\n");
  }
}
void main()
{
 int a[3][3],b[3][3],c[3][3],r1,r2,r3,c1,c2,c3;
 void input_matrix(int [3][3],int,int);
 void output_matrix(int [3][3],int,int);
 void sum_of_matrix(int [3][3],int [3][3],int [3][3],int,int);
 clrscr();
 printf("Enter rows for 1st matrix:");
 scanf("%d",&r1);
 printf("\nEnter columns for 1st matrix:");
 scanf("%d",&c1);
 printf("\nEnter rows for 2nd matrix:");
 scanf("%d",&r2);
 printf("\nEnter columns for 2nd matrix:");
 scanf("%d",&c2);
 //input_matrix 1
 input_matrix(a,r1,c1);
 //input_matrix 2
 input_matrix(b,r2,c2);
 //output matrix
 output_matrix(a,r1,r2);
 output_matrix(b,r1,r2);
 //sum of matrix
 sum_of_matrix(a,b,c,r1,r2);
  getch();
}