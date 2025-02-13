#include<stdio.h>

int main() {
	//  7) reverse number (store reverse number in another int variable) and print it
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

	printf("Reverse Num = %d", rev);
	printf("\n\n====================\n\n");
	return 0;
}