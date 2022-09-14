#include <stdio.h>

int main() {
	double english, maths, science;
	double percentage;


	printf("\nPlease enter your English marks out of 100:");
	scanf("%lf", &english);
	printf("\nPlease enter yout Mathematics marks out of 100:");
	scanf("%lf", &maths);
	printf("\nPlease enter your Science marks out of 100:");
	scanf("%lf", &science);
	
	percentage = ((english + maths + science)/300) * 100;

	printf("Percentage: %0.2lf\n", percentage);

	return 0;

}
