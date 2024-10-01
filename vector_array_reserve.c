#include "vector.h"

void    vector_array_reserve(t_vector_array *array, int size)
{
    char    **tmp;

    if (array->capacity < size)
    {
        tmp = malloc((size + 1) * sizeof(char*));
        if (!tmp)
        {
            array->error = true;
            return ;
        }
        if (array->size)
        {
            ft_memcpy(array->content, tmp, array->size * sizeof(char *));
            tmp[array->size] = NULL;
            free(array->content);
        }
        array->content = tmp;
        array->capacity = size;
    }
}
