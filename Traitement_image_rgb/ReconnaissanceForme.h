#ifndef RECONNAISSANCE_FORME_H
#define RECONNAISSANCE_FORME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Range {
    int numeroLigne;
    int debut;
    int fin;
    int nbBParLigneB;
    int nbNParLigneN;
};

struct InformationsImage {
    int nbLignes;
    int nbColonnes;
    int nbTableaux;
    int ***matriceRGBEntiers;
    char ****matriceRGBBinaires;
    char ***matriceQuantification;
    char **matriceCarac;
    struct Range *plagesB;
};

// Déclarations des fonctions
char *masquerDeuxBitsPoidsFortEnBinaire(int valeur);
int binaireVersDecimal(const char *binaire);
void enregistrerPlagesB(struct InformationsImage *infos);
void compterDansPlageB(struct InformationsImage *infos);
void trouverEtStockerPlageB(struct InformationsImage *infos);
const char *trouverMinMaxPlagesB(struct InformationsImage *infos);
const char *traiterImage(char *cheminFichier, struct InformationsImage *infos, char couleur);

#endif // RECONNAISSANCE_FORME_H