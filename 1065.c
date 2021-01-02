#include <stdio.h>
#define underHundred 99

int numlong(int N) {
	int count = 0;

	for (int i = 0; i < 4; i++) {
		if ((N / 100) == 0) count = 2;
		else count = 3;
	}

	return count;
}

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
	int count;
	int hansu;

	scanf_s("%d", &N);
	count = numlong(N);
	if (count > 2) hansu = howmany(N);
	else hansu = N;
	printf("%d", hansu);
}