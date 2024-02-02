#include <stdlib.h>

int is_separator(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset ++;
    }
    return (0);
}

size_t  count_words(char *str, char *charset)
{
    size_t  count;
    int     found;

    while (*str)
    {
        if (is_separator(*str, charset))
            found = 0;
        else
        {
            if (!found)
            {
                count ++;
                found = 1;
            }
        }
        str ++;
    }
    return (count);
}

char**ft_split(char *str, char *charset)
{
    char    **strs;

    **strs = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));
    if (!strs)
        return (NULL);
    
    size_t  i;
    int     found;
    char    *start;

    i = 0;
    found = 0;
    start = str;
}