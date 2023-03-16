#include <stdio.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>

int main()
{
	FILE *fileo;
	fileo=fopen("FileThings.txt","w");
	char text [100];
	int lettercounter [50];
	char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z','q','w','x',' ',','};
	int lettersize = sizeof(letters) / sizeof(letters[0]);
	int k = 0, str = 0;
	printf("lutfen cumlenizi giriniz");
	fgets(text,100,stdin);
	str = strlen(text)-1;
		for(int k=0;k<lettersize;k++)
		{
			fprintf(fileo,"%c den %d kadar vardır\n",letters[k],letternumber(letters[k],text));
		}
	return 0;
}
