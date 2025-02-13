//10) check Armstrong

#include<stdio.h>

int main() {
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

	int digits_cub = n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3;

	if (digits_cub==org_num){
		printf("\nNum is Armstrong\n");
	}
	else {
		printf("\nNum is Not Armstrong\n");
	}

	printf("\n\n====================\n\n");
	return 0;
}