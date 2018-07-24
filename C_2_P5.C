


/* Write the function any(s1,s2), which returns the first location in a string s1 where any
character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the location.) */
  /*Test cases:
   input1            input2        output
   ram                sharma        2
   abcdef             efghi         5
   123765             45643         6.
  */


 void any(char a[],char b[])  ;
 void main()
 {


	 int i,j;
	 char *a,*b;
	 clrscr();
	 printf(" \nEnter first string \n");
	 gets(a);
	  printf(" \nEnter second string \n");
	 gets(b);
	 printf(" \n***first string is :\t%s \nsecond string is :\t%s**\n ",a,b);
	 any(a,b);
	 }
	 void any(char a[],char b[])
	 {
	 int i,j;
	 for(j=0;b[j]!='\0';j++)
	   for (i=0;a[i]!='\0';++i)
	      if(b[j]==a[i])
	       {	printf(" \nlocation of matching char is :%d \n",i+1);
		    getch();
		    exit(0);
		 }
 }
