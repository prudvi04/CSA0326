#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	if(a==0)
	{
		printf(" 0 is neither even nor odd ");
	}
	else
	{
		if(a%2==0)
		{
			printf("Enter number is even ");
		}
		else
		{
			printf("Enter number is odd ");
		}
	}
	return 0;
}
