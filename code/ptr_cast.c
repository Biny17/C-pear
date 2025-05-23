#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*surprise()
{
	void	*p;

	p = calloc(9, 1);
	if (!p)
		return (NULL);
	*(long*)p = -9223372036854750623;
	// équivalent à
	// memcpy(p, "ab\x00\x00\x00\x00\x00\x80", 9);
	return (p);
}

int	main(void)
{
	void			*ptr;
	long			long_nbr;
	char			str[8];
	int				int_nbr;
	char			letter;
	unsigned long	ulong_nbr;
	double			double_nbr;

	ptr = surprise();
	long_nbr = *((long *)ptr);
	int_nbr = *((int *)ptr);
	letter = *((char *)ptr);
	ulong_nbr = *((unsigned long *)ptr);
	double_nbr = *((double *)ptr);
	memcpy(str, ptr, 8);
	printf("en long: %ld\n", long_nbr);
	printf("en ulong: %lu\n", ulong_nbr);
	printf("en int: %d\n", int_nbr);
	printf("en str: %s\n", str);
	printf("en char: %c\n", letter);
	printf("en ascii: %d\n", letter);
	printf("en hexa: %#lx\n", long_nbr);
	printf("en double: %lf\n", double_nbr);
	free(ptr);
	return (0);
}
