/*
#include <stdio.h> //예제 15-5 

int main(void)
{
	char good[80];
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "insa.txt", "rt");

	if (NULL != fp)
	{
		printf("파일 열기 성공\n");

		while (NULL != fgets(good, sizeof(good), fp)) //문자열 이기때문에 sizeof()함수를 써줌
		{
			printf("%s", good);
		}
		fclose(fp);
	}
	else
		printf("파일 열기 실패\n");

	return 0;
}
*/