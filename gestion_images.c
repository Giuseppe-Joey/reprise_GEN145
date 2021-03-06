/********
Fichier : gestion_images.c
Auteurs : Giuseppe Lomonaco
		  Milan Deve
Date    : 19 Fevrier 2022
Description : Problematique GEN145.
********/



#include <stdio.h>
#include <string.h>
#include "bibliotheque_images.h"
#include "AutoValidation.h"

int image1[MAX_HAUTEUR][MAX_LARGEUR];
int image2[MAX_HAUTEUR][MAX_LARGEUR];
struct RGB imageRGB1[MAX_HAUTEUR][MAX_LARGEUR];
struct RGB imageRGB2[MAX_HAUTEUR][MAX_LARGEUR];


int main()
{
	AutoValidation();
	
/*
    int lignes1, colonnes1;
    int lignes2, colonnes2;
    int maxval;
    int histogramme[MAX_VALEUR+1];
    char nom[MAX_CHAINE];
    struct MetaData metadonnees;

	int retour;

    printf("-> Debut!\n\n");


	////////////////////////////////////////////////////////////////
	// 		OPERATIONS POUR LES IMAGES EN NOIR ET BLANC
	///////////////////////////////////////////////////////////////
	
	// Reading file
    retour = pgm_lire("Sherbrooke_Frontenac_nuit_pgm.txt", image1, 
                      &lignes1, &colonnes1, 
                      &maxval, &metadonnees);
    
    // Copying file
	//pgm_copier(image1, &lignes1, &colonnes1, image2, &lignes2, &colonnes2);
                      
    //pgm_creer_histogramme(image2, &lignes2, &colonnes2, histogramme);
    //printf(histogramme);       
    
    // Preponderante color
    pgm_couleur_preponderante(image1, lignes1, colonnes1);  
                               
    // clockwise rotation (1)                  
    pgm_pivoter90(image1, &lignes1, &colonnes1, 1);
     
	// Writing file
	int PGM_file = "resultatsPGM.txt";
	//int PGM_file = "resultats.pgm";
    pgm_ecrire(PGM_file, image1, 
               lignes1, colonnes1, 
               maxval, metadonnees);
               
       
    
    
    
    
    ////////////////////////////////////////////////////////////////
	// 			OPERATIONS POUR LES IMAGES EN COULEUR
	///////////////////////////////////////////////////////////////             
           
	// Reading file ppm
    retour = ppm_lire("Sherbrooke_Frontenac_nuit_ppm.txt", imageRGB1, 
                      &lignes1, &colonnes1, 
                      &maxval, &metadonnees);
                      
         
    // clockwise rotation (1) 
    //ppm_pivoter90(imageRGB1, &lignes1, &colonnes1, 1);
    
	// Writing file
	int PPM_file = "resultatsPPM.txt";
	//int PPM_file = "resultats.ppm";

    ppm_ecrire(PPM_file, imageRGB1, 
               lignes1, colonnes1, 
               maxval, metadonnees);
    
    ppm_sont_identiques(imageRGB1, &lignes1, &colonnes1, imageRGB2, &lignes2, &colonnes2);                        
    ///////////////////////////////////////////////////////////////                          
               
               
    // exemple detraitement d'un code de retour (erreur ou reussite)
	printf("-> Retour: ");
	
	if (retour == OK)
		printf("-> OK\n");
	else
		printf("-> ERREUR\n");           

    printf("-> Fin!\n");
*/

	return OK;
}
