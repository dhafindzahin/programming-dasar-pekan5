/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 5 – Decision 2
 * Tugas : [4]
 * Deskripsi singkat: Menentukan nilai diskriminan
 * Tanggal: [16 September 2025]
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Masukkan a: ");
    scanf("%f", &a);
    printf("Masukkan b: ");
    scanf("%f", &b);
    printf("Masukkan c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if (d == 0)
    {
        printf("terdapat 2 akar real yang kembar, yaitu \n");
        x1 = -b / (2 * a);
        x2 = x1;
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else if (d > 0)
    {
        printf("terdapat 2 akar real yang berlainan, yaitu \n");
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else // d < 0
    {
        printf("terdapat 2 akar imaginair yang berlainan, yaitu \n");
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("x1 = %f + %fi\n", real, imag);
        printf("x2 = %f - %fi\n", real, imag);
    }

    return 0;
}
