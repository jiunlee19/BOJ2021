#include <stdio.h>

int main(void) {
	char what;

	scanf_s("%c",&what); //문자형으로 받아들이고
	printf("%d", what); //받아들인 문자를 정수형으로 출력하면 된다.
	return 0;
}
