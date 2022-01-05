#include "get_next_line.h"

int  strlen(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
    return (i);
}
