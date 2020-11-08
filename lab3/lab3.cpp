#include <stdio.h>

int check(int a, int b) {
	int x = b;
	while (b < a) {
		b *= x;
	}
	return a - b;
}

int main() {
	int a = 64, b = 2;
	if (check(a, b) == 0) { printf("True"); }
	else { printf("False"); }
	return 0;
}