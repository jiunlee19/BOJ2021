#include <stdio.h>

int main(void) {
	int N;
	int num[100];
	int sum = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%1d", &num[i]);	//������ ���ڸ��� �޾Ƶ��̱�
		sum += num[i];
	}
	printf("%d", sum);
}