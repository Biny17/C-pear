//my updated version:
//but with an intermediate variable would be a better practice

// TODO: separate the tester and add a makefile
#include <stdlib.h>

size_t generate_Pattern(char c, int per_line, int lines, char** buffer)
{
	int i = 0;
	int j = 0;
	if (per_line <= 0 || lines <= 0)
	{
		*buffer = NULL;
		return 0;
	}
	*buffer = malloc(sizeof(char) * (per_line * lines + lines + 1));
	if (!*buffer)
		return (0);
	char *orig = *buffer;
	while (i < lines)
	{
		j = 0;
		while (j < per_line)
		{
			**buffer = c;
			(*buffer)++;
			j++;
		}
		**buffer = '\n';
		i++;
		(*buffer)++;
	}
	**buffer = '\0';
	*buffer = orig;
	return (per_line * lines + lines);
}

//TESTER

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

void buildExpected(char c, int per_line, int lines, char **expected)
{
	if (per_line <= 0 || lines <= 0) {
		*expected = NULL;
		return;
	}
	size_t total = per_line * lines + lines;
	*expected = malloc(total + 1);
	char *p = *expected;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < per_line; j++) {
			*p++ = c;
		}
		*p++ = '\n';
	}
	*p = '\0';
}

void test_case(int test_id, char c, int per_line, int lines)
{
	char *buffer = NULL;
	char *expected = NULL;

	buildExpected(c, per_line, lines, &expected);

	size_t size = generate_Pattern(c, per_line, lines, &buffer);

	if (expected == NULL) {
		assert(buffer == NULL);
		assert(size == 0);
		printf("Test %d PASSED (invalid input handled)\n", test_id);
	} else {
		assert(buffer != NULL);
		assert(size == strlen(expected));
		assert(strcmp(buffer, expected) == 0);
		printf("Test %d PASSED\n", test_id);
	}

	free(buffer);
	free(expected);
}

int main()
{
	test_case(1, '*', 3, 2);
	test_case(2, '#', 5, 4);
	test_case(3, '@', 1, 1);
	test_case(4, 'X', 10, 1);
	test_case(5, 'O', 1, 10);
	test_case(6, '*', 0, 2);
	test_case(7, '*', 3, 0);
	test_case(8, '*', -1, 2);
	test_case(9, '*', 2, -3);

	printf("All tests completed.\n");
	return 0;
}
