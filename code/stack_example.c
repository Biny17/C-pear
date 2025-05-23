void func2(void)
{
	int y;

	y = 12;
}

int *func(void)
{
	int x;

	x = 5;
	return (&x);
}


int main(void)
{
	int *result;

	result = func();
	func2();
	printf("%d\n", *result);
}