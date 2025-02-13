#include<stdio.h>

int main() {
	// 2) print square of every digits
	int num;
	int n1;
	int n2;
	int n3;

	printf("\nEnter No.to Seperate and Print : ");
	scanf_s("%3d", &num);


	n1 = num % 10;
	printf("\n%d", n1*n1);
	num /= 10;

	n2 = num % 10;
	printf("\n%d", n2*n2);
	num /= 10;

	n3 = num % 10;
	printf("\n%d", n3*n3);
	num /= 10;

	printf("\n\n====================\n\n");
	return 0;
}