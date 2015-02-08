#include <stdio.h>

int main () { 

	int int1 = 425;
	int int2 = -642;
	char ch1 = 'C';
	float fl1 = 3.14;
	char charray1[] = "testing";

	printf("\nThe address of the variable x %u",&int1);
	printf("\nThe address of the variable y %u",&int2);
	printf("\nThe address of the variable ch1 %u",&ch1);
	printf("\nThe address of the variable fl1 %u",&fl1);
	printf("\nThe address of the variable charray1 %u",&charray1);

	int *pint1;
	pint1 = &int1;

	int *pint2;
	pint2 = &pint2;

	char *pch1;
	pch1 = &ch1;	

	float *pfl1;
	pfl1 = &fl1;

	printf("\n");
	return 0;
}
