# Sujet d'exercice : Combien d'entiers entre deux adresses ?

Écrivez une fonction en C :

```c
size_t how_many_int(void *p1, void *p2);
```

Cette fonction reçoit deux pointeurs `void *p1` et `void *p2` tels que `p1 < p2`. Elle doit retourner combien de valeurs de type `int` peuvent être stockées entre ces deux adresses (excluant l'adresse `p2`).

**Contraintes :**
- `p1` sera toujours strictement inférieur à `p2`.
- Ne pas modifier les valeurs pointées.
- Ne pas utiliser de boucles.

**Exemple :**
Si la différence entre `p2` et `p1` est de 16 octets et que la taille d'un `int` est de 4 octets, la fonction doit retourner 4.