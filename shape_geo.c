#include "shape_geo.h"

float factorial(float x)
{
	if(x == 0)
		return 1;
	return x * factorial(x-1);
}

void sphere(float radius, float *surface, float *volume)
{
	*surface = 4 * M_PI * pow(radius,2);
	*volume = 4 / (3 * M_PI * pow(radius,3));
}

float volCylinder(float radius, float height)
{
	return (M_PI)*radius*radius*height;
}

float sumFloats(float x[], int numFloats)
{
	for(int j=0; j < numFloats; j++)
	{
		int pt = j;
		int k = j+1;
		while(k < numFloats)
		{
			if(x[pt] > x[k])
				pt = k;
			else
				k = k+1;
		}
		float temp = x[j];
		x[j] = x[pt];
		x[pt] = temp;
	}

	float sum;
	for(int i=0; i < numFloats; i++)
	{
		sum += x[i];
	}

	return sum;
}

double sine(float angle)
{
	float radian = (angle/180)*(M_PI);
	float sin;
	int iteration=1;
	int flip = 1;
	while(fabs((factorial(iteration)/pow(radian,iteration))-
		(factorial(iteration+2)/pow(radian,iteration+2)))>.000001)
	{
		float denominator = factorial(iteration);
		float numerator = pow(radian,iteration);
		sin += flip*(numerator/denominator);
		if(flip>0)
			flip = -1;
		else
			flip = 1;
	}
	return sin;
}
