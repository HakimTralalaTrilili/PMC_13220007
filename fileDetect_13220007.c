#include <stdio.h>
#include <string.h>

int main() {
	/* KAMUS */
	FILE *tb;

	unsigned char headPDF[5];
	unsigned char headJPG[3];
	unsigned char sigPDF[5] = {0x25, 0x50, 0x44, 0x46, 0x2D};
	unsigned char sigJPG[3] = {0xFF, 0xD8, 0xFF};

	int valPDF;
	int valJPG;


	/* ALGORITMA */
	tb = fopen("test.pdf", "rb");
	fread(headPDF, sizeof(headPDF), 1, tb);

	valPDF = memcmp(sigPDF, headPDF, 5);
	valJPG = memcmp(sigJPG, headPDF, 3);

	if (valPDF == 0) {
		printf("format file adalah PDF\n");
	}

	else if (valJPG == 0) {
		printf("format file adalah JPG\n");
	}

	else {
		printf("format file bukanlah PDF maupun JPG\n");
	}

    	printf("head pdf file :%c\n", &headPDF);
    	printf("head jpg file :%c\n", &headJPG);
	return(0);
}
