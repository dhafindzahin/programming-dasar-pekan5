#include <stdio.h>

int main()
{
	int bilagan1, bilangan2, operator;

	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bilagan1);
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bilangan2);

	printf("Menu Matematika");
	printf("1. Penjumlahan");
	printf("2. Pengurangan");
	printf("3. Pembagian");
	printf("4. Perkalian");
	printf("Masukkan pilihan anda: ");
	scanf("%d", &operator);

	if (operator == 1)
	{
		printf("Hasil operasi tersebut: %d", bilagan1 + bilangan2);
	}

	else if (operator == 2)
	{
		printf("Hasil operasi tersebut: %d", bilagan1 - bilangan2);
	}

	else if (operator == 3)
	{
		printf("Hasil operasi tersebut: %d", bilagan1 / bilangan2);
	}
	else if (operator == 4)
	{
		printf("Hasil operasi tersebut: %d", bilagan1 * bilangan2);
	}

	return 0;
}
