#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
      	srand(time(NULL));
       	int n = rand();
    if (n > 0) {
        printf("The number %d is positive\n", n);
    } else if (n == 0) {
        printf("The number %d is zero\n", n);
    } else {
        printf("The number %d is negative\n", n);
    }

    return 0;
}
