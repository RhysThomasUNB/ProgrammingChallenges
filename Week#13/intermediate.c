#include <stdio.h>
#include <stdlib.h>

int ArgSize( char * str)
{
  int count = 0;
  char curChar = str[0];

  while(curChar != '\0')
  {
    count++;
    curChar = str[count];
    //count++;
  }
  return (count - 1);
}

int main(int argc, char ** argv)
{
  if(argc > 1)
  {
    printf("#Arg: %d, Stirng: %s", argc, argv[1]);
    FILE * file_handle = fopen("reverse.txt", "w");
    if( file_handle == NULL)
    {
      printf("ERROR OPENING FILE");
      return 1;
    }
    char * string = argv[1];
    int i;
    int count = ArgSize(string);
    printf("%d " , count);
    for(i = ArgSize(string); i >= 0; i--)
    {
      fprintf(file_handle, "%c", string[i]);
      printf("Wrote: %c to file!\n", string[i]); 
    }  
  }
  return 0;
}
