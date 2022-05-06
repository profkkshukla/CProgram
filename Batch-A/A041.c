#include<stdio.h>
void writeNo(int );
int fact(int );
int sum(int );
int main()
{
	int no=1;
	writeNo(no);
	printf("\n\n");
	printf("\n Fact = %d",fact(5));
	printf("\n Sum = %d",sum(10));
	return 0;
}

void writeNo(int no)
{
	if(no==5)
		return;
	
	printf("%d ",no);
	writeNo(no+1);
	printf("%d ",no*no);
}
int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}
int sum(int n)
{
	if(n==1)
		return 1;
	return n+sum(n-1);
}
