#include <stdio.h>
#include <string.h>
#define ASCII_a 97 //소문자 a의 아스키값이 97

int main(void) {
	char word[100] = { NULL };
	int wword[100] = {0, };
	int alpha[26] = {0, };
	int cnt = 0;

	scanf_s("%s\n", word);

	for (int i = 0; i < strlen(word); i++) {
		wword[i] = (int)word[i] - ASCII_a;
	}
	for (int i = 0; i < strlen(word); i++) {
		if (alpha[wword[i]] == 0) {
			alpha[wword[i]] = cnt;
			cnt++;
		}
	}

	for (int i = 0; i < strlen(word); i++) {
		printf("%d", alpha[i] - 1);
	}

}
/* 알파벳 26개
나는 입력받아서 글자 길이만큼 for문을 돌리려하였으나,
다른 사람은 알파벳 a부터 z까지 돌려서 체크하는 방식으로 해결함*/