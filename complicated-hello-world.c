#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Written by anusO1
// For DevingOnDiscord

int x;

int main() {
	speak();
	return 0;
}

int speak() {
	srand(time(NULL));
	int z = rand() % 20;
	int y = rand() % 17;
	int x = z + y;
	if (x % 2 == 0) {
		x++;
		int x = x + rand();
		speak();
	} else if (x % 5 == 0) {
		srand(time(NULL));
		x = x + 14;
		x = x + rand();
		speak();
	} else if (x % 3 == 0) {
		printf("Hello, World\n");
	} else {
		printf("Hello, DevingOnDiscord\n");
	}
}
