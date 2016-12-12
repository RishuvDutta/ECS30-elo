#include <stdio.h> 
#include <math.h>

int main() {
	double yours;
	printf("Enter your rating: ");
	scanf("%lf", &yours);
	
	double opponent;
	printf("Enter your opponents rating: ");
	scanf("%lf", &opponent);

	double new;
	new = round (yours + 32 * (1 - (1 / (1 + pow(10, (opponent - yours) / 400)))));
	printf("After beating your opponent, your new rating is %.0f\n", new);
	return 0;
}
