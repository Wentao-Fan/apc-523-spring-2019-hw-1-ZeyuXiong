#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

/*class my_float
{
public:
	void add(vector<int> & add1, vector<int> & add2, vector<int>& sum);
	void div(vector<int> & arg1, int arg2);
	void prod(vector<int> arg1, vector<int> & arg2, vector<int>& result);
};*/

int main()
{
	int n = 17;
	int method = 3;
	//float num = atof("12.3e-3");
	//printf("%.3g\n",12.3457 );
	//printf("%.2g\n",num);
	vector<float> xn(n+1,1);
	vector<float> nfact(n+1,1);
	char badfloat[20];
	float sum = 0;

	for(int i=1;i<=n;i++)
	{
		float x1 = -5.5*xn[i-1];
		sprintf(badfloat,"%.5g",x1);
		xn[i] = atof(badfloat);

		x1 = nfact[i-1]*i;
		sprintf(badfloat,"%.5g",x1);
		nfact[i] = atof(badfloat);
	}
	/*for(int i=0;i<=n;i++)
		cout << xn[i] << ' ';
	cout << endl;
	for(int i=0;i<=n;i++)
		cout << nfact[i] << ' ';
	cout << endl;*/

	if(method == 0)
	{
		for(int i=0;i<=n;i++)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum += atof(badfloat);
			sprintf(badfloat,"%.5g",sum);
			sum = atof(badfloat);
		}
	}
	else if(method == 1)
	{
		for(int i=n;i>=0;i--)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum += atof(badfloat);
			sprintf(badfloat,"%.5g",sum);
			sum = atof(badfloat);
		}
	}
	else if(method == 2)
	{
		float sum1=0, sum2=0;
		for(int i=0;i<=n;i+=2)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum1 += atof(badfloat);
			sprintf(badfloat,"%.5g",sum1);
			sum1 = atof(badfloat);
		}
		for(int i=1;i<=n;i+=2)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum2 += atof(badfloat);
			sprintf(badfloat,"%.5g",sum2);
			sum2 = atof(badfloat);
		}
		sum = sum1+sum2;
		//cout << sum1 << ' ' << sum2 << endl;
		sprintf(badfloat,"%.5g",sum);
		sum = atof(badfloat);
	}
	else
	{
		float sum1=0, sum2=0;
		for(int i=n-(n%2);i>=0;i-=2)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum1 += atof(badfloat);
			sprintf(badfloat,"%.5g",sum1);
			sum1 = atof(badfloat);
		}
		for(int i=n+(n%2)-1;i>=0;i-=2)
		{
			float quotient = xn[i]/nfact[i];
			sprintf(badfloat,"%.5g",quotient);
			sum2 += atof(badfloat);
			sprintf(badfloat,"%.5g",sum2);
			sum2 = atof(badfloat);
		}
		sum = sum1+sum2;
		sprintf(badfloat,"%.5g",sum);
		sum = atof(badfloat);
	}
	
	cout << sum << endl;

	cout << exp(-5.5) << endl;

	return 0;
}