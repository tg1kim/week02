#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

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
	return 0;
}

