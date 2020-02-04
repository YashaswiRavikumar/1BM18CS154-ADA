#include <stdio.h>
int repsub(int a,int b)
{
	while (a!=b)
	{
		if (a>b)
			a=a-b;
		else 
			b=b-a;
	}
	return a;	
}


int main()
{
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("The GCD of two numbers %d and %d is %d\n",a,b,repsub(a,b));
	return 0;
}
