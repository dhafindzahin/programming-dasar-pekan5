#include <stdio.h>

int main() {
	int nilai;

	printf("Masukkan nilai: ");
	scanf("%d", &nilai);

	if (nilai < 40) {
		printf("Nilai anda adalah E");
	}
	else if (nilai < 55) {
		printf("Nilai anda adalah D");
	}
	else if (nilai < 60) {
		printf("Nilai anda adalah C");
	}
	else if (nilai < 80) {
		printf("Nilai anda adalah B");
	}
	else if (nilai < 100) {
		printf("Nilai anda adalah A");
	}
}