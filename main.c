#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
	int i;
	FILE* fp;
	//openfile
	fp = fopen("sample.txt","w");
	//write file
	for (i=0; i<3; i++){
	printf("input a word:");
	scanf("%s", str); //str자체가 포인터 
	fprintf(fp, "%s\n", str);
    }
	//close file
	fclose(fp);
	
	return 0;
}
