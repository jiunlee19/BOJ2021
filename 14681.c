#include <stdio.h>

bool checkPositiveNum(int num) {
	if (num > 0) true;
	else if (num < 0) false;
}

int whereIsDot(int firstNum, int secondNum) {
	if (firstNum == 1 && secondNum == 1) {
		return 1;
	}
	if (firstNum == 0 && secondNum == 1) {
		return 2;
	}
	if (firstNum == 0 && secondNum == 0) {
		return 3;
	}
	if (firstNum == 1 && secondNum == 0) {
		return 4;
	}
}

int main(void) {
	int Xnum, Ynum;
	scanf("%d%d", &Xnum, &Ynum);

	Xnum = checkPositiveNum(Xnum);
	Ynum = checkPositiveNum(Ynum);
	printf("%d", whereIsDot(Xnum, Ynum));
}