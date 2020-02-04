#include<stdio.h>
int consint(int a,int b)
{
	int small;
	if(a>b)
		small=b;
	else
		small=a;
	while(1)
	{
		if((a%small==0)&&(b%small==0))
			return small;
		else
			a=a%small;
			b=b%small;
			small=small-1;
	}
}
int main()
{
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("The GCD of two numbers %d and %d is %d\n",a,b,consint(a,b));
	return 0;
}
