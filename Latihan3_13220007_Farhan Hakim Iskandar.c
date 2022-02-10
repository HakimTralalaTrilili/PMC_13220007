#include <stdio.h>

struct mahasiswa {
	char nama[80];
	int nim;
	float kehadiran;
};

int i;

struct mahasiswa kelas[5] = {
	{"mahmud", 13269001, 0.92},
	{"jamrud", 13269002, 0.66},
	{"syamsudin", 13269003, 0.48},
	{"syaropah", 13269004, 0.99},
	{"munawaroh", 13269005, 0.78}
};

int main() {
	printf("Mahasiswa dengan kehadiran di bawah 80 persen adalah sebagai berikut :\n");

	for (i=0 ; i<5 ; ++i) {
		if (kelas[i].kehadiran < 0.8) {
			printf("%s %d kehadiran : %f\n", kelas[i].nama, kelas[i].nim, kelas[i].kehadiran);
		}
	}

	return(0);
}