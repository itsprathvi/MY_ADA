#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int stringmatching(char text[], char pattern[])
{
    int i, j, e, text_length, pattern_length, position = -1;

    text_length    = strlen(text);
    pattern_length = strlen(pattern);

    if (pattern_length > text_length)
    {
      return -1;
    }

    for (i = 0; i <= text_length - pattern_length; i++)
    {
      position = e = i;

      for (j = 0; j < pattern_length; j++)
      {
        if (pattern[j] == text[i])
        {
          e++;
        }
        else 
        {
          break;
        }
      }
      if (j == pattern_length)
      {
        return position;
      }
    }
    return -1;
}

int main()
{
    char p[100]="aaabbcbaaaa";
    char q[100]="bbc";
    int result = stringmatching(p,q);

    if(result!=-1)
    {
        printf("Found at Location : %d\n",result+1);
    }
    else
    {
        printf("Not found!\n");
    }
    return 0;
}