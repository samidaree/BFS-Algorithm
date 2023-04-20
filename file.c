#include <stdlib.h>
#include <stdio.h>
#include "file.h"
#include "listes.h"
#include "graph.h"
#define FILE 

void plusCourtChemin(Graph*g, int sommetRef, int *l, int *pred){
    int * marques ; 
    int x,y ; 
    file *f ; 
    marques = malloc(sizeof(int) * g->v); 
    for (x=0; x<g->v ; x++){
        marques[x] =0; 
        l[x] = 0 ; 
    }

    marques[sommetRef]=1 ;

    // f : file / tête de liste 
    f= nouvCel(-1); 

    cellule * cel = nouvCel(sommetRef); 
    insererCellule(0,cel,f); 

    // Compteur pour suivre la position de la dernière cellule insérée dans la file
    int i = 0; 

    printf("\nLe parcours BFS est : \n "); 

    while (f->suivant!=NULL){
        defiler(1,f); 
        for (x=0; x<g->v ; x++){
            if (marques[x])
                for (y=0;y<g->v;y++)
                    if (g->adj[x][y] && !marques[y]){
                        marques[y] = 1; 
                        cel = nouvCel(y); 
                        insererCellule(i,cel,f); 
                        i++; 
                        pred[y]= x; 
                        l[y] = l[x] +1 ;
                    }
        }
       
    }
}

void defiler(int position, cellule * file){
    printf("%d\n", file->suivant->s); 
    supprimeCellule(position,file); 
}
