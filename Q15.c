//Q15.Accept Integer value from user
// --  check it is completely divisible by 3, 7, 11

#include<stdio.h>

int main() {
	int num;
	printf("Enter no. = ");
	scanf_s("%d",&num);

	if (num % 5 == 0 || num % 7 == 0 || num % 11 == 0) {
		printf("\nGiven No. = %d is Completely Divided By 5, 7, 11\n",num);
	}
	else {
		printf("\nGiven No. = %d is Not Completely Divided By 5, 7, 11\n",num);
	}
	return 0;
}