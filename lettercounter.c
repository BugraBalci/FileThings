#include <stdio.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>

int letternumber(char letter,char* word){//a geldi bide asdqweasd geldi mesela
	int len = 0, b = 0;
	len=strlen(word)-1;
	for(int i = 0 ;i < len; i++)
	{
		if(letter == word[i])
		{
			b++;
		}
	}
	return b;
}

