//포인터 선언과 사용
#include <stdio.h>

int main() {
	int a;//일반 변수
	int *pa;//포인터 변수

	pa = &a;//포인터에 주소 a대입
	*pa = 10;//포인터로 변수 a 에 10 대입

	
	printf("포인터로 a 값을 출력 : %d \n", *pa);
	printf("변수명으로 a 값을 출력 : %d \n", a);

}