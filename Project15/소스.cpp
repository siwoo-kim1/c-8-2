#include <stdio.h>

int main() {

	int data1 = 10;
	int data2 = 20;
	int sum = 0;

	int* p = &data1;
	*p = 100;
	sum += *p;

	p = &data2;
	*p = 200;
	sum += *p;

	printf("sum�� �� = %d\n", sum);







}