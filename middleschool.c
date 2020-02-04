#include<stdio.h>
int middleschool(int a,int b)
{
	int c,ans=1;
	c=b>a?a:b;
	for(int i=2;i<=c;i++)
	{
		int n=0,m=0;
		if(a%i==0)
		{
			a=a/i;
			n=1;
		}
		if(b%i==0)
		{
			b=b/i;
			m=1;	
		}
		if(n==1&&m==1)
			ans=ans*i;
		if(n==1||m==1)
			i=i-1;
	}
	return ans;
}
int main()
{
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("The GCD of two numbers %d and %d is %d\n",a,b,middleschool(a,b));
	return 0;
}
