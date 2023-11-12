#include <stdio.h>

int main() {

	int a = 10;
	int b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;

	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;

	printf("변수 b 값 : %d\n", *pa);
}