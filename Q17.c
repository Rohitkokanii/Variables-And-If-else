// Q17. Accept Temperature from user in fahrenheit convert it into celcius and print.

#include<stdio.h>

int main() {
	int temp;
	printf("\nEnter Temperature int fahrenheit = ");
	scanf_s("%d",&temp);

	float celcius;
	
	celcius = (temp - 32) * ((float)5 / 9);
	printf("\nTemperature in Celcius = %f degree Celcius\n",celcius);

	return 0;
}