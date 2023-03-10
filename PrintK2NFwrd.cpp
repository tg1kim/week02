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
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd1(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd2(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd3(k, n));
	}
}

// k부터 n까지 출력하고 그들의 합을 반환한다
int PrintK2NFwrd1(int k, int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] ?
	[일반규칙] p(k,n) ::= ?
	[진행방향] ?
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}

int PrintK2NFwrd2(int k, int n)		// 1개와 나머지 n-1개의 순환
{
	/***
	[분할] ?
	[일반규칙] p(k,n) ::= ?
	[진행방향] ?
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}

int PrintK2NFwrd3(int k, int n)		//  n/2개, 1개, n/2개의 순환
{
	/***
	[분할] ?
	[일반규칙] p(k,n) ::= ?
	[진행방향] ?
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}