#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	while (1) {
		printf("n ? ");
		int n;
		scanf("%d", &n);
		if (n < 0)
			break;
		int PrintToNFwrd(int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintToNFwrd(n));
	}
}

int PrintToNFwrd(int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] n-1, 1
	[일반규칙] p(n) ::= t=p(n-1), n을 출력, t+n을 반환
	[진행방향] n이 1씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	int nSum = PrintToNFwrd(n - 1);
	printf("%d ", n);
	return n + nSum;
}