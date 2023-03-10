#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	while (1) {
		int n, r;
		printf("n ? ");
		scanf("%d", &n);
		if (n <= 0)
			break;
		printf("r ? ");
		scanf("%d", &r);
		if (n < r || r < 0)
			break;
		int Combi(int, int);
		printf("Combi(%d, %d) = %d\n\n", n, r, Combi(n, r));
	}
}

int Combi(int n, int r)
{
	// [일반규칙] C(n,r) ::= C(n-1,r) + C(n-1,r-1)
	// [진행방향] n 또는/그리고 r이 1 감소
	// [중단조건] n==r 또눈 r==0이면 단순해 1
	return 0;
}

