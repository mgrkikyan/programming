#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	for(x=0;x<=1.5;x++)
	{
		while (x>=0 && x<=1.5)
		{
			y=pow(2,x)-2+pow(x,2);
			printf("x=%f y=%f\n",x,y);
		}
	}
}

{
	float x,y;
	for(x=1.5;x<=3;x++)
    {
		while (x>1.5 && x<=3)
        {
			y=(pow(x,0.5))*exp(-pow(x,2));
			printf("X=%lf Y=%lf\n",x,y);
		}
	}
}