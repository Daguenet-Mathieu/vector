#include "vector.h"

void    vector_string_insert_char(t_vector_string *string, char c, int index)
{
    if (string->size + 1 >= string->capacity)
    {
        vector_string_reserve(string, (string->size + 1) * 2);
        if (string->error)
            return ;
    }
    string->content[string->size] = c;
    string->size += 1;
    string->content[string->size] = 0;
}
