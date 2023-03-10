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
		int Fib(int);
		printf("Fib[%d] = %d\n\n", n, Fib(n));
	}

}

/*** iterative algorithm
int Fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int nFib0 = 0, nFib1 = 1, nFib;
	for (int i = 2; i <= n; i++) {
		nFib = nFib0 + nFib1;
		nFib0 = nFib1;
		nFib1 = nFib;
	}
	return nFib;
}
****/

/*** recursive algorithm ***/
int Fib(int n)
{
	// [일반규칙] f(n) ::= f(n-1) + f(n-2)
	// [진행방향] n이 1 또는 2 감소
	// [중단조건] n이 0이면 단순해 0, 1이면 단순해 1
	return 0;
}
