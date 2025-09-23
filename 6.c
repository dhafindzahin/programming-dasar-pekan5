/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 5 – Decision 2
 * Tugas : [4]
 * Deskripsi singkat: Program menghitung berbagai macam volume dan luas bentuk
 * Tanggal: [16 September 2025]
 */

#include <stdio.h>

int main()
{
	int pilihan, sisi, r, t;

	printf("========MENU========\n");
	printf("1. Menghitung volume kubus\n");
	printf("2. Menghitung luas lingkaran\n");
	printf("3. Menghitung volume silinder\n");
	printf("Masukkan rumus yang inigin dipakai: ");
	scanf("%d", &pilihan);

	switch (pilihan)
	{
	case 1:
		printf("Masukkan sisi: ");
		scanf("%d", &sisi);
		printf("Volume kubus: %d", sisi * sisi * sisi);
		break;
	case 2:
		printf("Masukkan radius: ");
		scanf("%d", &r);
		printf("Luas lingkaran: %d", 3, 14 * r * r);
		break;
	case 3:
		printf("Masukkan radius & tinggi: ");
		scanf("%d %d", &r, &t);
		printf("Volume silinder: %d", 3.14 * r * r * t);
		break;
	default:
		printf("Menu tidak temukan.");
		break;
	}
}
