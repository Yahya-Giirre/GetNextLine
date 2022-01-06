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
     buf(count_read) = '\0';
     if (!tail)
       tail = ft_substr(buf, 0, count_read);
     else
       tail = ft_strjoin(tail, buf);
   }
}
if(!*tail)
