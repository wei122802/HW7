#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main() {
	FILE *f;
	char ch,str[MAX];
	int i=0;
	f = fopen("output.txt", "a");
	printf("�п�J�r��A��ENTER�䵲����J:\n");

	while ((ch = getche()) != ENTER &&  i < MAX)
		str[i++] = ch;
	putc('\n', f);
	fwrite(str, sizeof(char), i, f);
	fclose(f);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}