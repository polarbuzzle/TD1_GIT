/**********************************************
* Titre: Travail pratique #1 - Personnel.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: D�finition de la classe Personnel
*********************************************/

#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>

#include "Medecin.h"
#include "Infirmier.h"

using namespace std;

class Personnel
{
public:
	// Constructeur par defaut
	Personnel();

	// Destructeur
	~Personnel();

	// Methodes publiques
	void ajouterMedecin(Medecin& medecin);
	void ajouterInfirmier(Infirmier& unInfirmier);

	void afficherMedecins();
	void afficherInfirmiers();

private:

	// Variables privees
	Medecin*   tableauMedecins_;
	Infirmier* tableauInfirmiers_;

	unsigned int compteurMedecin_;
	unsigned int compteurInfirmier_;

	unsigned int capaciteTableauMedecins_;
	unsigned int capaciteTableauInfirmiers_;
};

#endif
