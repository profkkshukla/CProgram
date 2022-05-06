#include<stdio.h>
void func1();
void func2();
void func3();
int main()
{
	func1();
	return 0;
}
void func1()
{
	func2();
	printf("\nMarwadi");
}
void func2()
{
	func3();
	printf("\nUniversity");
}
void func3()
{
	printf("\nRajkot");
}

