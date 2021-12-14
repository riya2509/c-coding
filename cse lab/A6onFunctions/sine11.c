
#include <stdio.h>
#include <math.h>
void sines (float,int);
void main()
{
int n;
float k;
printf("Enter the value for x : " );
scanf("%f", &k);
printf("Enter the value for n : " );
scanf("%d", &n);
sines(k,n);    
}
void sines (float k, int n)
{
    float x= k*3.14159/180;
    float sum=0,t=1,fac;
    for(int i=1;i<=n;i++)
    {
        fac=1.0;
        for(int j=1;j<=2*i-1;j++)
        fac=fac*j;
        t=(pow(-1,i+1)*pow(x,2*i-1))/fac;
        sum=sum+t;
    }
    printf("The value of sin(%0.2f) is : %0.4f" , k, sum );
}


    

