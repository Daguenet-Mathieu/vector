#include "vector.h"

void    vector_array_clear(t_vector_array *array)
{
    free_array(array->content);
    array->capacity = 0;
    array->size = 0;
    array->error = false;
    return ;
}