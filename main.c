/*
 * main.c
 * esercitazione 9.1
 *
 *  Created on: 28 apr 2021
 *      Author: Piersilvio spicoli
 */

#include <stdio.h>
#define n 2

/* prototipi */
void swapp(char**, char**);
void stampa(char**, char**, int);

int main()
{
	//var. locali
	char* per_A[n] = {"Mario", "Rossi"};
	char* per_B[n] = {"Luigi", "Bianco"};
	int i = 0;

	puts("\n\t output prima dello swapp: \n");
	stampa(per_A, per_B, i);

	for(i = 0; i < n; i++)
	{ swapp( (per_A + i), (per_B + i) ); }

	puts("\n\t output dopo dello swapp: \n");
	stampa(per_A, per_B, i);

	return 0;
}

void swapp(char** a, char** b)
{
	char* tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* char** a (per ECLIPSE) -> char* a[] */
void stampa(char** a, char** b, int i)
{
	for(i = 0; i < n; i++)
	{
		printf("\t %s ", a[i]);
	}

	puts("\n");

	for(i = 0; i < n; i++)
	{
		printf("\t %s ", b[i]);
	}
	puts("\n");
}
