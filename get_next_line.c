#include  "get_next_line.h"

static  char  *ft_tail(char *tail, int *n)
{
  char  *str;
  
  str = ft_substr(*tail, *n + 1, ft_strlen(tail));
  free (tail);
  return (str);
}
