/*Write a program to check a C program for rudimentary syntax errors like 
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and double, 
escape sequences, and comments.*/
#include <stdio.h>
  #define LIMIT 500
  char longest[LIMIT];
 void     main()
 {
 int len=0;
 int max=0;
 int lent;
 char s[LIMIT];




   int i,j,k,l,m=0;
   char c;
   clrscr();
   printf("Enter ur code\n");
   for (i=0; i < LIMIT && (c=getchar())!=EOF; i++)
   {



    if (c=='('||c==')')
    j++;

    if (c=='{'||c=='}')
    k++;
    if (c=='"')
    l++;
    if (c==39)
    m++;
    s[i]=c;
   }

   s[i] = '\0';
   if (j%2!=0)
   printf("\nparentheses missing syntax error");
   if (k%2!=0)
   printf("\n braces missing syntax error");
      if(l%2!=0)
     printf("\n double quotes missing syntax error");
   if (m%2!=0)
   printf("\n single quotes missing syntax error");
    printf("\n%s", s);
  getch();
   }

