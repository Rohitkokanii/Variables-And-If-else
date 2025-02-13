// 6) print sum of cubes of digits
#include<stdio.h>

int main() {
	
	int num;
	int n1;
	int n2;
	int n3;

	printf("\nEnter No.to Seperate and Print : ");
	scanf_s("%3d", &num);

	n1 = num % 10;
	num /= 10;

	n2 = num % 10;
	num /= 10;

	n3 = num % 10;
	num /= 10;
	int sum = n1*n1*n1 + n2 *n2*n2 + n3*n3*n3;
	printf("Sum of Sub = %d", sum);
	printf("\n\n====================\n\n");
	return 0;
}