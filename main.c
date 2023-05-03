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
	int kk[ASCII_SIZE] = {0};
	fp=fopen("/home/bugra/Desktop/Makale.txt","r");
	char ktr[1000];
	fgets(ktr,1000,fp);
	int ok=0;
	printf("Lutfen kacinci karaktere kadar okumak istediginizi ve kacar kacar"
		   " sekilde okumak istedginizi yazınız yazınız 1000 karakteri gecmesin: \n");
	scanf("%d\n",&ok);
	char *p = test(ktr,ok);
	printf("%s\n",p);
	Counter(p,kk);
	for (int i=0;i<ASCII_SIZE;i++)
	printf("%c: %d\n",(char)i+32,kk[i]);
	fclose(fp);
	return 0;
}
//	printf("Isleme devam etmek istiyor musun ?\n1.Evet\n2.Hayir");
//	int n=0;
//	scanf("%d",&n);
//	if(n==1){
//		printf("en son %d. karakterde kalmısınız ne kadar devam etmek istiyorsunuz ?",ok);
//		int m=0;
//		scanf("%d",&m);
//		test(ktr,m);
//	}
/*	else{
 * printf("islem sonlandi")
 * }
*/

