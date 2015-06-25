#include "stdio.h"
#include "stdlib.h"

char curString[];

int stringLength( char * str)
{
  int count = 0;
  while( str[count] != '\0') count++;
  return count;
}

void swap(char[] str, int i, int j)
{
   char temp = str[i];
   str[i] = str[j];
   str[j] = str[i];
}

void permutations( char * str, int length, int pos)
{
  if(pos == length)
  {
    printf("%s", curString);
  }
  else
  {
    int i;
    for(i = pos; i < length; i++)
    {i
      swap(curString, i, pos);
    }
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  if(argc >= 2)
  {
    char * userIn = argv[1];
    int strLen = stringLength( userIn );
    curString = malloc(sizeof(char) * 100);
    printf("Input: \"%s\", String Length: %d\n", userIn, strLen);
    permutations(userIn, strLen, 0);
  }
  else
  {
    printf("This function requires a String to permutate!");
  }
  printf("Hello Sanora\n");
}
