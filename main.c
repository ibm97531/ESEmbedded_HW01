#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b;}

int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
        int (*classify[])( int, int)={ multiply, plus, NULL,minus, NULL, divided};
	//IF ELSE IF
/*	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	else if (b == '/')
		printf("%d %c %d = %d\n", a, b, c, divided(a, c));
*/
        if(b>=0 && b<48)
        printf("%d %c %d = %d\n", a, b, c, classify[b-42](a,c));
        return 0;
}

