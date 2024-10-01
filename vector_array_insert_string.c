#include "vector.h"

void    vector_array_insert_string(t_vector_array *array, char c, int index)
{
    if (array->size + 1 >= array->capacity)
    {
        vector_array_reserve(array, (array->size + 1) * 2);
        if (array->error)
            return ;
    }
    array->content[array->size] = c;
    array->size += 1;
    array->content[array->size] = 0;
}
