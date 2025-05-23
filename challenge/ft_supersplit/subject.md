# Sujet : ft_supersplit



## Objectif

Écrire une fonction `ft_supersplit`, un `ft_split` mais **en utilisant un seul appel à `malloc`** pour allouer toute la mémoire nécessaire aux pointeurs et au contenu.

## Consignes

- La fonction doit avoir la signature suivante :

    ```c
    char **ft_supersplit(char const *s, char c);
    ```

- `s` est la chaîne à découper, `c` est le caractère séparateur.
- Le tableau return doit être terminé par un pointeur NULL.
- Un seul appel à `malloc` est autorisé pour toute l’allocation mémoire (tableau de pointeurs + contenu des chaînes).
- Vous pouvez utiliser les fonctions de la libft
- Ne rien allouer en trop

## Exemple

```c
char **tab = ft_supersplit("hello world 42", ' ');
// tab[0] -> "hello"
// tab[1] -> "world"
// tab[2] -> "42"
// tab[3] -> NULL
```

Bonne chance !