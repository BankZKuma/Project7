#include<stdio.h>
#include<string.h>
void swap(int* a, int* b);
int main() {
	int x[3] = { 0,1,2 };
	char text[50];
	scanf_s("%s", text, 49);
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == 'A' || text[i] == 'B' || text[i] == 'C') {
			if (text[i] == 'A') {
				swap(&x[0], &x[1]);
			}
			else if (text[i] == 'B') {
				swap(&x[1], &x[2]);
			}
			else {
				swap(&x[0], &x[2]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		if (x[i] == 0) {
			printf("%d", i + 1);
		}
	}
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}