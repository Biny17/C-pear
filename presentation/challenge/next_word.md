# Exercice : Trouver le prochain mot

Écrivez une fonction en C dont le prototype est :

```c
int next_word(char **adress_of_char_pt);
```

## Objectif

La fonction doit avancer le pointeur passé en argument (`*adress_of_char_pt`) jusqu'au début du prochain mot dans la chaîne de caractères. Un mot est défini comme une suite de caractères non-espaces (`' '`, `'\t'`). 

- Si un mot est trouvé, la fonction retourne `1` et le pointeur pointe sur le premier caractère de ce mot.
- Si la fin de la chaîne est atteinte sans trouver de mot, la fonction retourne `0` et le pointeur pointe sur le caractère nul (`'\0'`).

## Exemple

```c
char *str = "   Hello   world";
char *ptr = str;

if (next_word(&ptr)) {
    // ptr pointe sur 'H'
}

if (next_word(&ptr)) {
    // ptr pointe sur 'w'
}

if (!next_word(&ptr)) {
    // ptr pointe sur '\0'
}
```
