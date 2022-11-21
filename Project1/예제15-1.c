/*
#include <stdio.h> //예제 15-1

int main(void)
{
	FILE* fp;
	errno_t err;
	err = fopen_s(&fp, "sample.txt", "wt"); //t생략 가능

	if (NULL != fp)
	{
		printf("1.새로운 파일 생성 후 문자열 저장 완료\n");
		fprintf(fp, "Happy Day\n");
		printf("2.윈도우 탐색기에서 sample.txt 파일 내용 확인\n");
		fclose(fp);
	}
	else
		printf("파일 열기 실패");
	return 0;
}
*/