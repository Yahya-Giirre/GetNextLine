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

static  char  *ft_read(int fd, char *tail)
{
   int  count_read;
   char buffer[BUFFER_SIZE + 1];
  
   count_read = 1;
   while (count_read > 0 && !ft_strchr(tail, '\n'))
   {
     count_read = read(fd, buffer, BUFFER_SIZE);
      if(count_read < 0)
        return (NULL);
     buffer(count_read) = '\0';
     if (!tail)
       tail = ft_substr(buffer, 0, count_read);
     else
       tail = ft_strjoin(tail, buffer);
   }
  return (tail);
}

char  *get_next_line(int fd)
{
  static  char  *tail;
  char  *line;
  int n;
  if  (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0))
    return (NULL);
  tail = ft_read(fd, tail);
  if(!*tail)
  {
    free(tail);
    tail = (NULL);
    return (NULL);
  }
  n = 0;
  line = ft_line(tail, &n);
  tail = ft_tail(tail, &n)
  return (line);
}
