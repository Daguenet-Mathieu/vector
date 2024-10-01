char	*ft_strdup(char *str)
{
    char            *dest;
    size_t          i;
    const size_t    size = ft_strlen(str);

    dest = malloc(sizeof(char) * (size + 1));
    if (!dest)
        return (NULL);
    ft_memcpy(str, dest, size);
    dest[size] = 0;
    return (dest);
}