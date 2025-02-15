// Q11. Accept integer value from user and print multiplication table

#include<stdio.h>

int main() {
	int num;
	printf("Enter Value = ");
	scanf_s("%d", &num);
	printf("\n1 * %d = %d \n", num,1*num);
	printf("\n2 * %d = %d \n", num,2*num);
	printf("\n3 * %d = %d \n", num,3*num);
	printf("\n4 * %d = %d \n", num,4*num);
	printf("\n5 * %d = %d \n", num,5*num);
	printf("\n6 * %d = %d \n", num,6*num);
	printf("\n7 * %d = %d \n", num,7*num);
	printf("\n8 * %d = %d \n", num,8*num);
	printf("\n9 * %d = %d \n", num,9*num);
	printf("\n10 * %d = %d \n", num,10*num);

	return 0;

}