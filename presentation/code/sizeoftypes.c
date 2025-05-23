#include <stdio.h>

int	main(void)
{
	printf("%s %lu\n", "sizeof(char):", sizeof(char));
	printf("%s %lu\n", "sizeof(int):", sizeof(int));
	printf("%s %lu\n", "sizeof(long):", sizeof(long));
	printf("%s %lu\n", "sizeof(void*):", sizeof(void*));
	printf("%s %lu\n", "sizeof(int**):", sizeof(int**));
	printf("%s %lu\n", "sizeof(size_t):", sizeof(size_t));
	printf("%s %lu\n", "sizeof(unsigned char):", sizeof(unsigned char));
	printf("%s %lu\n", "sizeof(unsigned int):", sizeof(unsigned int));
	printf("%s %lu\n", "sizeof(unsigned long):", sizeof(unsigned long));
}
