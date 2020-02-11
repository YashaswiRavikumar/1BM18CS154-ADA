#include<stdio.h>
int count=0;
int toh(int n,char x,char y,char z) 
{
	if(n>0) 
	{
      		toh(n-1,x,z,y);
      		printf("%c to %c\n",x,y);
      		toh(n-1,z,y,x);
		count++;
   	}
}
int main() 
{
	int n;
	printf("Enter the number of plates\n");
	scanf("%d",&n);
   	toh(n,'A','B','C');
	printf("COUNT=%d\n",count);
}
