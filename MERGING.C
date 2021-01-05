#include<stdio.h>
#include<conio.h>
void main()
{
int a1[50],a2[50],a3[100],m,n,j,i,k=0;
clrscr();
  printf("\n Enter the size of array a1:");
  scanf("%d",&m)
  printf("\n Enter sorted elements of a1:\n");
  for(i=0;i<m;i++)
  {
     scanf("%d",&a1[i]);
  }
    printf("\n Enter the size of array a2:");
    scanf("%d",&n);
    printf("\n Enter the sorted elements of a2:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a2[i]);
    }
     i=0;
     j=0;
     while(i