#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	clock_t start,end;
	double total;
	int arr[10];
	int n,key,i,index;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[rand()%10]);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	start=clock();
	index=RecursiveLsearch(arr,0,(n-1),key);
	end=clock();
	if (index != -1) 
       printf("Element %d is present at index %d\n", key, index); 
    else
        printf("Element %d is not present\n", key);
    total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time %lf\n",total); 
    return 0; 
} 
int RecursiveLsearch(int arr[],int start,int end,int key)
{
	if (end < start) 
        return -1; 
    if (arr[start] == key) 
        return start; 
    if (arr[end] == key) 
        return end; 
    return RecursiveLsearch(arr,(start+1),(end-1),key); 
} 
	
