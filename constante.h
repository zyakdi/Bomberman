#ifndef CONSTANTE_H
#define CONSTANTE_H


#include <SDL/SDL.h>

// STRUCTURES

struct Objet
{
  SDL_Surface *surface;
  SDL_Rect *position;
};

typedef struct Objet Objet;

// DIMENSIONS

#define CASE 45 // Taille d'une case en pixels (A NE PAS MODIFIER)
#define T_PERSO 45 // Taille d'un perso en pixels (pour l'instant T_PERSO = CASE mais on ne sait jamais si il faut modifier sa taille)
#define NB_CASES 15 // Nombre de cases de côté (A NE PAS MODIFIER)

#define LARGEUR CASE*NB_CASES // Tailles de la fenêtre en pixels
#define HAUTEUR CASE*NB_CASES

// VALEURS DES OBJETS

#define VIDE 0 // FAIRE DES ENUM DES QUE J'AI LE TEMPS
#define MUR 1
#define BRIQUE 2
#define PERSO 3
#define BOMBE 4
#define FLAMME 5

// DIRECTIONS

#define HAUT 0
#define BAS 1
#define GAUCHE 2
#define DROITE 3

// AUTRES

#define VITESSE 5
#define MAX 100
#define DELAI_BOMBE 2000 // En millisecondes
#define DELAI_FLAMMES 800


#endif 
