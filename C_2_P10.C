/* Rewrite the function lower, which converts upper case 
 letters to lower case, with a conditional expression instead of if-else.*/
 #include<stdio.h>
 #include<conio.h>
 void convert(char c);
 void main()



 {


char c;
int i,l;
 printf("Enter a latter between A-Z");
 c=getchar();
 convert(c);
 }
 void convert(char c)
 {

	 (c>=65&&c<=90)?printf("%c",c+32):printf("retry enter letter between A-Z");
	 getch();
 }