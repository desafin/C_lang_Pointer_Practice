#include <stdio.h>

int main() {

	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char 형 변수의 주소크기 : %d\n", sizeof(&ch));//8
	printf("int 형 변수의 주소크기 : %d\n", sizeof(&in));//8
	printf("double 형 변수의 주소크기 : %d\n", sizeof(&db));//8


	printf("char 형 포인터의 주소크기 : %d\n", sizeof(ch));//1
	printf("int 형 포인터의 주소크기 : %d\n", sizeof(in));//4
	printf("double 형 포인터의 주소크기 : %d\n", sizeof(db));//8

	printf("char 형 포인터가 가리키는 변수 주소크기 : %d\n", sizeof(*pc));//1
	printf("int 형 포인터가 가리키는 변수 주소크기 : %d\n", sizeof(*pi));//4
	printf("double 형 포인터가 가리키는 변수 주소크기 : %d\n", sizeof(*pd));//8

}