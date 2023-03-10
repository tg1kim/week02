#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)
#define N	25

void main()
{
	int arr[N];
	for (int i = 0; i < N; i++)
		arr[i] = i + 101;
	while (1) {
		int n;
		printf("n ? ");
		scanf("%d", &n);
		if (n < 0 || n > N)
			break;
		int PrintArrayBwrd1(int a[], int n);
		int PrintArrayBwrd2(int a[], int n);
		int PrintArrayBwrd3(int a[], int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd1(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd2(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd3(arr, n));
	}
}

int PrintArrayBwrd1(int a[], int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] n-1, 1
	[일반규칙] p(a,n) ::= a[n-1]을 출력, t=p(a,n-1), t+a[n-1]을 반환
	[진행방향] n이 1씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	printf("%d ", a[n - 1]);
	return PrintArrayBwrd1(a, n - 1) + a[n - 1];
}

int PrintArrayBwrd2(int a[], int n)		// 1개와 나머지 n-1개의 순환
{
	/***
	[분할] 1, n-1
	[일반규칙] p(a,n) ::= t=p(a+1,n-1), a[0]을 출력, t+a[0]을 반환
	[진행방향] n이 1씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	int nSum = PrintArrayBwrd1(a + 1, n - 1);
	printf("%d ", a[0]);
	return a[0] + nSum;
}

int PrintArrayBwrd3(int a[], int n)		// n/2개, 1개, n/2개의 순환
{
	/***
	[분할] n/2, 1, n/2
	[일반규칙] p(a,n) ::= m=n/2, t1=p(a+m+1,n-m-1), a[m] 출력, t2=p(a, m), t1+t2+a[m]을 반환
	[진행방향] n이 절반씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	int nMdl = n / 2;
	int nSum = PrintArrayBwrd3(a + nMdl+ 1, n - nMdl - 1);
	printf("%d ", a[nMdl]);
	return PrintArrayBwrd3(a, nMdl) + a[nMdl] + nSum;
}