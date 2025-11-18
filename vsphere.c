#include <stdio.h>
#define vsphere 4/3 *3.14

int main()
{
float radius, volume;
printf("Enter the radius of the sphere:");
scanf("%f", &radius);

 volume = vsphere * radius * radius * radius ;
 printf("volume of the sphere = %f\n", volume);

 return 0;

}