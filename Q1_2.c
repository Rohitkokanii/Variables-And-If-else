//variables and If-else

#include<stdio.h>
int main() {

	/*Q1.Declare And Initialize Variable to store
	1) integer value
	2) float value
	3) character value
	And Print it's value.
	*/

	int a;
	float b;
	char c;
	a = 5;
	b = 5.5;
	c = 'A';

	printf("\n\n integer a = %d \n float b = %f \n character c = %c\n\n", a, b, c);
	printf("\n\n ================== \n\n");

	/*
	Q2. Declare And Initialize Variable to store
	1) integer value
	2) float value
	3) character value
	Manipulate Value, print value before and after Manipulation
	*/

	int x;
	float y;
	char z;

	x = 10;
	y = 4.6;
	z = 'C';

	printf("\n\n Before manipulation => \n integer x = %d \n float y = %f \n character z = %c\n\n", x, y, z);// 10, 4.6, C

	x = 5;
	y = 5.7;
	z = 'D';

	printf("\n\n After manipulation => \n integer x = %d \n float y = %f \n character z = %c\n\n", x, y, z);// 5, 5.7, D
	printf("\n\n ================== \n\n");

	
	return 0;

}
