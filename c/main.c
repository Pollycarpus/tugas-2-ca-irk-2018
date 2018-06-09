#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Compressed.h"

Compress tmp;
int main(int argc, char* argv[]){
	int query = argv[2][0] - '0';
	if (query == 1){
		clock_t begin = clock();
		tmp = doCompress(argv[1]);
		clock_t end = clock();
		printf("Ukuran hasil kompresi adalah: %ld byte(s)\n", sizeof(tmp));
		printf("Eksekusi waktu hasil kompreasi adalah: %.03f\n", (double) (begin - end)/CLOCKS_PER_SEC);
	} else {
		clock_t begin = clock();
		decompress(argv[1]);
		clock_t end = clock();
		printf("Eksekusi waktu hasil de-kompreasi adalah: %.03f\n", (double) (begin - end)/CLOCKS_PER_SEC);
	}
}