/*-------------------------------------------------------------------------
IPAM - Annee Academique 2015-2016
Bachelier en Informatique
Cours de Principes Algorithmiques et Programmation
Test Dispensatoire de Janvier 2016
---------------------------------------------------------------------------
Remarque: ce fichier est intentionnellement sans caracteres accentues.
---------------------------------------------------------------------------

Enonce:
=======
Dans le calendrier gregorien, une annee est bisextile si son nombre est
divisible par 4 (exemples: 1984, 1960, 2016), sauf si c'est une annee
seculaire (exemples: 1900, 1800, 1700), mais dans ce dernier cas elle sera
quand meme seculaire si son nombre est divisible par 400 (exemples: 2000,
1600).
On vous demande:
(I) D'ecrire le GNS d'un programme qui
 (a) demandera � l'utilisateur:
    - une annee borne inferieure,
    - une annee borne superieure;
 (b) affichera pour chaque annee comprise entre les bornes si celle-ci
      est bisextile ou non.
(II) De traduire le GNS en programme C, avec comme variation que
     ledit programme affichera ensuite, au choix:
    - la liste des annees bisextiles comprises entre les bornes,
    - la liste des annees non bisextiles comprises entre les bornes,
    - la liste complete des annees comprises entre les bornes,
        les annees bisextiles etant alors differenciees des autres
        (par exemple suivie du caractere *).
    Le choix precedent etant propose a l'utilisateur via un menu:
    =======================================================================
    Souhaitez vous afficher les annees comprises entre les bornes fournies:
     1) qui sont bisextiles
     2) qui sont non bisextiles
     3) toutes (avec une marque pour les bisextiles).
     Votre choix (1, 2 ou 3, 0 pour sortir):
    =======================================================================
    Idealement, votre programme C verifiera toujours que les entrees
    attendues de l'utilisateur soient dans le champs des valeurs attendues,
    et en informera l'utilisateur le cas echeant, l'invitant � reiterer son
    entree.

Tant dans le GNS que dans le programme C, veuillez a utiliser les
structures (sequentielles, de choix ou de repetitions) les plus adequates
possibles pour r�aliser les taches necessaires. Soyez econome de votre code
et veuillez a ce que ce dernier soit le plus efficient possible.
N.B.: Le programme ne prendra en compte que les annees � nombre positif.

---------------------------------------------------------------------------
Vous realiserez le GNS sur une feuille de papier, alors que vous ecrirez
votre programme C dans ce fichier que vous renommerez comme suit :
NOM_Prenom_PAP_Test_janvier_2015.c

De plus vous indiquerez vos nom et prenom dans l'espace reserve ci-dessous.

Bon travail.
-------------------------------------------------------------------------------
PS: Ne modifiez aucunement les commentaires de ce fichier, merci.
-------------------------------------------------------------------------------

 Nom:

 Prenom:
-------------------------------------------------------------------------------
Ecrivez votre programme C ci-dessous:
*/

# include <stdio.h>

#define msgNbrePos "Le nombre entre doit etre  strictement positif!\n"
#define msgReStart "Veuillez recommencer s.v.p.\n"

main()
{

    int borneInf, borneSup;
    int choix;
    int i;
    int bisextile;

    printf("Programme Annees Bisextiles.\n");
    printf("============================\n");

    printf("Veuillez entrer les annees bornes (inferieure et superieure). \n");
    //Entree bornes
    // Entree borne inferieure
    do{
        do{
            printf("Entrez la borne inferieure: ");
            scanf("%i",&borneInf);
            if( borneInf<=0)
            {
             printf(msgNbrePos);
             printf("Or vous avez entre %i!\n",borneInf);
             printf(msgReStart);
            }
        }while (borneInf<=0);

        // Entree borne superieure
        do{
            printf("Entrez la borne superieure: ");
            scanf("%i",&borneSup);
            if( borneSup<=0)
            {
             printf(msgNbrePos);
             printf("Or vous avez entre %i!\n",borneSup);
             printf(msgReStart);
            }
        }while (borneSup<=0);
        if(borneInf>borneSup)
        {
         printf("La borne inferieure doit etre plus petite que la borne superieure.\n");
         printf("Or %i > %i\n", borneInf, borneSup);
         printf(msgReStart);
        }

    }while(borneInf>borneSup);
    // Menu choix
    do{
        printf("\nSouhaitez vous afficher les annees comprises entre les bornes fournies:\n");
         printf("\t1) qui sont bisextiles\n");
         printf("\t2) qui sont non bisextiles\n");
         printf("\t3) toutes (avec une marque pour les bisextiles).\n");
         printf("Votre choix (1, 2 ou 3, 0 pour sortir):");
         scanf("%i", &choix);
    }while((choix<0)||(choix>4));
    printf("Vous avez choisi ");
    if(choix==0) printf("de sortir.\n");
    else if(choix==1) printf("d'afficher uniquement les annees bisextiles: \n");
    else if(choix==2) printf("d'afficher uniquement les annees non bisextiles:\n");
    else printf("d'afficher toutes les annees (bisextiles = *):\n");
    // Le choix ci-dessus peut s'effectuer aussi en utilisant un switch
    /*
    switch (choix)
    {
        case 0 : printf("de sortir.\n"); break;
        case 1 : printf("d'afficher uniquement les annees bisextiles: \n");break;
        case 2 : printf("d'afficher uniquement les annees non bisextiles:\n");break;
        case 3 : printf("d'afficher toutes les annees (bisextiles = *):\n");
    }*/

    if(choix!=0)
    {
        for(i=borneInf; i<=borneSup;i++)
        {
            //bisextile=0; // Flag mis a faux par defaut
            if(i%4==0) // Candidate bisextile
                if(i%100==0) //Candidate seculaire
                    if(i%400==0)
                        bisextile=1;
                    else bisextile=0;
                else bisextile=1;
            else bisextile=0;
            // Affichage
            if((choix==1)&&(bisextile)) printf("%i\n",i);
            if((choix==2)&&(!bisextile)) printf("%i\n",i);
            if(choix==3)
            {
                printf("%i",i);
                if (bisextile) printf("*");
                printf("\n");
            }
        }
    }
    printf("\nBye :)\n");
}//Fin du programme
