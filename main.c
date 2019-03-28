#include <stdio.h>

int main()
{
	float radius;
	char units[20];
	float surface, volume;
	printf("\nPlease enter radius of sphere: ");
	scanf("%f%s",&radius,&units);
	sphere(radius, &surface, &volume);
	printf("\nThe surface area of the sphere is: %f %s squared",surface,units);
	printf("\nThe Volume of the sphere is: %f %s cubed",volume,units);
}
