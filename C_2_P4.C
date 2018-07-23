 /*Write an alternative version of squeeze(s1,s2) that deletes each
 character in s1 that matches any character in the string s2. */
  void squeeze(char a[],char b[])  ;
 void main()
 {
	 char *a,*b;
	 clrscr();
	 printf(" \nEnter first string \n");
	 gets(a);
	  printf(" \nEnter second string \n");
	 gets(b);
	 printf(" \n***first string is :\t%s \nsecond string is :\t%s**\n ",a,b);
	  squeeze(a,b);
	  }
	 void squeeze(char a[],char b[])
	 {
	 int i,j,k=0;
	 for(j=0;b[j]!='\0';j++)
	   for (i=0;a[i]!='\0';++i)
	      if(b[j]==a[i])
		for (k=i;a[k]!='\0';k++)
		     a[k]=a[k+1];

	puts(a);
	getch();
 }
