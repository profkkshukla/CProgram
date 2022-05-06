#include<stdio.h>
int isPrime(int);
int main()
{
	int num=65;
	(isPrime(num))?printf("number is prime"):printf("number is not prime");
	return 0;
}
int isPrime(int a)
{
	int i;
	for (i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}

