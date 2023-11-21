// C program to demonstrate syntax of binary arithmetic
// operators
#include <stdio.h>

int main()
{
	int a,b, res;
    printf("enter the first number of a ");
    scanf("%d", &a);
    printf("enter the second number of b ");
    scanf("%d", &b);

	res = a + b; 
    printf("a + b is %d\n", res);

	res = a - b; 
	printf("a - b is %d\n", res);

	res = a * b; 
	printf("a * b is %d\n", res);

	res = a / b; 
	printf("a / b is %d\n", res);

	res = a % b; 
	printf("a %% b is %d\n", res);

	return 0;
}
