#include <stdio.h>

int main(void) {
	int N;
	int num=0,sum=0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%1d", &num);	//정수형 한자리씩 받아들이기
		sum += num;
	}
	printf("%d", sum);
}