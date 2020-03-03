#include<stdio.h>
int main()
{
        int a[10],b[10],n,count=0;
        printf("Enter the number of meetings\n");
        scanf("%d",&n);
        printf("Enter the start time of the meetings\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the end time of the meetings\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        if(b[i]<b[j])
                        {
                                int temp=b[i];
                                b[i]=b[j];
                                b[j]=temp;
                                int temp1=a[i];
                                a[i]=a[j];
                                a[j]=temp1;
                        }
                 }
         }
         printf("\n");
         printf("The meetings that can be conducted are\n");
         for(int i=0;i<n;i++)
         {
                if((b[i]==a[i+1])||(b[i]<a[i+1])||(b[i]>a[i+1]&&a[i]>a[i+1]))
                {
                        printf("%d to %d\n",a[i],b[i]);
                        count++;
                }
         }
         printf("\nThe number of meetings that can be conducted is %d\n",count);
}
