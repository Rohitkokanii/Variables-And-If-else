/*Q20.Interviewer take an interview for a candidate on the following parameters
	1. Knowledge
	2. Logic Bulding
	3. Confidence
	4. Communication
display all parameters and accept marks for each parameter from user
(marks should be accepted between 1 to max 1O for each parameter)
calculate average and show the message accordingly
if average greater than or equal to O and less than 7 not Selected
greater than or equal to 7 and less than or equal to 1O selected
*/

#include<stdio.h>

int main() {
	int knowledge;
	int logic;
	int confidence;
	int communication;

	printf("\nEnter Marks in range 1-10\n");
	printf("\n1. Knowledge = ");
	scanf_s("%d",&knowledge);
	printf("\n2. Logic Bulding = ");
	scanf_s("%d", &logic);
	printf("\n3. Confidence = ");
	scanf_s("%d", &confidence);
	printf("\n4. Communication = ");
	scanf_s("%d", &communication);

	int avg = (knowledge + logic + confidence + communication)/4;

	if (avg >= 0 && avg <= 7) {
		printf("\nNot Selected\n");
	}
	else {
		printf("\nSelected\n");
	}

	return 0;
}