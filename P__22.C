/*Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter 
lines after the last non-blank character that occurs before the n-th column of input.*/
/*Write a program to remove all comments from a C program
. Don't forget to handle quoted strings and character constants properly. C comments don't nest. */
#include <stdio.h>
  #define LIMIT 500
   int input(char line[], int maxline);
   void copy(char to[], char from[]);
   char longest[LIMIT];
 void     main()
 {
 int len=0;
 int max=0;
 int lent;
 char s[LIMIT];




   int i,j=0;
   char c;
   clrscr();
   printf("Enter ur code\n");
   for (i=0; i < LIMIT && (c=getchar())!=EOF; i++)
   {
   // s[i] = c;

		s[i]=c;
		j++;
		if (j>20)
		{
		   s[i]='\n';
		   j=0;
		 }


   }

   s[i] = '\0';
    printf("\n%s", s);
  getch();
   }

