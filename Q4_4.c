//4) check upper case / lower case print message accordingly

#include<stdio.h>

int main() {
	char ch;
	printf("Enter Character = ");
	scanf_s("%c", &ch, 1);
	if (ch >= 65 && ch <= 90) {
		printf("Upper Case");
	}
	else if (ch >= 97 && ch <= 122) {
		printf("Lower Case");
	}
	else {
		printf("\nEntered Character is Not Alphacharacter\n");
	}
	return 0;
}