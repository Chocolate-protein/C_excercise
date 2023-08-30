/* 13주차 과제용 이승호 개새끼*/

#include <stdio.h>

void filecopy(FILE *, FILE *);
int main(int argc, char *argv[]) {
	FILE *fp;
	if (argc == 1)
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			if ((fp = fopen(*++argv, "r")) == NULL)
			{
				printf("type : can't open %s\n", *argv);
				exit(1);
			} // if
			else {
				filecopy(fp, stdout);
				fclose(fp);
			} // else

			return 0;
} // main()
void filecopy(FILE *ifp, FILE *ofp)
{
	int c;
	while ((c = fgetc(ifp)) != EOF)
		fputc(c, ofp);
	putc("\n", ofp);
} // filecopy()