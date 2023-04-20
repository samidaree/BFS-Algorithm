#include <stdlib.h>
#include <stdio.h>
#include "graph.h"
#include "file.h"

int main(int argc, char ** argv){
    Graph *g = createGraph(); 
    createAdjMatrix(g); 
    printGraph(g);
    fileGraph(g); 
    printMatrix(g); 
    marquerVoisins(g,0); 
    int *l = malloc(sizeof(int)*g->v); 
    int *pred = malloc(sizeof(int)*g->v); 
    plusCourtChemin(g,2, l, pred) ; 

    printf("Les chemins les plus courts entre le sommet de référence et les autres sommets sont : "); 
    for (int i =0; i<g->v; i++){
        printf("%d\t", l[i]); 
    }
    return EXIT_SUCCESS; 

}