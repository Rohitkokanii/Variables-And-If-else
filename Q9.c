//Q9. Accept weight of 7 persons calculate average weight of that group

#include<stdio.h>

int main() {
	short int w1, w2, w3, w4, w5, w6, w7;

	printf("\nEnter Weight of 7 Persons = ");
	scanf_s("%d", &w1);
	scanf_s("%d", &w2);
	scanf_s("%d", &w3);
	scanf_s("%d", &w4);
	scanf_s("%d", &w5);
	scanf_s("%d", &w6);
	scanf_s("%d", &w7);

	double avg = (double)(w1 + w2 + w3 + w4 + w5 + w6 + w7) / 7;
	printf("\nAverage weight is = %lf\n", avg);

	return 0;
}