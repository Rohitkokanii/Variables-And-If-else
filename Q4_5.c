
//5) check vowels / consonant print message accordingly


#include<stdio.h>
 
int main() {
	char ch;
	printf("\nEnter Char = ");
	scanf_s(" %c", &ch,1);
	if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
		printf("\nVowel\n");
	}
	else {
		printf("\nConsonant\n");
	}
}