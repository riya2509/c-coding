
#include <stdio.h>
int isPRIME(int n)
{
	int i,j,c,k;	
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=1;j<i+1;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		{
			printf("%d\t",i);
		}
	}
	return (i);
}
void main()
{
	int a,res;
	printf("Enter the limit\n");
	scanf("%d",&a);
	printf("The prime numbers between 1 and %d are\n",a);
	isPRIME(a);
}