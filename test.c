#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#define ASCII_SIZE 127-32
#define MAX_BUFFER_SIZE 100

char*test(char *ptr, int k)
{
	char *dizi = (char*)calloc(5, sizeof(char));
	for (int i = 0; i < k; i++) {
		dizi[i] = *ptr;
		ptr=ptr+k;
	}
	return dizi;
}
//k kaçar kaçar artıcağını yazıyor
/*	char *dizi = (char*)calloc(5, sizeof(char));
	for (int i = 0; i < k; i++) {
		dizi[i] = *ptr;
		ptr=ptr+m;
*/

