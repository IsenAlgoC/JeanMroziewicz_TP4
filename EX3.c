#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#define size 20

int main() {
	char prenom[size];
	char nom[size];
	char ch;
	printf("Entrer votre prenom : ");
	scanf_s("%s", prenom,(unsigned)_countof(prenom));
	printf("Entrer votre nom : ");
	scanf_s("%s", nom, (unsigned)_countof(nom));
	printf("Entrer votre sexe (H ou F) : ");
	ch = _getch();
	ch = toupper(ch);
	switch (ch)
	{
	case 'H':
		printf("\nMonsieur %s %s", prenom, nom);
		break;
	case 'F':
		printf("\nMadame %s %s", prenom, nom);
		break;
	}
}