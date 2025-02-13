#include<stdio.h>

int main() {
	//  8) print 3rd power of reverse number
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

	int rev = n1 * 100 + n2 * 10 + n3 * 1;

	printf("Reverse Num Cub= %d", rev*rev*rev);
	printf("\n\n====================\n\n");
	return 0;
}