#include<stdio.h>
void draw(int n);
int main() {
	int n;
	scanf_s("%d", &n);
	draw(n);
	return 0;
}
void draw(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * n - 1; j++) {
			if (i - j == 0 || i + j == 2 * n) { printf(" * "); }
			else { printf("   "); }
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = 1; j <= 2 * n - 1; j++) {
			if (i - j == 0 || i + j == 2 * n) { printf(" * "); }
			else { printf("   "); }
		}
		printf("\n");
	}

}