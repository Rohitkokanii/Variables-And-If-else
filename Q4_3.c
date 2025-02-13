#include<stdio.h>

int main() {
	printf("\n3) check Alphacharacter , numeric or symbol\n");
	char ch;
	printf("Enter character Value = ");
	scanf_s("%c", &ch,1);

	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
		printf("%c is Alphacharacter", ch);
	}
	else if (ch >= 48 && ch <= 57) {
		printf("%c is numeric character", ch);
	}
	else
	{
		printf("%c is symbol", ch);
	}
}