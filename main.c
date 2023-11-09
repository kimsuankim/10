#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[]="The worst things to eat before you sleep";
	char dst[100];
	
	//strcpy
	strcpy(dst, src);//배열 이름만. (대상, 원본) 
	
	printf("copied string : %s\n", dst);
	
	return 0;
}
