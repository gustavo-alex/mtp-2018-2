//P3.c
//Gustavo Alexander P. dos S. Sousa
//11711EEL005
#include <stdio.h>
void integrarvalor(char *str,int *s)
{
		if(*str)
		{
 			if(*str>='0'&&*str<='9')
 				*s=*s*10+((*str-'0'));
 	    integrarvalor((str+1), s);
       }
 }
 int main()
 {
 	char str[256]="";
 	int s;
 	scanf("%s",str);
 	integrarvalor(&str[0], &s);
 	printf("%d",s);
 	return 0;
 }
