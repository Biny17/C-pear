# Sujet d'exercice : Détecter le début d'un mot

Écrivez une fonction qui détecte si un caractère donné dans une chaîne de caractères correspond au début d'un mot. Un mot commence soit :

- au tout début de la chaîne si le premier caractère n'est ni un espace (`' '`) ni une tabulation (`'\t'`),
- soit le caractère juste après un espace ou une tabulation.

Un mot est donc une suite de caractères non séparés par des espaces ou des tabulations.

**Exemples :**

- Dans `"hello world"`, les indices 0 et 6 sont des débuts de mots (`'h'` et `'w'`).
- Dans `"  foo\tbar"`, les indices 2 et 6 sont des débuts de mots (`'f'` et `'b'`).

**Prototype :**

```c
int is_word_start(const char *str, int index);
```

Cette fonction retourne `1` si le caractère à l'indice `index` est le début d'un mot, sinon `0`.