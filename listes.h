#ifndef LISTES_HEADER
    #define LISTES_HEADER
    #ifndef LISTES
        #define WHERE_LISTES extern 
    #else 
        #define WHERE_LISTES
    #endif 


    /**
     * @struct cellule
     * une case mémoire de liste chainée 
     */
    typedef struct cellule {
        int s; 
        struct cellule * suivant;     
        struct cellule * precedent ;      
    } cellule; 

    /**
     * @brief Alloue une case mémoire pour une cellule 
     * 
     * @param x un élément de la cellule
     * @return l'adresse de la case mémoire allouée 
     */
    WHERE_LISTES cellule *nouvCel(int x); 

    /**
     * @brief Insère une cellule dans la liste doublement chainée
     * 
     * @param pl position de la cellule à insérer
     * @param cel cellule à insérer
     * @param liste liste doublement chainée 
     */
    WHERE_LISTES void insererCellule(int pl, cellule *cel, cellule *liste); 
    
    /**
     * @brief Supprime une cellule dans la liste doublement chainée 
     * 
     * @param pl Position de la cellule à supprimer 
     * @param liste liste doublement chainée 
     */
    WHERE_LISTES void supprimeCellule(int pl, cellule *liste);
    
    /**
     * @brief Affiche la liste doublement chainée
     * 
     * @param liste liste doublement chainée 
     */
    WHERE_LISTES void afficherListe(cellule *liste); 

    /**
     * @brief Affiche menu pour utilisateur 
     */
    WHERE_LISTES void affichageMenu(); 

#endif 