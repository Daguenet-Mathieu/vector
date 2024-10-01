#ifndef VECTOR_H
# define VECTOR_H

# include <stdbool.h>
# include <stdlib.h>

typedef struct s_vector_string{
	char	*content;
	int		size;
	int		capacity;
	bool	error;
}t_vector_string;

typedef struct t_vector_array{
	char	**content;
	int		size;
	int		capacity;
	bool	error;
}t_vector_array;

//#utils functions

size_t  array_len(char **array);
size_t	ft_strlen(char *str);
size_t	array_size(char **array);
void	ft_memcpy(void *src, void *dest, size_t size);
char	**copy_array(char **array);
char	*ft_strdup(char *str);
void	free_array(char **array);

//#fonctions vector string

//initialise le vector string utiliser un vector string sans appeler cettefonction cause undefined behaviour
void			vector_string_init(t_vector_string *string);
//sert a reserver une taille definir pour la string une taille inferieure a la capacitee actuelle ne fera rien sinon la string est reallouee et le contenu preserve 
void			vector_string_reserve(t_vector_string *string, size_t size);
//la string est detruire 
void			vector_string_clear(t_vector_string *string);
//insert un char dans la string si taille insuffisante la taille sera reajustee
void			vector_string_insert_char(t_vector_string *string, char c, int index);
//insert une string dans la string si taille insuffisante la taille sera reajustee
void			vector_string_insert_string(t_vector_string *string, char *str, int index);
//enleve size caracteres a l'index donne dansla string
void			vector_string_erase(t_vector_string *string, int index, int size);//
//copy la string et retourne la copie, il s'agit d'une copy profonde une string avec le flag d'erreur levee ne sera pas copiee
t_vector_string	vector_string_copy(t_vector_string *string);//
//retourne la status d'erreur actuel de la string
bool			vector_string_get_error(t_vector_string *string);//

//#fonctions vector array

//initialise le vector array utiliser un vector array sans appeler cettefonction cause undefined behaviour
void			vector_array_init(t_vector_array *array);//
//sert a reserver une taille definir pour la array une taille inferieure a la capacitee actuelle ne fera rien sinon la array est reallouee et le contenu preserve 
void			vector_array_reserve(t_vector_array *array);
//le tableau est detruit
void			vector_array_clear(t_vector_array *array);
//insere une nouvelle ligne dans le tableau la copie est profonde
void			vector_array_insert_string(t_vector_array *array, char *array, int index);
//insere un tableau de string dans le tableau la copie est profonde
void			vector_array_insert_array(t_vector_array *array, char **array, int index);
//efface size ligne a l'index donne de l'array
void			vector_array_erase(t_vector_array *array, int index, int size);//
//produit une copie profonde de l'array si le flag d'erreur est leve ne sera pas copie
t_vector_array	vector_array_copy(t_vector_array *array);//
//retourne la status d'erreur actuel de l'array
void			vector_get_array_error(t_vector_string *string);//

#endif