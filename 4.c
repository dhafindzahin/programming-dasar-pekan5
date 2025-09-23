/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 5 – Decision 2
 * Tugas : [4]
 * Deskripsi singkat: Memberikan output sesuai dari input menggunakan switch case
 * Tanggal: [16 September 2025]
 */

#include <stdio.h>

int main()
{
	char letter;
	int sum, valid_flag;
	printf("Masukkan letter: ");
	scanf("%s", &letter);

	switch (letter)
	{
	case 'X':
		sum = 0;
		printf("sum: %d", sum);
		break;
	case 'Z':
		valid_flag = 1;
		printf("valid_flag: %d", valid_flag);
		break;
	case 'A':
		sum = 1;
		printf("sum: %d", sum);
		break;
	default:
		printf("Unknown letter --->%c\n", letter);
	}
	return 0;
}