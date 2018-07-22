 /*Write a function htoi(s), which converts a string of stradecimal digits (including an optional 0x or 0X)
 into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {


 char str[20];
     int dec;
clrscr();
 printf("\nEnter a hexadecimal digit 0-9,A-F\n");
 gets(str);
 dec=   htoi(str);
  printf("\ndecimal of the hexadecimal ( %s ) is =%d",str,dec);
	    getch();
 }


	  int  htoi(char str[])
	   {
	   unsigned long dec=0;
	   unsigned long res,len,i;
	 len= strlen(str);
	 len--;
	 for (i=0; str[i]!='\0' ;i++)

		 {
		 if (str[i]>='0' && str[i]<='9')
			 res=str[i] - 48;
		else if (str[i]>='a' && str[i]<='f')
			 res=str[i] - 97 + 10;

		 dec+= res*pow(16,len);
		 len--;
		}
		return dec;
		}

