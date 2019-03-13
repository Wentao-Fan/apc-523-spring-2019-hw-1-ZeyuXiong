#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
	double n=1;
	int p=0;
	double ref = 2;
	double result;
	printf("%s\t%s\n","n","result" );
	char prev[30], curr[30];
	do
	{
		n*=10;
		p++;

		result = pow(1+1.0/n,n);
		printf("10^%d\t%.13f\n",p, result);
		sprintf(prev,"%.13f", ref);
		sprintf(curr,"%.13f", result);
		ref = result;
	}while(strcmp(prev,curr)!=0 && p<20);
	printf("n_stop = 10^%d\n",p);
	return 0;
}