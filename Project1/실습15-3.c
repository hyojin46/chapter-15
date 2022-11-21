/*
#include <stdio.h> //실습 15-3

int main(void)
{
	int in, i;
	int hap = 0;
	FILE* rfp;
	errno_t err;

	err = fopen_s(&rfp, "test2.txt", "r");
	if (NULL != rfp)
	{
		for (i = 0; i < 5; i++)
		{
			fscanf_s(rfp, "%d", &in);
			hap = hap + in;
		}
		printf("합계 = = > %d", hap);
		fclose(rfp);
	}
	else
		printf("파일이 열리지 않습니다.\n");

	return 0;
}
*/