#include<stdio.h>

int main() {
	//9) check palindrome
	int num;
	int n1;
	int n2;
	int n3;

	printf("\nEnter No.to Seperate and Print : ");
	scanf_s("%3d", &num);
	int org_num = num;
	n1 = num % 10;
	num /= 10;

	n2 = num % 10;
	num /= 10;

	n3 = num % 10;
	num /= 10;

	int rev = n1 * 100 + n2 * 10 + n3 * 1;

	if (org_num == rev) {
		printf("\nNo. is palindrom\n");
	}
	else {
		printf("\nNo. is not palindrom\n");
	}
	printf("\n\n====================\n\n");
	return 0;
}