#include<stdio.h>
int addDigits(int n);
int main(void)
{
	int n;
	printf("Enter your number:");
	scanf("%d", &n);
	printf("The result is %d", addDigits(n));
	return 0;
}

int addDigits(int n)
{
	return (n - 1) % 9 + 1;
}