#include <stdio.h>
#include <stdlib.h>
#include "ReconnaissanceForme.h"

int main() {
    struct InformationsImage infos;
    char *cheminFichier = "//home/nicolas/Documents/PFR_1/Image/IMG_300/IMG_5407.txt";
    char couleur = 'B';  // spécifier la couleur ici

    const char *resultat = traiterImage(cheminFichier, &infos, couleur);

    // Ouvrir un fichier en écriture
    FILE *outputFile = fopen("resultat.txt", "w");

    if (outputFile == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier de sortie pour le résultat.\n");
        return 1; // Indique une erreur
    }

    // Écrire le contenu de la variable 'resultat' dans le fichier
    fprintf(outputFile, "%s\n", resultat);

    // Fermer le fichier
    fclose(outputFile);

    return 0;
}
