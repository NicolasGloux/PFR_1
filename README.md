# Projet de Reconnaissance de Forme

Ce projet vise à traiter des images pour reconnaître des formes spécifiques en utilisant des techniques de traitement d'image. Le programme lit un fichier texte contenant des informations sur les pixels de l'image, traite ces informations pour identifier des plages de couleur spécifiques, et enregistre les résultats dans des fichiers de sortie.

## Structure du Projet

Le projet est structuré en plusieurs fichiers :

- `ReconnaissanceForme.h` : Fichier d'en-tête contenant les déclarations des structures et des fonctions.
- `ReconnaissanceForme.cpp` : Fichier source contenant les définitions des fonctions.
- `main.cpp` : Fichier principal contenant la fonction `main` qui orchestre le traitement de l'image.

## Fonctionnalités

- Lecture d'un fichier texte contenant des informations sur les pixels de l'image.
- Masquage des deux bits de poids forts en binaire pour chaque pixel.
- Identification des plages de couleur spécifiques (par exemple, 'B' pour bleu).
- Enregistrement des plages identifiées dans un fichier de sortie.
- Calcul et affichage des valeurs minimales et maximales des lignes et colonnes contenant la couleur spécifiée.

## Prérequis

- Compilateur C++ (par exemple, `g++`).
- Fichier texte contenant les informations sur les pixels de l'image (format spécifique requis).

## Compilation

Pour compiler le projet, utilisez la commande suivante dans votre terminal :

```sh
g++ -o reconnaissanceForme main.cpp ReconnaissanceForme.cpp

