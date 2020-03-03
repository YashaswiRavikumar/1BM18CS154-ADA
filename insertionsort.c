#include<stdio.h>
#include<time.h>
void insertionsort(int arr[],int n)
{
	int key,i,j;
  	for(i=1;i<n;i++)
   	{
       key= arr[i];
       j=i-1;
       while(j>=0 && arr[j]>=key)
       {
          arr[j+1]=arr[j];         
          j=j-1;
       }
       arr[j+1]=key;
    }
}
void main()
{
	int a[10],n,i;
	clock_t time;
 	printf("Enter the size of array\n");
  	scanf("%d",&n);
  	printf("Enter the element of the array\n");
   	for(i=0;i<n;i++) 
        scanf("%d",&a[i]);  
  	time=clock();
  	insertionsort(a,n);
  	time=clock()-time;
  	printf("The sorted array is :\n");
  	for(i=0;i<n;i++) 
  	{     
    	printf("%d\n",a[i]); 
    }
    printf("The time taken is:%f\n",(double)time/CLOCKS_PER_SEC);

}
