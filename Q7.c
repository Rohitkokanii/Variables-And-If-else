#include<stdio.h>

int main() {
	int age;

	printf("\nEnter Your Age = \n");
	//fflush(stdin);
	scanf_s(" %d", &age);

	if ((age >= 18) && (age <= 70)) {
		printf("You Are Eligible for driving licence");
	}
	else {
		printf("Not Eligible for driving licence");
	}
	return 0;
}