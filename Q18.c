// Q18. Accept Principle Amount from user , Calculate Simple Interest, number of year is 2.

//principle amount		interest amount
//50000 to 300000		6.2
//300001 to 800000		7.4
//800001 above			7.9

//A=P(1+rt)

#include<stdio.h>

int main() {
	int p_amt;
	float final_amt;
	
	printf("Enter Amount = ");
	scanf_s("%d",&p_amt);

	if (p_amt >= 50000 && p_amt <= 300000) {
		final_amt = (p_amt*6.2 * 2)/100;
		
		printf("\nSimple Interest = %f\n", final_amt);
	}
	else if (p_amt >= 300001 && p_amt <= 800000) {
		final_amt = (p_amt * 7.4 * 2) / 100;
		printf("\nSimple Interest = %f\n", final_amt);
	}
	else {
		final_amt = (p_amt * 7.9 * 2) / 100;
		printf("\nSimple Interest = %f\n", final_amt);
	}

	return 0;
}

