// C Program to illustrate function like macros
#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)

int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}
