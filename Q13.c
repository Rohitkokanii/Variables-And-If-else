//Q13. Accept Two integer values from user print smallest value

#include<stdio.h>

int main() {
	int n1, n2;
	printf("Enter Two No. = ");
	scanf_s("%d%d", &n1, &n2);

	if (n1 < n2) {
		printf("\nSmallest = %d\n",n1);
	}
	else {
		printf("\nSmallest = %d\n", n2);
	}

	return 0;
}