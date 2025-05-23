#include <stdio.h>

int is_word_start(const char *str, int index);

int	main(int ac, char **av)
{
	int	i;
	int	nb_word;

	if (ac != 2)
		return (0);
	i = 0;
	nb_word = 0;
	while (av[1][i] != '\0')
	{
		nb_word += is_word_start(av[1], i);
		i++;
	}
	printf("Vous avez écrit %d mots\n", nb_word);
	return (0);
}
