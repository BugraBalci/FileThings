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
	char Text [100];
	printf ("lutfen cumlenizi giriniz");
	fgets (Text,MAX_BUFFER_SIZE,stdin);
	test(Text);
	return 0;
}
