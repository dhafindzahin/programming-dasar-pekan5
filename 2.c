/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 5 – Decision 2
 * Tugas : [4]
 * Deskripsi singkat: Kalkulator sederhana
 * Tanggal: [16 September 2025]
 */

#include <stdio.h>

int main()
{
	int bilagan1, bilangan2, operator;

	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bilagan1);
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bilangan2);

	printf("Menu Matematika\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Pembagian\n");
	printf("4. Perkalian\n");
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
