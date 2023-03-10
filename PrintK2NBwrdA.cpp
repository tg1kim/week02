#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	while (1) {
		int k, n;
		printf("k ? ");
		scanf("%d", &k);
		if (k < 0)
			break;
		printf("n ? ");
		scanf("%d", &n);
		if (k > n)
			break;
		int PrintK2NBwrd1(int k, int n);
		int PrintK2NBwrd2(int k, int n);
		int PrintK2NBwrd3(int k, int n);
		int PrintK2NBwrd4(int k, int n);
		int PrintK2NBwrd5(int k, int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NBwrd1(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NBwrd2(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NBwrd3(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NBwrd4(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NBwrd5(k, n));
	}
}

int PrintK2NBwrd1(int k, int n)		// n-1개, 1개
{
	if (k > n)
		return 0;
	printf("%d ", n);
	return PrintK2NBwrd1(k, n - 1) + n;
}

int PrintK2NBwrd2(int k, int n)		// 1개, n-1개
{
	if (k > n)
		return 0;
	int nSum = PrintK2NBwrd2(k + 1, n);
	printf("%d ", k);
	return k + nSum;
}

int PrintK2NBwrd3(int k, int n)		// n/2개, 1개, n/2개
{
	if (k > n)
		return 0;
	int nMdl = (k + n) / 2;
	int nSum = PrintK2NBwrd3(nMdl + 1, n);
	printf("%d ", nMdl);
	return PrintK2NBwrd3(k, nMdl - 1) + nMdl + nSum;
}

int PrintK2NBwrd4(int k, int n)		// n/3개, 1개,  n/3개
{									// n-2, n-1, n+0, n+1
	int nSum = 0;					// |    |    |    | 
	if (k >= n)	{					// k	k	 k    k
		if (k == n) {				// 3개  2개	 1개  0개
			printf("%d ", n);		// 중단조건: 1개(k == n)
			nSum = n;
		}
		return nSum;
	}
	// 최소 2개는 필요
	int t = n - k + 1, x = k + t / 3, y = k + 2 * t / 3;
	nSum = PrintK2NBwrd4(y + 1, n);
	printf("%d ", y);
	nSum += PrintK2NBwrd4(x + 1, y - 1);
	printf("%d ", x);
	nSum += PrintK2NBwrd4(k, x - 1);
	return nSum + x + y;
}

int PrintK2NBwrd5(int k, int n)		// n/4개, 1개, n/4개, 1개, n/4개, 1개, n/4개
{									// n-3, n-2, n-1, n+0, n+1
	int nSum = 0;					// |    |    |    |    |
	if (k > n)						// k    k	 k	  k	   k
		return 0;					// 4개	3개	 2개	  1개  0개
	if (k >= n - 1) {				// 중단조건: 1개(k == n) 또는 2개(k == n-1)
		if (k == n - 1) {
			printf("%d ", n);
			nSum = n;
		}
		printf("%d ", k);
		return nSum + k;
	}
	// 최소 3개는 필요
	int t = n - k + 1, x = k + t / 4, y = k + 2 * t / 4, z = k + 3 * t / 4;
	nSum = PrintK2NBwrd4(z + 1, n);
	printf("%d ", z);
	nSum += PrintK2NBwrd4(y + 1, z - 1);
	printf("%d ", y);
	nSum += PrintK2NBwrd4(x + 1, y - 1);
	printf("%d ", x);
	nSum += PrintK2NBwrd4(k, x - 1);
	return nSum + x + y + z;
}