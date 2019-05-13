#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char buffman[1000];
int main(int argc, char **argv)
{
	printf("MultiCode - Have multiple programming languages in one file!\n");
	printf("Usage: multicode <FILE>

	return 0;
}
void readfile(char* fname){
	int c;
	int i = 0;
	FILE *file;
	file = fopen("test.mcf","r");
	if (file) {
	while ((c = getc(file)) != EOF){
	  buffman[i] = c;
	  i++;
	}
	fclose(file);
	}
	printf(buffman);
}
void parse(char* inp){

}
