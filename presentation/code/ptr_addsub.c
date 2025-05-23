#include <stdio.h>

int	main(void)
{
	int		*int_ptr = (void*)64; // adresse arbitraire
	char	*char_ptr = (void*)64;
	long	*long_ptr = (void*)64;
	void	**ptr_ptr = (void*)64;

	// p = p + 1 <=> p += 1 <=> p++
	int_ptr = int_ptr + 1;
	char_ptr = char_ptr + 1;
	long_ptr = long_ptr + 1;
	ptr_ptr = ptr_ptr + 1;
	printf("int_ptr: %ld\n", int_ptr);
	printf("char_ptr: %ld\n", char_ptr);
	printf("long_ptr: %ld\n", long_ptr);
	printf("ptr_ptr: %ld\n", ptr_ptr);
}
