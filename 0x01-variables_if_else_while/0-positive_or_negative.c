#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
*main - this is the first entry
* Return :  Always 0
int main(void);
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive");
	else if (n < 0)
		printf("%d is negative");
	else if (n == 0)
		printf("% is zero");
	return (0);
}
