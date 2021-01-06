#include <stdio.h>

int gugudan(int firstNum, int secondNum) {
	int result = 0;
	result = firstNum * secondNum;
	return result;
}

int main(void) {
	int result;

	for (int firstNum = 1; firstNum <= 9; firstNum++) {
		printf("%d-------\n", firstNum);
		for (int secondNum = 1; secondNum <= 9; secondNum++) {

			printf("%d x %d = %d\n", firstNum, secondNum, gugudan(firstNum, secondNum));
		}
	}
}