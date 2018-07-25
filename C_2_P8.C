/*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions*/
/*test cases:INPUT1    input2         OUTPUT
	       12         3               3
	       16	  2               4
		8	  2               2  */
#include<stdio.h>
#define total 32
 int rightrot(int x,int n);
void main()
{
 int x,n;
 clrscr();
 printf("\nEnter a number");
 scanf("%d",&x);
 printf("\nEnter the bit for shifting");
 scanf("%d",&n);
 printf("\nAfter Right Rotation no is :%d",rightrot(x,n));
 getch();
 }
 int rightrot(int x,int n)
 {
  int a,b;
  a=x>>n;
  b=x<<total-n;
  x=a|b;
  return x;
 }

