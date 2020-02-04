#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter-two integer numbers: ");
	scanf ("%d %d", &m,&n);
	printf("The GCD of the two numbers %d and %d is %d\n",m,n,euclid(m,n));
	return 0;
}
int euclid(int m,int n)
{
	while (n!=0)
	{
		int r=m%n;
		m=n;
		n=r;
	}
	return m;
} 
