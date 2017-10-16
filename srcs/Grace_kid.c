#include<stdio.h>
#define decode(s,t,u,m) m##s##u##t
#define m decode(a,n,i,m)
#define T() int m()
// hello
T()
{
	FILE *f=fopen("Grace_kid.c", "w");
	char *c="#include<stdio.h>%c#define decode(s,t,u,m) m##s##u##t%c#define m decode(a,n,i,m)%c#define T() int m()%c// hello%cT()%c{%c%cFILE *f=fopen(%cGrace_kid.c%c, %cw%c);%c%cchar *c=%c%s%c;%c%cif(f!=NULL){%c%c%cfprintf(f,c,10,10,10,10,10,10,10,9,34,34,34,34,10,9,34,c,34,10,9,10,9,9,10,9,9,10,9,10);%c%c%cfclose (f);%c%c}%c}";
	if(f!=NULL){
		fprintf(f,c,10,10,10,10,10,10,10,9,34,34,34,34,10,9,34,c,34,10,9,10,9,9,10,9,9,10,9,10);
		fclose (f);
	}
}