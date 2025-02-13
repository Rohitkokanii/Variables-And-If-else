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

int main(){
	//1) seperate every digit and print them
	int num;
	int n1;
	int n2;
	int n3;

	printf("\nEnter No.to Seperate and Print : ");
	scanf_s("%3d", &num);

	
		n1= num % 10;
		printf("\n%d", n1);
		num /= 10;

		n2 = num % 10;
		printf("\n%d", n2);
		num /= 10;

		n3 = num % 10;
		printf("\n%d", n3);
		num /= 10;

	printf("\n\n====================\n\n");
	return 0;
}