#include <stdio.h>
/**
 * main -Size is not grandeur, and territory does not make a nation
 *
 * Return:0
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %lu byte\(s\)\n", sizeof(c));
	printf("Size of a int: %lu byte\(s\)\n", sizeof(i));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(long int));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(long long int));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(f));
	return (0);
}
