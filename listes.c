/**
 * @file listes.c
 * @author Sami Boufassa 
 * @brief implémente les listes doublements chainées 
 */

#include "listes.h"
#define LISTES 

#include <stdlib.h>
#include <stdio.h>


cellule *nouvCel (int x){
    cellule * cel;
	cel = (cellule *)malloc(sizeof(cellule));
	if (cel==NULL){
		printf("Pas assez de mémoire\n");
		return (NULL);
	}

	cel->suivant=NULL;
	cel->precedent=NULL;
	cel->s =x ;
	return (cel);
}

void insererCellule(int pl, cellule *cel, cellule * liste){
    cellule * celCourante ; 
    celCourante = liste ; 
    int i = 0; 
    while (i!=pl && celCourante != NULL){
        celCourante= celCourante->suivant; 
        i++; 
    }
   if (celCourante ==NULL){
		printf("La place n'existe pas\n");
	}
	else {
		cel->suivant= celCourante->suivant; 
		cel->precedent = celCourante;
		if (celCourante->suivant !=NULL) 
			celCourante ->suivant->precedent= cel; 
		celCourante ->suivant = cel;
	}
}

void supprimeCellule (int pl, cellule *liste){
    cellule *celCourante= liste; 
    int i = 0;
    // We scan the list until position i or last position NULL if i > list cells number 
    while (i!=pl && celCourante!=NULL){
        celCourante = celCourante -> suivant; 
        i++; 
    } 

    if (celCourante == NULL){
        printf("La position n'existe pas \n"); 
    }
    else {
        celCourante ->precedent->suivant = celCourante -> suivant ; 
        if (celCourante->suivant!=NULL) // celCourant is not the last cell 
            celCourante->suivant->precedent = celCourante ->precedent; 
        free(celCourante); 
    }

}

void afficherListe (cellule *liste){
    cellule *celCourante = liste; 
    int  i =1; 
    while (celCourante->suivant != NULL){
        celCourante = celCourante->suivant;
        printf("Contenu de la cellule %d\t: x : %d\t",i, celCourante->s);
        i++;  
    }

}

void affichageMenu(){
	printf("\n***********\n");
	printf("Insérer une cellule : \t1\n");
	printf("Supprimer une cellule :\t2\n");
	printf("Afficher la liste : \t3\n");
	printf("Quitter le programme \t4\n ");
	printf("\n**********\n") ;
	printf("Votre choix ?\n");

}
