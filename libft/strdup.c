char	*ft_strdup(char *c)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * ft_strlen(c) + 1);
	if (!ptr)
		return (NULL);
	return (ft_strcpy(ptr, c));
}