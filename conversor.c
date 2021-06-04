/* Conversor simples de escalas de temperatura usando somente C.*/
/* Márcio Lopes, 04/06/2021 */
#include <stdio.h>
#include <string.h>

int main()
{
	float celsius, fahrenheit, kelvin;
	 char escala[10];

	printf("Deseja converter Celsius(c), Fahrenheit(f) ou Kelvin(k)? Digite a letra da alternativa.\n");
	scanf("%s", escala);

	if (strcmp (escala, "c") == 0){
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;
	kelvin = 273.15 + celsius;

	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
	printf("%.2f Celsius = %.2f Kelvin", celsius, kelvin);
	} 

	if (strcmp(escala, "f") == 0){
		printf("Digite a temperatura em Fahrenheit: ");
		scanf("%f", &fahrenheit);

		celsius = (fahrenheit -32) / 1.8;
		kelvin = 273.5 + ((fahrenheit - 32.0) * (5.0/9.0));

		printf("%.2f Fahrenheit = %.2f Celsius.\n", fahrenheit, celsius);
		printf("%.2f Fahrenheit = %.2f Kelvin.\n", fahrenheit, kelvin);
	}

	if (strcmp(escala, "k") == 0){
		printf("Digite a temperatura em Kelvin: ");
		scanf("%f", &kelvin);

		celsius = kelvin - 273.15;
		fahrenheit = kelvin * 9/5 - 459.67;

		printf("%.2f Kelvin = %.2f Celsius.\n", kelvin, celsius);
		printf("%.2f Kelvin = %.2f Fahrenheit.\n", kelvin, fahrenheit);
	}
	return 0;
}
