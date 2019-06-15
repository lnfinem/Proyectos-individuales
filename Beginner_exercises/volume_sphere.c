/* Calcule the volume of a sphere with a 10-meter radius */

#include <stdio.h>

#define NUMBER_PI 3.14159265358979323846

int main(void)
{
	float radius, volume;
	printf("Enter radius of the sphere in meters: ");
	scanf("%f", &radius);
	volume = (4.0f / 3.0f) * NUMBER_PI * radius * radius * radius;
	printf("%.1f is the volume of the sphere\n", volume);

return 0;
}


