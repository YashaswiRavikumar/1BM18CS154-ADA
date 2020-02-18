#include<stdio.h>
#include<time.h>
int main()
{
	clock_t start,end;
	int arr[10];
	int n,i;
	int key;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the key element to be found\n");
	scanf("%d",&key);
	start=clock();
	printf("%d is found at index %d\n",key,RecursiveBsearch(arr,0,(n-1),key));
	end=clock();
	double total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Total time=%lf\n",total);
	return 0;
}
int RecursiveBsearch(int arr[], int start, int end, int element) 
{
	if(start>end) 
   		return -1;
    int mid = (start+end)/2;
    if( arr[mid] == element ) 
    	return mid;
    else if( element < arr[mid] )
      RecursiveBsearch(arr, start, mid-1, element);
    else
      RecursiveBsearch(arr, mid+1, end, element);
}
