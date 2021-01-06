#include <stdio.h>
#define N 10001

int arr[N];

int constructor(int i) {
	int notSelfnumber=i; //�ڱ��ڽ��� ������ �ʾƼ� �ڲ� ����������!!!

	while (1) {
		if (i == 0) break;

		notSelfnumber += (i % 10);
		i = i / 10;
	}

	return notSelfnumber;
}	//������ �� ���� �����

int main() {
	int howlong;
	int notSelfnumber;

	for (int i = 0; i < N; i++) {
		arr[i] = 1;
	}
	for (int i = 1; i < N; i++) {
		notSelfnumber = constructor(i);
		if(notSelfnumber<=N) //10000���� ū ���� ����� �ʿ����
			arr[notSelfnumber] = 0;
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] == 1) printf("%d\n", i);
	}

	return 0;
}