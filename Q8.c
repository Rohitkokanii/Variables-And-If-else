//Q8.Accept rainfall for a week and calculate average rainfall for a week
//(Use explicit Typecasting if required)

#include<stdio.h>

int main() {
	int sun,mon,tue,wed,thu,fri,sat;
	
	printf("\nEnter Railfall for week = ");
	scanf_s("%d", &sun);
	scanf_s("%d", &mon);
	scanf_s("%d", &tue);
	scanf_s("%d", &wed);
	scanf_s("%d", &thu);
	scanf_s("%d", &fri);
	scanf_s("%d", &sat);

	double avg =(double)(sun + mon + tue + wed + thu + fri + sat) / 7;
	printf("\nAverage Rail fall is = %lf\n", avg);
	
	return 0;
}