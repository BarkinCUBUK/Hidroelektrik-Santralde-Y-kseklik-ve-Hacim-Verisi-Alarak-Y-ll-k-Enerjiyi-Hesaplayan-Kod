#include <stdio.h>

int main() 
{
	double v, h, e;
	printf("V Hacimi :");
	scanf("%lf",&v);
	printf("H Yuksekligi :");
	scanf("%lf",&h);
    e=(double) (9.81)*(0.85)*(0.75)*(0.95)*h*v/(365*24*3600);
	printf("Yillik Enerji Miktari...:%f \n",e);
	return(0);
	
	
}
