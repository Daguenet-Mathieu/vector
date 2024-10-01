#include "vector.h"

void    vector_string_clear(t_vector_string *string)
{
    free(string->content);
    string->capacity = 0;
    string->size = 0;
    string->error = false;
}
