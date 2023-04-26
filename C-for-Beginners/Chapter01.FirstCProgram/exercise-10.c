#include <stdio.h>

int main(void) {
	// 2468 and 1234
	long a = 2468, b = 1234;
	printf("%ld + %ld = %ld\n%ld - %ld = %ld\n%ld * %ld = %ld\n%ld / %ld = %ld",
		a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
	return 0;	
}
