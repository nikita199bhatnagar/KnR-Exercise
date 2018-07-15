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




   int i;
   char c;
   printf("Enter ur code\n");
   for (i=0; i < LIMIT && (c=getchar())!=EOF; i++)
   {
   // s[i] = c;
	   if (c == '/')
		 {
		s[i] = '\b';

		}
		else
		s[i]=c;


   }

   s[i] = '\0';
    printf("\n%s", s);
  getch();
   }
