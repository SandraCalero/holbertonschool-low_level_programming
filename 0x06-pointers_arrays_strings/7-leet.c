#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: a pointer to a string
 * Return: a string
 */
char *leet(char *s)
{   
  char let[] = "aAeEoOtTlL";
  char val[] = "4433007711";
  
  int i;
  int l;
    
  for (i = 0 ; s[i] != '\0' ; i++)
  {
    for (l = 0 ; let[l] != '\0' ; l++)
    {
      if (s[i] == let[l])
      s[i] = val[l];
    }

  }
    return (s);
}
