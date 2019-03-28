#include <stdio.h>
#include <shape_geo.h>

int main()
{
	float radius;
	char *units;
	float surface, volume;
	printf("\nPlease enter radius of sphere: ");
	scanf("%f%s",&radius,units);
	sphere(radius, &surface, &volume);
	printf("\nThe surface area of the sphere is: %f %s squared",surface,units);
	printf("\nThe Volume of the sphere is: %f %s cubed\n\n",volume,units);
}
