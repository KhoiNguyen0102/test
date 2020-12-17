#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define N 25
#define M 60
#define H 5
#define G 12

COORD coord = {0, 0};
void gotoxy(int x, int y) {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void round1() {
	int i, j;
	for (i = 0; i <= M + 1; i++) {
		if (i == 0) {
			printf("%c", 201);
		}
		else if (i == M + 1) {
			printf("%c", 187);
		}
		else {
			printf("%c", 205);
		}
	}
	
	printf("\n");
	
	for (i = 0; i < N; i++) {
		printf("%c", 186);
		for (j = 0; j < M; j++) {
			if (j == M - 1) {
				printf(" %c\n", 186);
			}
			else {
				printf(" ");
			}
		}
	}
	
	for (i = 0; i <= M + 1; i++) {
		if (i == 0) {
			printf("%c", 200);
		}
		else if (i == M + 1) {
			printf("%c", 188);
		}
		else {
			printf("%c", 205);
		}
	}
}

void round2() {
	int i, j;
	
}


int main() {
	round1();
	round2();
	return 0;
}
