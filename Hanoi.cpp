// hanoi.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main()
{
	while (true) {
		int nCtr;
		printf("Disks ? ");
		scanf("%d", &nCtr);			// 옮기는 탑의 층을 입력 받는다.
		if (nCtr <= 0)
			break;
		void hanoi(int nDisk, int nFrom, int nTo);
		hanoi(nCtr, 1, 2);			// 탑을 1에서 2로 옮기시요.
		putchar(10);
	}
}

void hanoi(int nDisk, int nFrom, int nTo)
{
	// [일반규칙] H(n,i,j) ::= H(n-1,i,x), H(1,i,j), H(n-1,x,j)
	// [진행방향] n이 1씩 감소
	// [중단조건] n==1, 단순해 "i --> j"를 출력
}
