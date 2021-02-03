#include <iostream> 
#include <math.h> 
using namespace std; 

class MySin {
    public MySin();
    public MySin(double x);
    public MySinc(const MySin &obj);
    public ~MySin();
    public double value();
    public void setX(double);
    public double getX();
    private double mX
};

int fac(int x)
{
	int i,fac=1;
	for(i=1;i<=x;i++)
		fac=fac*i;
	return fac;
}

int main()
{
	float x,Q,sum=0;
	int i,j,limit;
	
	limit=10;

	printf("WprowadŸ wartoœæ x serii sinx: ");
	scanf("%f",&x);


	Q=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/fac(j);
		}
		else
			sum=sum-pow(x,j)/fac(j);
	}

	printf("Sin(%0.1f): %f",Q,sum);
	return 0;
}