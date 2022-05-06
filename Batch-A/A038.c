#include<stdio.h>
int OddEven(int);
int main()
{
	int num=5;
	(OddEven(num))?printf("ODD"):printf("EVEN");
	return 0;
}
int OddEven(int a)
{
	return (a%2)?1:0;
}

