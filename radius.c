#include <stdio.h>

int main()
{
	int radius;
	
	printf("Please enter a radius: ");

	scanf("%i", &radius); //address-of operator

	printf("The given radius is %i\n",radius);
	return 0;
}
