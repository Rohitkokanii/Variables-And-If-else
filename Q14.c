//Q14. Accept Ages of three person's , print the age of that Youngest person.

#include<stdio.h>

int main() {
	int n1, n2,n3;
	printf("Enter Age of to 3 person' = ");
	scanf_s("%d%d%d", &n1, &n2,&n3);

	if (n1 < n2 && n1<n3) {
		printf("\nYoungest Person = %d\n", n1);
	}
	else if(n2<n1&&n2<n3){
		printf("\nYoungest Person = %d\n", n2);
	}
	else {
		printf("\nYoungest Person = %d\n",n3);
	}

	return 0;
}