// banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"devise.h"
#include"MAD.h"
#include"dollar.h"
#include"euro.h"
#include"client.h"
#include"compte.h"
#include"compte_courant.h"
#include"compte_epargne.h"
#include"compte_payent.h"
#include"operation.h"
#include"operationRR.h"
#include"operationV.h"
using namespace std;
using namespace Banque;
#include <iostream>

int main()
{


    client* c1 = new client("omdahh", "marouane", "inconue");
    devise* solde1 = new MAD(20000);
    devise* solde2 = new MAD(20000);
    devise* solde3 = new MAD(200);
    solde1->afficher();
    solde1 = solde1->todollar();
    solde1->afficher();
    compte_courant* compte = new compte_courant(c1, solde1,solde3);
    compte->afficher();

    compte->verser(solde3, *compte);
    compte->afficher();

    delete c1;





    std::cout << "Hello World!\n";
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
