#include "get_next_line.h"

int  ft_strlen(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
    return (i);
}

char  ft_strchr(const char *str, int c)
{
  char  *s;
  
  s = (char *)str;
  if (!str)
    return (NULL);
  while (*s && *s != (unsigned char)c)
    s++;
  if(*s == (unsigned char)c)
    return (s);
  return (NULL);
}

char  ft_substr(char *s, int start, int len)
{
  int i;
  int j;
  char  *dest;
  
  i = 0;
  j = 0;
  dest = (char *)malloc(sizeof(char) * (len + 1));
  if (!dest)
    return (NULL);
  while (s[i])
  {
     if (i >= start && j < len)
       dest[j++] = s[i];
    i++;
  }
  dest[j] = '\0';
  return (dest);
}
char ft_strjoin(char *str1, char *str2)
{
  int i;
  int j;
  char  *dest;
  
  i = 0;
  j = 0;
  if (s1! || s2!)
    return (NULL);
  while (s1[i])
  {
    dest[j] = s1[i];
    i++;
  }
  while (s2[i])
  {
    dest[i + j] = s2[j];
    j++;
  }
  free (s1);
  dest[i + j] = '\0';
  return (dest); 
}
