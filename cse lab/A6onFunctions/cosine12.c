#include <stdio.h>
#include <math.h>
void COSINE(int n,float x)
{
    int x1,i,j;
    float sign,cosx,f;
	x1=x;
	// DEGREE - RADIAN CONVERSION 
    x = x*(3.142/180.0);
    cosx = 1;
    sign = -1;
    for (i=2;i<=n;i=i+2)
    {
        f = 1;
        for (j=1;j<=i;j++)
        {
            f=f*j;
        }
        cosx=cosx+(pow(x,i)/f)*sign;
        sign=sign*(-1);
    }
    printf("Sum of the cosine series = %f\n",cosx);
    printf("The value of cos(%d) using library function = %f\n",x1,cos(x));
}
void main()
{
    int n1;
    float xd;
    printf("Enter the number of the terms in a series\n");
    scanf("%d",&n1);
    printf("Enter the value of x(in degrees)\n");
    scanf("%f",&xd);
    COSINE(n1,xd);
}