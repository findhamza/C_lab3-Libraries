#include <stdio.h>
#include <staticlib.h>

void sphereCmd();
void cylnCmd();
void sumCmd();
void sinCmd();

int main()
{
	printf("\nSURFACE AREA AND VOLUME OF SHPERE________________________\n");
	sphereCmd();
	printf("_________________________________________________________\n");
	printf("\nVOLUME OF A CYLINDER_____________________________________\n");
	cylnCmd();
	printf("_________________________________________________________\n");
	printf("\nFLOATING POINT SUM_______________________________________\n");
	sumCmd();
	printf("_________________________________________________________\n");
	printf("\nSINE OF AN ANGLE_________________________________________\n");
	sinCmd();
	printf("_________________________________________________________\n");

	return 0;
}

void sphereCmd()
{
	float radius;
	char units[20];
	float surface;
	float volume;

	printf("\nPlease enter radius of sphere: ");
	scanf("%f%s",&radius,units);
	sphere(radius, &surface, &volume);
	printf("\nThe surface area of the sphere is: %f %s squared",surface,units);
	printf("\nThe volume of the sphere is: %f %s cubed\n\n",volume,units);

	return;
}

void cylnCmd()
{
	float radius,height;
	char unit[20];
	printf("\nPlease enter radius of Cylinder: ");
	scanf("%f%s",&radius,unit);
	printf("Please enter height of Cylinder: ");
	scanf("%f%s",&height,unit);
	float vol = volCylinder(radius,height);
	printf("\nThe volume of the cylinder is: %f %s cubed\n\n",vol,unit);

	return;
}

void sumCmd()
{
	int count=0;
	printf("\nPlease enter array count: ");
	scanf("%d",&count);
	printf("\n");
	float sumArr[count];
	for(int i = 0; i < count; i++)
	{
		printf("Please give next float: ");
		scanf("%f",&sumArr[i]);
	}
	printf("\nThe sum of the float entered is: %f\n\n",sumFloats(sumArr,count));

	return;
}

void sinCmd()
{
	float angle;
	printf("\nPlease enter the angle for sin(angle): ");
	scanf("%f",&angle);
	printf("\nThe sine of %f is %f\n\n",angle,sine(angle));

	return;
}
