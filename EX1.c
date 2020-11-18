#include "tp4.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12; HeureDebut.minute = 30;
	Duree.heure = 00; Duree.minute = 45;
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;
	int a= (HeureDebut.minute + Duree.minute) / 60;
	HeureFin.heure = HeureDebut.heure + Duree.heure + a;
	printf("\n Heure de debut = %d:%d \n", HeureDebut.heure, HeureDebut.minute);
	printf("\n Duree = %d:%d \n", Duree.heure, Duree.minute);
	printf("\n Heure de fin = %d:%d \n", HeureFin.heure, HeureFin.minute);

}
