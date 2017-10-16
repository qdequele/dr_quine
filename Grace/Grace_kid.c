#include<stdio.h>
#define decode(s,t,u,m) m##s##u##t
#define m decode(a,n,i,m)
#define T() int m()
/*
	1
*/
T(){
	FILE *f=fopen("Grace_kid.c", "w");
	char *c="#include<stdio.h>%1$c#define decode(s,t,u,m) m##s##u##t%1$c#define m decode(a,n,i,m)%1$c#define T() int m()%1$c/*%1$c%2$c1%1$c*/%1$cT(){%1$c%2$cFILE *f=fopen(%3$cGrace_kid.c%3$c, %3$cw%3$c);%1$c%2$cchar *c=%3$c%4$s%3$c;%1$c%2$cif(f!=NULL){%1$c%2$c%2$cfprintf(f,c,10,9,34,c);%1$c%2$c%2$cfclose(f);%1$c%2$c}%1$c}";
	if(f!=NULL){
		fprintf(f,c,10,9,34,c);
		fclose(f);
	}
}