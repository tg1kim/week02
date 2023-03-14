#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

void main()
{
	while (1) {
		int n;
		printf("n ? ");
		scanf("%d", &n);
		if (n < 0)
			break;
		int Fact(int);
		printf("%d! = %d\n\n", n, Fact(n));
	}
}

int Fact(int n)
{
	return 0;
}