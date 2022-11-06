/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:36:16 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/31 08:22:40 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


 static size_t count_word(char const *s, char c)
{
    size_t  i = 0;
    size_t count = 0;
    while(s[i])
    {
      if(s[i] == c)
      {
          i++;
      }
      else
       { 
           count++;
           while(s[i] != c && s[i])
           {
                i++;
           }
       }
    }
    return(count + 1);
}

static size_t len_words(char const *a, char b)
{
    size_t i;
    size_t len_words;

    i = 0;
    len_words = 0;
    while(a[i])
    {
        if(a[i] == b)
        {
            i++;
        }
        else
        {
            while(a[i] != b && a[i])
            {
                i++;
                len_words++;
            }
            return (len_words);
        }
    }
    return(0);

}

char **ft_split(char const *s, char c)
{
    char **ptr;
    size_t count;
    int i = 0;


   count = 0;
    if(!s)
        return (NULL);
    ptr = malloc (sizeof(char *) * (count_word(s, c)));
    if(!ptr)
        return (0);
    while (s[i] == c)
            i++;
    while(s[i] && count < count_word(s, c) - 1)
    {
        while(s[i] == c)
                i++;
        if(s[i] != c)
        {
            ptr[count] = ft_substr(s, i, len_words(s + i, c));
            i += len_words(s + i, c) - 1;
        }
        count++;
        i++;
    }
    ptr[count] = NULL;
    return(ptr);
}

