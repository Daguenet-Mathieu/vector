#include "vector.h"

void    vector_string_reserve(t_vector_string *string, int size)
{
    char    *tmp;

    if (string->capacity < size)
    {
        tmp = malloc((size + 1) * sizeof(char));
        if (!tmp)
        {
            string->error = true;
            return ;
        }
        if (string->size)
        {
            ft_memcpy(string->content, tmp, string->size * sizeof(char));
            tmp[string->size] = 0;
            free(string->content);
        }
        string->content = tmp;
        string->capacity = size;
    }
}
