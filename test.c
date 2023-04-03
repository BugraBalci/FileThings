#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

#define ASCII_SIZE 127-32
#define MAX_BUFFER_SIZE 100

void test(char *ptr)
{
	int str=strlen(ptr)-1;
	int sayici[ASCII_SIZE] = {0};
	for(int i= 0; i <str; i++){
		sayici[((int)ptr[i])-32]++;
	}
	for(int i= 0;i <ASCII_SIZE; i++){
		if (sayici[i] > 0)
			printf("%c harfinden %d kadar vardir\n",(char)i+32,sayici[i]);
	}
}

