#include <stdio.h>


int main(void){

//INTEGERS
	int x, y;
	printf("X: ");
	scanf("%i", &x);
	printf("Y: ");
	scanf("%i", &y);

	printf("x + y = %i\n", x + y);
	printf("x - y = %i\n", x - y);
	printf("x * y = %i\n", x * y);
	printf("x / y = %i\n", x / y);
	printf("x % y = %i\n", x % y);

//FLOATS
	float a, b;
	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);

	printf("a + b = %.2f\n", a + b);
	printf("a - b = %f\n", a - b);
	printf("a * b = %f\n", a * b);
	printf("a / b = %f\n", a / b);
}
