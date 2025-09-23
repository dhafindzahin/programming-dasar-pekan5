/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 5 – Decision 2
 * Tugas : [4]
 * Deskripsi singkat: Kalkulator sederhana dengan switch case
 * Tanggal: [16 September 2025]
 */

#include <stdio.h>

int main()
{
	int valid_operator = 1;
	char operator;
	float number1, number2, result;

	printf("Masukkan 2 buah bilangan & sebuah operator\n");
	printf("Dengan format: number1 operator number2\n");
	scanf("%f %c %f", &number1, &operator, &number2);

	switch (operator)
	{
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	default:
		valid_operator = 0;
		break;
	}

	switch (valid_operator)
	{
	case 1:
		printf("\n%f %c %f is %f \n", number1, operator, number2, result);
		break;
	default:
		printf("Invalid operator! %c\n", operator);
		break;
	}
}
