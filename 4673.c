#include <stdio.h>
#define N 10001

int arr[N];

int constructor(int i) {
	int notSelfnumber=i; //자기자신을 더하지 않아서 자꾸 에러났었음!!!

	while (1) {
		if (i == 0) break;

		notSelfnumber += (i % 10);
		i = i / 10;
	}

	return notSelfnumber;
}	//수열에 들어갈 숫자 만들기

int main() {
	int howlong;
	int notSelfnumber;

	for (int i = 0; i < N; i++) {
		arr[i] = 1;
	}
	for (int i = 1; i < N; i++) {
		notSelfnumber = constructor(i);
		if(notSelfnumber<=N) //10000보다 큰 경우는 기록할 필요없음
			arr[notSelfnumber] = 0;
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] == 1) printf("%d\n", i);
	}

	return 0;
}