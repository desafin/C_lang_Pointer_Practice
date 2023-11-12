//변수의 메모리 주소확인

#include <stdio.h>

int main() {

	int a;
	double b;
	char c;

	printf("int 형의 변수의 주소 : %u \n", &a);
	printf("double 형의 변수의 주소 : %u \n", &b);
	printf("char 형의 변수의 주소 : %u \n", &c);

}