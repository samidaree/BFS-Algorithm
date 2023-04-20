#ifndef FILE_HEADER 
    #define FILE_HEADER
    #ifndef FILE 
        #define WHERE_FILE extern 
    #else 
        #define WHERE_FILE 
    #endif

    #include "listes.h"
    #include "graph.h"
    
    typedef cellule file; 
  
    /**
     * @brief Implémente l'algorithme BFS et affiche le plus court chemin 
     * 
     * @param g Graphe non pondéré
     * @param sommetRef Sommet de référence 
     * @param l Tableau des longueurs de chaque sommet (indice du tableau)
     * @param pred Tableau des prédécésseurs des sommets
     */
    WHERE_FILE void plusCourtChemin(Graph*g, int sommetRef, int *l, int *pred); 
    /**
     * @brief Affiche un sommet juste avant de le défiler 
     * 
     * @param position position du sommet à défiler 
     * @param file file d'attente des sommets
     */
    WHERE_FILE void defiler (int position, cellule * file); 
#endif 
