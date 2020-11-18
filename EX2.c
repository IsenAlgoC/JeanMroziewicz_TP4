#include <stdio.h>
#include <stdlib.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	int i;
	for (i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
	}
	for (i = 0; i < TAILLETAB1; i++) {
		printf("%d%c",MyTab1[i],SEPARATEUR);
	}
	int *MyPtr1=&MyTab1[i-1];
	printf("\n");
	for (i = 0; i < TAILLETAB1; i++) {
		printf("%d%c", *MyPtr1, SEPARATEUR);
		MyPtr1--;
	}
}
