#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	 if  (n < 0){
		printf ("%i is negative", n);
	} else  (n > 0) {
		printf ("%i is positive", n);
	}
	return (0);
}