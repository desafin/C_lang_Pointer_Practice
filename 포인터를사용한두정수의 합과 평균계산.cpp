#include <stdio.h>


int main() {
	int a = 10;
	int b = 15;
	int total;

	double avg;

	int* pa;
	int* pb;

	int* pt = &total;

	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d , %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ���: %.1lf\n", *pg);


}
