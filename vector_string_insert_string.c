#include "vector.h"

void    vector_string_insert_string(t_vector_string *string, char *str, int index)
{
    const size_t size = ft_strlen(str);

    if (!string)
        return ;
    if (string->size + size >= string->capacity)
    {
        vector_string_reserve(string, (string->size + size) * 2);
        if (string->error)
            return ;
    }
    ft_memcpy(str, string->content + string->size, size);
    string->size += size;
    string->content[string->size] = 0;
}
