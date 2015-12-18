#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	char buf[1024] = "EXIT: HELLO WORDL" ;
	string str(buf);

	if(strcmp (buf, "TEST")==0) exit(12);

	return 0;
}
