//포인터는 가리키는 변수의 형태가 같을떄만 대입해야한다

#include <stdio.h>

int main() {

	int a = 10;
	int* p = &a;
	double *pd;

	pd = *p;//값을 포인터에 집어넣었다
	printf("%d\n",pd);

}