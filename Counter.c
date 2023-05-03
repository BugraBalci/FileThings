#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>


void Counter(char* dizi, int* sayici){
//	int* sayici = (int*)calloc(ASCII_SIZE,sizeof(int));
	int str = strlen(dizi);
			for(int i = 0; i < str; i++) {
				sayici[((int)dizi[i])-32]++;
			}
//	return sayici;
}
//bu sadece ilk r
//			for(int i= 0;i <ASCII_SIZE; i++){
//				if(sayici[i] > 0)
//					printf("%c harfinden %d kadar vardir\n",(char)i+32,sayici[i]);
//			}

