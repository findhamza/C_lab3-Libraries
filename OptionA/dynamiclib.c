#include "dynamiclib.h"

float factorial(float x)
{
	if(x == 0)
		return 1;
	return x * factorial(x-1);
}

void sphere(float radius, float *surface, float *volume)
{
	*surface = 4;
	*surface *= (float)pow(radius,2);
	*surface *= M_PI;
	*volume = (4.0f/3.0f);
	*volume *= (float)pow(radius,3);
	*volume *= M_PI;
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

	float sum=0;
	for(int i=0; i < numFloats; i++)
	{
		printf("\nlib array [%d]: %f",i,x[i]);
		sum += (float)x[i];
	}

	return sum;
}

double sine(float angle)
{
	float radian = (angle/180)*(M_PI);
	float sin=0;
	float oldsin=100;
	int i=0;

	while(fabs(sin-oldsin)>.000001 || oldsin==100)
	{
		oldsin = sin;
		sin += ( pow(-1,i) / factorial((2*i)+1) ) * pow(radian,(2*i)+1);
		i++;
	}

	return sin;
}
