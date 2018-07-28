/* Write a function escape(s,t) that converts characters like newline and tab into
   visible sequences like \n and \t as it copies the string t to s. Write a function
   for the other direction as well, converting escape sequences into the real characters. */
#include <stdio.h>

#define LEN 100

void escape(char s[], char t[]);
//void r_escape (char s[], char t[]);

void main()
{
  char s[LEN], t[LEN],  c;
  int i = 0;

  printf("Enter the string: ");
  for (i=0; i < LEN && (c=getchar())!=EOF; i++)
  s[i] = c;
  s[i] = '\0';
  escape(s, t);
  printf("\nThe escaped string: %s\n", t);

  getch();
}

void escape (char s[], char t[])
{
  int i,j;
  i =j= 0;

  while (s[i] != '\0')
    {
      switch (s[i])
	{
	case '\n':
	  t[j++] = '\\';
	  t[j++] = 'n';
	  i++;
	  break;
	case '\t':
	  t[j++] = '\\';
	  t[j++] = 't';
	  i++;
	  break;
	default:
	  t[j++] = s[i++];
	  break;
	}
    }
  t[j] = '\0';
}

