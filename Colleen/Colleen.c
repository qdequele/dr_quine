#include <stdio.h>
/* Hello */
void lol() {}
int main(void) {
	// toto
	lol();
	char *c="#include <stdio.h>%c/* Hello */%cvoid lol() {}%cint main(void) {%c%c// toto%c%clol();%c%cchar *c=%c%s%c;%c%cprintf(c,10,10,10,10,9,10,9,10,9,34,c,34,10,9,10);%c}";
	printf(c,10,10,10,10,9,10,9,10,9,34,c,34,10,9,10);
}