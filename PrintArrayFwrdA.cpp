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
		int PrintArrayFwrd1(int a[], int n);
		int PrintArrayFwrd2(int a[], int n);
		int PrintArrayFwrd3(int a[], int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayFwrd1(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayFwrd2(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayFwrd3(arr, n));
	}
}

int PrintArrayFwrd1(int a[], int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] n-1, 1
	[일반규칙] p(a,n) ::= t=p(a,n-1), a[n-1]을 출력, t+a[n-1]을 반환
	[진행방향] n이 1씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	int nSum = PrintArrayFwrd1(a, n - 1);
	printf("%d ", a[n - 1]);
	return a[n - 1] + nSum;
}

int PrintArrayFwrd2(int a[], int n)		// 1개와 나머지 n-1개의 순환
{
	/***
	[분할] 1, n-1
	[일반규칙] p(a,n) ::= a[0]를 출력, t=p(a+1,n-1), t+a[0]을 반환
	[진행방향] n이 1씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	printf("%d ", a[0]);
	return PrintArrayFwrd1(a + 1, n - 1) + a[0];
}

int PrintArrayFwrd3(int a[], int n)		// n/2개, 1개, n/2개의 순환
{
	/***
	[분할] n/2, 1, n/2
	[일반규칙] p(a,n) ::= m=n/2, t1=p(a,m), a[m]을 출력, t2=p(a+m+1,n-m-1), t1+a[m]+t2을 반환
	[진행방향] n이 절반씩 감소
	[중단조건] n==0
	[단순해] 출력은 없고, 0을 반환
	***/
	if (n == 0)
		return 0;
	int nMdl = n / 2;
	int nSum = PrintArrayFwrd3(a, nMdl);
	printf("%d ", a[nMdl]);
	return PrintArrayFwrd3(a + nMdl + 1, n - nMdl - 1) + a[nMdl] + nSum;
}