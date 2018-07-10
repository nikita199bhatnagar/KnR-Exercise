 //Write a program to remove blanks and tabs from each line of input, and to delete entirely blank lines.  .
  #include <stdio.h>
  #define LIMIT 500
  int input(char line[], int maxline);
    char all[20][50];
   void store(int s[]);
   void     main()
 {
 int len=0;
  char curr[LIMIT];
 clrscr();

	   while ((len = input(curr, LIMIT)) > 0)
		   if (len > 8)

		     store(curr);
 getch();
 }


   int input(char s[],int limit)
   {
   int i;
   char c;
   for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; i++)
    {
    if(c==' ')
    s[i]='\b';

      s[i] = c;
      if (c == '\n')
	   {
	   s[i] = c;
	   i++;
	   }
	   else if(c=='\t')
		   s[i]='\b';
		   else if(c==' ')
		   s[i]='\b';
		   }
     s[i] = '\0';
     return i;

  }
	  void   store(int s[])
	     {
	     
	      strcpy(all,s);
	      printf("%s",all);
	      }
	 
