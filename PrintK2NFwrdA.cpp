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
		int PrintK2NFwrd1(int k, int n);
		int PrintK2NFwrd2(int k, int n);
		int PrintK2NFwrd3(int k, int n);
		int PrintK2NFwrd4(int k, int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd1(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd2(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd3(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd4(k, n));
	}
}

int PrintK2NFwrd1(int k, int n)		// n-1개, 1개
{
	if (k > n)
		return 0;
	int nSum = PrintK2NFwrd1(k, n - 1);
	printf("%d ", n);
	return n + nSum;
}

int PrintK2NFwrd2(int k, int n)		// 1개, n-1개
{
	if (k > n)
		return 0;
	printf("%d ", k);
	return PrintK2NFwrd2(k + 1, n) + k;
}

int PrintK2NFwrd3(int k, int n)		//  n/2개, 1개, n/2개
{
	if (k > n)
		return 0;
	int nMdl = (k + n) / 2;
	int nSum = PrintK2NFwrd3(k, nMdl - 1);
	printf("%d ", nMdl);
	return PrintK2NFwrd3(nMdl + 1, n) + nMdl + nSum;
}

int PrintK2NFwrd4(int k, int n)		//  n/3개, 1개, n/3개, 1개, n/3개
{
	if (k > n)
		return 0;
	if (k == n) {
		printf("%d ", k);
		return k;
	}
	int nMdl1 = k + (n - k + 1) / 3, nMdl2 = k + 2 * (n - k + 1) / 3;
	int nSum = PrintK2NFwrd4(k, nMdl1 - 1);
	printf("%d ", nMdl1);
	nSum += PrintK2NFwrd4(nMdl1 + 1, nMdl2 - 1);
	printf("%d ", nMdl2);
	return PrintK2NFwrd4(nMdl2 + 1, n) + nMdl1 + nMdl2 + nSum;
}