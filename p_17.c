// Revise the main routine ofthe longest-line program so it will correctly print the
//length of arbitrary long in-put lines, and as much as possible of the text.
  #include <stdio.h>
  #define LIMIT 500



   int input(char line[], int maxline);
   char all[20][50];
   void store(int s[]);
   int index=0;
   int i;
   void main()
   {
    int len=0;
     char curr[LIMIT];
     clrscr();
	printf("enter strings:\n");
	   while ((len = input(curr, LIMIT)) > 0)
		   if (len > 8)

		     store(curr);

			printf("all strings are which grater than 10 char...\n");
			for(i=0;i<index;i++)
			{
				printf("%d.%s",i+1,all[i]);
			}



 getch();
 }


   int input(char s[],int limit)
   {
   int i;
   char c;
   for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; i++)
     s[i] = c;
     {
      if (c == '\n')
	   {
	   s[i] = c;
	   i++;
	   }
     s[i] = '\0';
     return i;
    }
  }
	  void   store(int s[])
	     {

	      strcpy(all[index++],s);
				     }

