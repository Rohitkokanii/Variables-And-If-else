/*Q19.Print Question as below
Q.1 ) Who developed C programming language
	Option 1 : James Gosling
	Option 2 : Dennis Ritche
	Option 3 : Charles Babbage
	Option 4 : None of the Above
Accpet answer from user as integer value(option number)
check that answer is correct or not , print message accordingly.
*/

#include<stdio.h>

int main() {
	int option;
	printf("\nQ.1] Who developed C programming language\n");
	printf("\nOption 1 : James Gosling\nOption 2 : Dennis Ritech\nOption 3 : Charles Babbage\nOption 4 : None of the Above \n\nSelect Option = ");
	scanf_s("%d",&option);

	if (option==2) {
		printf("\nYou Select Correct Answer\n");
	}
	else {
		printf("\nWrong Answer\n");
	}
	return 0;
}