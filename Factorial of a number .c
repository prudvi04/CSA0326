#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int f;
	float n;
	printf("Enter a number :");
	scanf("%f",&n);
	if(n<=0||int(n)!=n)
	{
		printf("Invalid");
	}
	else
	{
		f=fact(n);
		printf("\n factorial of %.2f is %d",n,f);	
	}
	return 0;
}
