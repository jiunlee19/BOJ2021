#include <stdio.h>
#include <string.h>
#define ASCII_a 97 //�ҹ��� a�� �ƽ�Ű���� 97

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
/* ���ĺ� 26��
���� �Է¹޾Ƽ� ���� ���̸�ŭ for���� �������Ͽ�����,
�ٸ� ����� ���ĺ� a���� z���� ������ üũ�ϴ� ������� �ذ���*/