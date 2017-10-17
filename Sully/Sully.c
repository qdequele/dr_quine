#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	1
*/
int main(){
	int i=5;
	if(strlen(__FILE__)!=7){i--;}
	char *e;asprintf(&e,"Sully_%d",i);char *fi=strcat(strdup(e),".c");FILE *f=fopen(fi,"w");
	char *c="#include<stdio.h>%1$c#include<stdlib.h>%1$c#include<string.h>%1$c/*%1$c%2$c1%1$c*/%1$cint main(){%1$c%2$cint i=%6$d;%1$c%2$cif(strlen(__FILE__)!=7){i--;}%1$c%2$cchar *e;asprintf(&e,%3$cSully_%4$cd%3$c,i);char *fi=strcat(strdup(e),%3$c.c%3$c);FILE *f=fopen(fi,%3$cw%3$c);%1$c%2$cchar *c=%3$c%5$s%3$c;%1$c%2$cif(f!=NULL){fprintf(f,c,10,9,34,37,c,i);fclose(f);}%1$c%2$cif(i>0){char *o;asprintf(&o,%3$ccc -Wall -Werror -Wextra %4$c2$s -o %4$c1$s && ./%4$c1$s%3$c,e,fi);system(o);}%1$c}";
	if(f!=NULL){fprintf(f,c,10,9,34,37,c,i);fclose(f);}
	if(i>0){char *o;asprintf(&o,"cc -Wall -Werror -Wextra %2$s -o %1$s && ./%1$s",e,fi);system(o);}
}