#include <stdio.h>
#include <string.h>

int main() {
	/* KAMUS */
	FILE *testfile;

	unsigned char testPDF[5];
	unsigned char testJPG[3];
	unsigned char sigPDF[5] = {0x25, 0x50, 0x44, 0x46, 0x20};
	unsigned char sigJPG[3] = {0xFF, 0xD8, 0xFF};

	int valPDF;
	int valJPG;


	/* ALGORITMA */
	testfile = fopen("test.csv", "rb");
	fread(testPDF, sizeof(unsigned char), 5, testfile);

	valPDF = memcmp(sigPDF, testPDF, 5);
	valJPG = memcmp(sigJPG, testPDF, 3);

	if (valPDF == 0) {
		printf("format file adalah PDF\n");
	}

	else if (valJPG == 0) {
		printf("format file adalah JPG\n");
	}

	else {
		printf("format file bukanlah PDF maupun JPG\n");
	}

    	printf("head pdf file :%c\n", testPDF);
   	printf("head jpg file :%c\n", testJPG);
	return(0);
}
