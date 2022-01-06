#include  "get_next_line.h"

static  char  *ft_tail(char *tail, int *n)
{
  char  *str;
  
  str = ft_substr(*tail, *n + 1, ft_strlen(tail));
  free (tail);
  return (str);
}

static  char  *ft_line(char *line, int *n)
{
  int i;
  char  *line;
  
  i = 0;
  while (tail[i] != '\n', tail[i])
    i++;
  line = ft_substr(tail, 0, i + 1);
  *n = i;
  return (line);
}

if(!*tail)
