/*
 Q6. Accept 3 digit integer value from user
 1) seperate every digit and print them
 2) print square of every digits
 3) print cubes of every digits
 4) print sum of digits
 5) print sum of squares of digits
 6) print sum of cubes of digits
 7) reverse number (store reverse number in another int variable) and print it
 8) print 3rd power of reverse number
 9) check palindrome
 10) check Armstrong
 */

#include<stdio.h>

int main() {
	printf("\n1) seperate every digit and print them\n");
	int num;
	int last_digit=0;

	printf("\nEnter No.to Seperate and Print : ");
	scanf_s("%d", &num);

	while (num != 0) {
		last_digit= num % 10;
		printf(" %d ", last_digit);
		num /= 10;
	}

	printf("\n\n====================\n\n");

	int num1;
	int last_digit1 = 0;
	int sqr_digit = 0;
	printf("\n2) print square of every digits = ");
	scanf_s("%d", &num1);

	while (num1 != 0) {
		last_digit1 = num1 % 10;
		sqr_digit = last_digit1 * last_digit1;
		printf(" %d ",sqr_digit);
		num1 /= 10;
	}
	
	printf("\n\n====================\n\n ");

	int num2;
	int last_digit2 = 0;
	int cube_digit = 0;

	printf("3) print cubes of every digits = ");
	scanf_s("%d", &num2);

	while (num2 != 0) {
		last_digit2 = num2 % 10;
		cube_digit = last_digit2 * last_digit2 * last_digit2;
		printf(" %d ", cube_digit);
		num2 /= 10;
	}

	printf("\n\n===========================\n\n");
	printf("4) print sum of digits = ");

	int num3;
	int last_digit3;
	int sum_digit = 0;

	printf("\nEnter No. to print sum of digits = ");
	scanf_s("%d", &num3);
	while (num3 != 0) {
		last_digit3 = num3 % 10;
		sum_digit += last_digit3;
		num3 /= 10;
	}
	printf("\n%d\n", sum_digit);
	
	printf("\n============================\n");

	printf("5) print sum of squares of digits:-");

	int num4;
	int last_digit4;
	int sq_digit;
	int sq_sum = 0;

	printf("\nEnter No. to print sum of digits = ");
	scanf_s("%d", &num4);
	while (num4 != 0) {
		last_digit4 = num4 % 10;
		sq_digit = last_digit4 * last_digit4;
		sq_sum += sq_digit;
		num4 /= 10;
	}
	printf("\nSum of Square : %d \n", sq_sum);

	printf("\n\n=========================\n\n");

	printf("6) print sum of cubes of digits");
	
	int num5;
	int last_digit5;
	int cu_digit;
	int cu_sum = 0;

	printf("\nEnter No. To Print Sum of Cubes of Digits");
	scanf_s("%d", num5);

	while (num5 != 0) {
		last_digit5 = num5 % 10;
		cu

	}

	return 0;

}