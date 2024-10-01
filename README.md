# vector

# Vector Library

## Description
Cette bibliothèque permet de manipuler des vecteurs dynamiques de chaînes de caractères (string) et de tableaux de chaînes de caractères (array). Elle contient plusieurs fonctions pour initialiser, gérer, insérer, supprimer et copier ces structures.

## Structures

### `t_vector_string`
Représente un vecteur dynamique de type `char *` (chaîne de caractères).

- `char *content`: Contenu de la chaîne.
- `int size`: Taille actuelle de la chaîne.
- `int capacity`: Capacité maximale avant une reallocation.
- `bool error`: Indique si une erreur s'est produite dans l'une des opérations.

### `t_vector_array`
Représente un vecteur dynamique de type `char **` (tableau de chaînes de caractères).

- `char **content`: Contenu du tableau de chaînes de caractères.
- `int size`: Taille actuelle du tableau.
- `int capacity`: Capacité maximale avant une reallocation.
- `bool error`: Indique si une erreur s'est produite dans l'une des opérations.

---

## Fonctions Utilitaires

### `size_t array_len(char **array)`
Retourne la longueur d'un tableau de chaînes de caractères.

### `size_t ft_strlen(char *str)`
Retourne la longueur d'une chaîne de caractères.

### `size_t array_size(char **array)`
Retourne la taille occupée par un tableau de chaînes.

### `void ft_memcpy(void *src, void *dest, size_t size)`
Copie `size` octets de la source vers la destination.

### `char **copy_array(char **array)`
Fait une copie profonde d'un tableau de chaînes de caractères.

### `char *ft_strdup(char *str)`
Duplique une chaîne de caractères.

### `void free_array(char **array)`
Libère la mémoire allouée pour un tableau de chaînes de caractères.

---

## Fonctions pour `t_vector_string`

### `void vector_string_init(t_vector_string *string)`
Initialise un vecteur de chaînes de caractères. **Important** : Utiliser un vecteur sans l'initialiser cause un comportement indéfini.

### `void vector_string_reserve(t_vector_string *string, size_t size)`
Réserve une taille spécifique pour le vecteur. Si la taille demandée est supérieure à la capacité actuelle, le contenu est réalloué et préservé.

### `void vector_string_clear(t_vector_string *string)`
Détruit le contenu du vecteur.

### `void vector_string_insert_char(t_vector_string *string, char c, int index)`
Insère un caractère à l'index donné dans la chaîne. Si la taille est insuffisante, elle est ajustée.

### `void vector_string_insert_string(t_vector_string *string, char *str, int index)`
Insère une chaîne de caractères à l'index donné dans le vecteur. La taille est ajustée si nécessaire.

### `void vector_string_erase(t_vector_string *string, int index, int size)`
Efface `size` caractères à partir de l'index donné dans la chaîne.

### `t_vector_string vector_string_copy(t_vector_string *string)`
Retourne une copie profonde de la chaîne. Si le flag d'erreur est levé, la chaîne ne sera pas copiée.

### `bool vector_string_get_error(t_vector_string *string)`
Retourne le statut d'erreur actuel du vecteur.

---

## Fonctions pour `t_vector_array`

### `void vector_array_init(t_vector_array *array)`
Initialise un vecteur de tableaux de chaînes de caractères. **Important** : Utiliser un vecteur sans l'initialiser cause un comportement indéfini.

### `void vector_array_reserve(t_vector_array *array, size_t size)`
Réserve une taille spécifique pour le tableau. Si la taille demandée est supérieure à la capacité actuelle, le contenu est réalloué et préservé.

### `void vector_array_clear(t_vector_array *array)`
Détruit le contenu du tableau.

### `void vector_array_insert_string(t_vector_array *array, char *str, int index)`
Insère une nouvelle chaîne de caractères à l'index donné dans le tableau (copie profonde).

### `void vector_array_insert_array(t_vector_array *array, char **array, int index)`
Insère un tableau de chaînes de caractères à l'index donné dans le tableau (copie profonde).

### `void vector_array_erase(t_vector_array *array, int index, int size)`
Efface `size` lignes à partir de l'index donné dans le tableau.

### `t_vector_array vector_array_copy(t_vector_array *array)`
Retourne une copie profonde du tableau. Si le flag d'erreur est levé, le tableau ne sera pas copié.

### `void vector_get_array_error(t_vector_string *string)`
Retourne le statut d'erreur actuel du tableau.

---

## Notes
- Cette bibliothèque utilise des copies profondes pour les chaînes et les tableaux, assurant que les modifications sur les originaux ne se répercutent pas sur les copies.
- Chaque fonction est conçue pour gérer des erreurs de manière robuste. Si une opération échoue, le flag `error` est activé et les fonctions de copie ne fonctionneront pas tant que ce flag est levé.
- Il est important de libérer les ressources allouées dynamiquement (ex. `vector_string_clear`, `vector_array_clear`, et `free_array`) pour éviter des fuites de mémoire.

---

## License
Ce projet est sous licence MIT.
