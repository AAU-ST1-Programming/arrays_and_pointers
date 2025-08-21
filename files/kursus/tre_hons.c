#include <stdio.h>

int main()
{
	float vaegt[3] = {1.3, 0.9, 2.5};

	printf("Vaegtene af 3 hoens: ");

	for (int i = 0; i < 3; i++)
	{
		printf("%.2f, ",vaegt[i]);
	}
	
	return 0;
}
