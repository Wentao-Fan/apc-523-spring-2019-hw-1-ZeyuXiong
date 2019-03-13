#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n = 4;
	float xn[n+1];
	float nfact[n+1];
	float e=2.7183;
	float sum=0;
	char badfloat[20];

	xn[0]=1;
	nfact[0]=1;
	for(int i=1;i<=n;i++)
	{
		//float x1 = -5.5*xn[i-1];
		sprintf(badfloat,"%.5g",0.5*xn[i-1]);
		xn[i] = atof(badfloat);

		//x1 = nfact[i-1]*i;
		sprintf(badfloat,"%.5g",nfact[i-1]*i);
		nfact[i] = atof(badfloat);
	}

	for(int i=0;i<=n;i++)
	{
		float quotient = xn[i]/nfact[i];
		sprintf(badfloat,"%.5g",quotient);
		sum += atof(badfloat);
		sprintf(badfloat,"%.5g",sum);
		sum = atof(badfloat);
	}

	for(int i=0;i<6;i++)
	{
		sprintf(badfloat,"%.5g",sum/e);
		sum = atof(badfloat);
	}
	printf("%f\n", sum);
	printf("%f\n", exp(-5.5));

	return 0;
}