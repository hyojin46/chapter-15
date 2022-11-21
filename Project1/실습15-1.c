/*
#include <stdio.h> //실습 15-1

int main(void)
{
	char fname[] = "basic.txt";
	char name[30] = "박효진";
	int point = 100;
	FILE* f;
	errno_t err;

	err = fopen_s(&f, "basic.txt", "wt");

	if (NULL != f)
	{
		fprintf(f, "박효진");
		printf("이름이 %s인 학생의 성적은 %d 입니다.\n", name, point);
		fclose(f);
	}
	else
		printf("파일이 열리지 않습니다.\n");

	puts("프로젝트 폴더에서 파일 basic.txt를 메모장에서 열어보세요");

	return 0;
}
*/
