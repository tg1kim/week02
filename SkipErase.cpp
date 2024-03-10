#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)
#define N	1000


void main()
{
	while (1) {
		printf("? ");
		int n;
		scanf("%d", &n);
		if (n <= 0 || n > N)
			break;
		int SkipEraser1(int n);
		int SkipEraser2(int n);
		printf("Simulation: %d\n",   SkipEraser1(n));
		printf(" Recursion: %d\n\n", SkipEraser2(n));
	}
	printf("Bye, ...\n");
}

int SkipEraser1(int n)
{
	int nNecklace[N];											// ����̸� �迭�� �����Ѵ�(0���� n-1����)
	for (int i = 0; i < n; i++)									//�����  n���� ������ 1���� n���� �ʱ�ȭ �Ѵ�
		nNecklace[i] = i + 1;
	while (n > 1) {
		while (nNecklace[nNdx = (nNdx + 1) % n] == 0);			// skip
		nNecklace[nNdx] = 0;									// erase
		while (nNecklace[nNdx = (nNdx + 1) % n] == 0);			// for skip
	}
	return nNecklace[0];
}

int SkipEraser2(int n)									// ��ȯ �Լ��� �ۼ�
{
	// [�Ϲݱ�Ģ] f(n) ::= 2f(n/2) +(-) 1 ;; n�� ¦�� -, Ȧ�� +
	// [�������] n�� ������ ����
	// [�ߴ�����] n�� 1�̸� �ܼ��� 1
	return 0;
}