#include<stdio.h>
#include<string.h>
void compress(char x[]);
int main() {
	char text[50];
	char* p = text;
	scanf_s("%s", text, 49);
	compress(text);
}
void compress(char x[]) {
	char* p = x;
	int i = 0, j = 0, count = 0;
	while (count != strlen(x)) {
		while (*(p + i) == *(p + i + 1)) {
			i++;
			j++;
			count++;
		}
		printf("%c", *(p + (i - j)));
		i++;
		j = 0;
		count++;
	}
}