#include<stdio.h>
int main(){
	int n,min,max,sum=0;
	printf("Enter size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	 min=max=arr[0];
    for(int i=1; i<n; i++)
    {
         if(min>arr[i])
		  min=arr[i];   
		   if(max<arr[i])
		    max=arr[i];       
    }
     	printf("minimum of array is : %d \n",min);
        printf("\nmaximum of array is : %d \n",max);
        printf("\nsum of array is : %d \n",sum);
        printf("\naverage of array is : %d \n",(sum/n));
 
	 	 return 0;
}