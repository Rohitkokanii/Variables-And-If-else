//6) convert it into opposite case if it is alphacharacter

#include<stdio.h>

int main() {
	char ch;
	printf("Enter Character to Convert Opposite Case = ");
	scanf_s("%c",&ch,1);
	if (ch >= 65 && ch <= 90) {
		ch = ch + 32;
		printf("\n %c \n", ch);
	}
	else if (ch >= 97 && ch <= 122) {
		ch = ch - 32;
		printf("\n %c \n", ch);
	}
	else {
		printf("\nEntered Character is Not Alphacharacter\n");
	}
	return 0;
}