#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

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
	// [일반규칙] n! = n*(n-1)!
	// [진행방향] n이 1 감소
	// [중단조건] n이 0이면 단순해 1
	return 0;
}