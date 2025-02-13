//1) print character
//2) print ASCII value

#include<stdio.h>

int main() {
	char User_input;
	printf("\nEnter Character To Print Character And ASCII value = ");
	scanf_s("%c", &User_input, 1);
	printf("\nCharacter = %c\n \nASCII Value = %d\n", User_input,User_input);

	printf("\n\n========================= \n\n");
}