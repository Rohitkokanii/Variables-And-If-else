//Q16. Accept Integer value from user print next 5 even numbers

#include<stdio.h>

int main() {
	int num;
	printf("Enter No. = ");
	scanf_s("%d",&num);

	if (num % 2 != 0) {
		num += 1;
	}
		printf("\n%d\n",num += 2);
		printf("\n%d\n", num += 2);
		printf("\n%d\n", num += 2);
		printf("\n%d\n", num += 2);
		printf("\n%d\n", num += 2);
	
	return 0;
}