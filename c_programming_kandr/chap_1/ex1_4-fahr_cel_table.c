#include <stdio.h>

/**
 * main - prints Celsius-Fahrenheit scale
 * for celsius = 0, 20, ..., 300;
 * Return: 0
 */
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius-Fahrenheit Table\n");
	while (celsius <= upper)
	{
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
