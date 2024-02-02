#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int compare_str(char *str, char *to_find, int i, int j)
{
    while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
    {
        i++;
        j++;
    }
    return j;
}

char *ft_strstr(char *str, char *to_find)
{
    int i, j, match_start;
    j = 0;
    i = 0;
    if (*to_find == '\0')
        return str;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            match_start = i;
            j = compare_str(str, to_find, i, j);
            if (to_find[j] == '\0')
                return str + match_start;
            i = match_start;
            j = 0;
        }
        i++;
    }
    return NULL;
}

char *ft_strcpy(char *dest, char *src)
{
    char *original_dest = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return original_dest;
}

size_t ft_count_words(char const *s, char c)
{
    // Your implementation for counting words goes here.
}

char **ft_split(char *str, char *charset)
{
    int len = ft_strlen(str);
    int count = 0;
    int i = 0;
    while (i < len)
    {
        while (i < len && ft_strstr(charset, &str[i]) != NULL)
            i++;
        int new_str = i;
        while (i < len && ft_strstr(charset, &str[i]) == NULL)
            i++;
        if (i > new_str)
            count += 1;
    }

    // Allocate memory for the array of strings
    char **strs = (char **)malloc(sizeof(char *) * (count + 1)); // +1 for NULL at the end

    i = 0;
    int idx = 0;
    while (i < len)
    {
        while (i < len && ft_strstr(charset, &str[i]) != NULL)
            i++;

        int j = 0;
        char buffer[16384]; // Adjust the size according to your needs

        while (i < len && ft_strstr(charset, &str[i]) == NULL)
        {
            buffer[j] = str[i];
            i++;
            j++;
        }

        buffer[j] = '\0';

        // Allocate memory for the current string and copy the content
        strs[idx] = (char *)malloc(sizeof(char) * (j + 1));
        ft_strcpy(strs[idx], buffer);

        idx++;
    }

    // Set the last element of the array to NULL
    strs[count] = NULL;

    return strs;
}

int main()
{
    // Example usage
    char *str = "Hello World, how are you?";
    char *charset = " ,"; // Space and comma as delimiters
    char **result = ft_split(str, charset);

    // Printing the result
    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }

    // Don't forget to free the allocated memory
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
