#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f1, *f2;
	char ch;
	f1 = fopen("welcome.txt", "r");
	f2 = fopen("output.txt", "w");
	if ((f1 != NULL) && (f2 != NULL)) {
		while ((ch=getc(f1))!=EOF)
			putc(ch, f2);

			fclose(f1);
			fclose(f2);
			printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}