//Q10. Accept Two values from User Swap values print before and after swapping

#include<stdio.h>

int main() {
	int a, b;
	printf("\nEnter 1st values = ");
	scanf_s("%d", &a);
	printf("\nEnter 2nd values = ");
	scanf_s("%d", &b);
	//Using 3rd variable
	int temp;
	temp = b;
	b = a;
	a = temp;

	printf("\n1st values = %d\n",a);
	printf("\n2st values = %d\n",b);

	return 0;
}