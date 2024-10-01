#include "vector.h"

void    vector_array_insert_array(t_vector_array *array, char **array, int index)
{
    const size_t    size = array_size(array);
    int             i;
    if (array->size + tab_len >= array->capacity)
    {
        vector_array_reserve(array, (array->size + 1) * 2);
        if (array->error)
            return ;
    }
    i = 0;
    while(i < size)
    {
        array->content[array->size + i] = ft_strdup(array[i])
        if (array->content[array->size + i])
        {
            array->error = true;
            vector_array_clear(array);
            return ;
        }
        i++;
    }
    array->size += size;
    array->content[array->size] = NULL;
}
