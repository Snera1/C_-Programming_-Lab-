# include <stdio.h>
int main ()
{
	float temperature;
	
	printf("Enter the machine temperature (C): ");
	scanf("%f", &temperature);
	
	if (temperature >= 60 && temperature <= 80)
	{
		printf("Safe range\n");
	} else {
		printf("Warning!\n");
	}
	
	return 0;
}