#include <stdio.h>

int whereIsDot(int firstNum, int secondNum) {
	if (firstNum >0 && secondNum >0) {
		return 1;
	}
	if (firstNum < 0 && secondNum >0) {
		return 2;
	}
	if (firstNum < 0 && secondNum < 0) {
		return 3;
	}
	if (firstNum >0 && secondNum < 0) {
		return 4;
	}
}

int main(void) {
	int Xnum, Ynum;
	scanf_s("%d%d", &Xnum, &Ynum);

	printf("%d", whereIsDot(Xnum, Ynum));
}