/*	Q5.Accept Integer value form User
		1) check it is odd / even
		2) check positive, negative or zero
		3) print it's absolute value
		*/


#include<stdio.h>

int main() {
	
	//1) check it is odd / even
	printf("\n1) check it is odd / even\n");
	int User_num1;
	printf("\nEnter No. To check it is Odd / Even = ");
	scanf_s("%d", &User_num1);
	if (User_num1 % 2 == 0) {
		printf("\nNo is Even\n");
	}
	else {
		printf("\nNo is Odd\n");
	}

	printf("\n\n ========================= \n\n");

	//2) check positive, negative or zero

	printf("2) check positive , negative or zero");

	int User_num2;
	printf("\nEnter No. To check positive , negative or zero = ");
	scanf_s("%d", &User_num2);

	if (User_num2 == 0) {
		printf("\nNo is Zero\n");
	}
	else if (User_num2 > 0) {
		printf("\nNo is Positive\n");
	}
	else {
		printf("\nNo is Negative\n");
	}

	printf("\n=====================\n");

	//3) print it's absolute value
	
	printf("\n3) print it's absolute value\n");

	int User_num4;
	printf("\nEnter No. To print it's absolute value = ");
	scanf_s("%d", &User_num4);
	if (User_num4 < 0) {
		User_num4 = -User_num4;
		printf("\n Absolut Value %d\n", User_num4);
	}
	else {
		printf("\nallready Absolut Value\n")
	}
	return 0;
}