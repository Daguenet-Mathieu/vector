#include "vactor.h"

char	**copy_array(char **array)
{
    const size_t    size = array_size(array);
    char            **dest;
    int             i;

    dest = malloc((size + 1) * sizeof(char *));
    if (!dest)
        return (NULL);
    i = 0;
    while(i < size)
    {
        dest[i] = ft_strdup(array[i])
        if (!dest[i])
        {
            free_array(dest);
            return (NULL);
        }
        i++;
    }
    dest[i] = NULL;
    return (dest);
}
