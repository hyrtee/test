#include <stdio.h>

static int func(int a)
{
	int b = 1;

	a += b;

	return a;
}

int main()
{
	size_t i, sum = 5;

	sum = func(sum);
	for (i = 0; i < sum; ++i) {
		printf("hello world\n");
	}

	return 0;
}
