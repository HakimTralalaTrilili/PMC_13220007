#include <stdio.h>

int max(int num1, int num2) {
   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result; 
}

int min(int num1, int num2) {
   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num2;
   else
      result = num1;
   return result; 
}

int main() {
	int A = 0;
	int B = 0;
	int ins;
	int C;

	while (B != 4) {
		printf("Selamat datang di program waterjug\n");
		printf("Program akan selesai bila terdapat ember berisi 4 liter\n");
		printf("Air di ember A = %d liter (max 3 liter)\n", A);
		printf("Air di ember B = %d liter (max 5 liter)\n", B);
		printf("Pilih nomor instruksi :\n");
		printf("1. isi ember A\n");
		printf("2. isi ember B\n");
		printf("3. kosongkan ember A\n");
		printf("4. kosongkan ember B\n");
		printf("5. tuang isi ember A ke ember B\n");
		printf("6. tuang isi ember B ke ember A\n");
		printf("Masukkan nomor instruksi :");
		scanf("%d", &ins);
		printf("Nomor instruksi yang dipilih adalah nomor %d\n", ins);
		printf("=============================================================\n\n");

		if (ins == 1) {
			A = 3;
		}

		else if (ins == 2) {
			B = 5;
		}

		else if (ins == 3) {
			A = 0;
		}

		else if (ins == 4) {
			B = 0;
		}

		else if (ins == 5) {
			C = max(A-(5-B), 0);
			B = min(B+A, 5);
			A = C;
		}

		else if (ins == 6) {
			C = min(B+A, 3);
			B = max(B-(3-A), 0);
			A = C;
		}

	}
	printf("Air di ember A = %d liter (max 3 liter)\n", A);
	printf("Air di ember B = %d liter (max 5 liter)\n", B);
	printf("Selamat!");
	return 0;
}