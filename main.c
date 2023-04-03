#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#define MAX_BUFFER_SIZE 100
int main()
{
	FILE *fp;
	fp=fopen("/home/bugra/Desktop/Makale.txt","r");
	char ktr[1000];
	fgets(ktr,1000,fp);
	test(ktr);
	return 0;
}
