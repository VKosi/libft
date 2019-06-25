
#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
    int			i;
    size_t		len;
    i = 0;
    len = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
        {
            while (s[i] && s[i] != c)
				i++;
			len++;
		}
	}
	return (len);
}
