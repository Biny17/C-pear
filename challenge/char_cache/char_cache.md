# Exercice : char_cache

## Objectif

Écrire une fonction en C nommée `char_cache` qui extrait et affiche 8 caractères cachés dans un `long`.

## Consignes

- La fonction doit avoir la signature suivante :

    ```c
    void char_cache(long cache);
    ```

- Le paramètre `cache` contient 8 caractères ASCII cachés, chacun occupant un octet du `long`.
- La fonction doit les afficher dans l'ordre, sans espace, sans newline

## Exemple

Si `cache` contient les caractères `'A'`, `'B'`, `'C'`, `'D'`, `'E'`, `'F'`, `'G'`, `'H'` (dans cet ordre, du plus significatif au moins significatif), l'appel suivant :
```c
char_cache(0x4847464544434241);
```
doit afficher :
```
ABCDEFGH
```

## Consignes

- Essayer de ne pas utiliser de tableaux ni de chaînes de caractères.
- Petit challenge: en une ligne avec write
