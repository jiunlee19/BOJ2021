#include <stdio.h>
#define underHundred 99

int howmany(int N) {
	int arr[1000];
	int count = underHundred;
	int a,b,c;

	for (int i = 100; i <= N; i++) {
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;

		if (c-b == b-a) count++;
	}

	return count;
}

int main(void) {
	int N;
	int hansu;

	scanf_s("%d", &N);
	if (N<100) hansu = N;
	else hansu = howmany(N);
	printf("%d", hansu);
}