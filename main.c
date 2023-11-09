#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	FILE* fp;
	
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	{
		printf("failed to open\n");
		return 0;
	}
	
	while((c=fgetc(fp))!= EOF)// 파일에서 한글자 긁어온게  
	{
		putchar(c); // 한글자 출력 
	}
	
	fclose(fp);
	return 0;
}
