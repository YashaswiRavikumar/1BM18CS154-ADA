#include<stdio.h>
void main()
{
	int m,n,s;
	printf("Enter-two integer numbers: ");
	scanf ("%d %d", &m,&n);
	s=GCD(m,n);
	printf("The GCD of the two numbers %d and %d is %d\n",m,n,s);
}
int GCD(int a,int b)
{
	int w=a;
	int e=b;
	while (e!=0)
	{
		int r=w%e;
		w=e;
		e=r;
	}
	return w;
} 
