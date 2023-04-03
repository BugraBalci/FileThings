#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileThings.h"
#include <stdio.h>

int LetterNumber(char* word,char letter)
{
	int b = 0, leng= 0 ,p=0;
	leng =strlen(word)-1;
	for(int i = 0 ;i < 127; i++)
	{
		for(int k=0 ;k<leng ;k++)
		{
			if(i == word[k] && letter == i)
			{
				b++;
			}
		}
	}
	return b;
}

/*
 * ahmet mehmet
0 dan 128 bir harita var
 * int array[]  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  r  s  t  u  v  y  z
 * int array[] 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 vsss
	+1

*/
