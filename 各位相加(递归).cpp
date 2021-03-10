#include<stdio.h>
int add(int n);
int main()
{
	int result;
	printf("Enter your number:");
	scanf("%d", &result);
	result = add(result);
	printf("The result is %d", result);
	return 0;
}

int add(int n)
{
	int result=0;
	if (n < 10) result = n;
	else result = add(n / 10) + n % 10;
	if (result >= 10)
		result = add(result);
	return result;
}
