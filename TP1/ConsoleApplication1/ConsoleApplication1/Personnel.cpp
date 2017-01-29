/*
/**********************************************
* Titre: Travail pratique #1 - Personnel.cpp
* Date: 10 janvier 2017
* Auteur : FERRON Samuel, FONTAINE Jean - Frederic
*Description : Implémentation de la classe Personnel 
***********************************************
*/
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>

const int CAPACITE_INIT = 3;
const int DOUBLE = 2;
/*********************************************
*Fonctions:		Personnel::Personnel()
*Descriptions:	Construit l'objet Personnel qui consiste en 2 pointeurs.
*				Le premier pointe vers un tableau de medecin et le second 
*				vers un tableau d'infirmier 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Personnel::Personnel()
{

	tableauMedecins_ = new Medecin[CAPACITE_INIT];
	tableauInfirmiers_ = new Infirmier[CAPACITE_INIT];
	compteurMedecin_ = 0;
	compteurInfirmier_ = 0;
	capaciteTableauMedecins_ = CAPACITE_INIT;
	capaciteTableauInfirmiers_ = CAPACITE_INIT;

}
/*********************************************
*Fonctions:		Personnel::~Personnel()
*Descriptions:	Destructeurs de l'objet personnel 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Personnel::~Personnel()
{
	delete[] tableauMedecins_;
	delete[] tableauInfirmiers_;
}
/*********************************************
*Fonctions:		Personnel::ajouterMedecin
*Descriptions:	Fonction qui permet d'ajouter un medecin dans 
*				le tableau de medecin.
*Parametre:		-(Medecin&)unMedecin : l'objet medecin qu'on veut ajouter au tableau 
*Retour:		Aucun
*********************************************/
void Personnel::ajouterMedecin(Medecin& unMedecin)
{
	//verif capacite
	if (compteurMedecin_ == capaciteTableauMedecins_) {
		Medecin* temp = new Medecin[capaciteTableauMedecins_ * DOUBLE];

		for (unsigned i = 0; i < capaciteTableauMedecins_; i++) {
			temp[i] = tableauMedecins_[i];
		}
		delete[] tableauMedecins_;
		tableauMedecins_ = temp;
		capaciteTableauMedecins_ *= 2;
	}

	tableauMedecins_[compteurMedecin_++] = unMedecin;
}
/*********************************************
*Fonctions:		Personnel::ajouterInfirmier 
*Descriptions:	Fonction qui permet d'ajouter un infirmier dans
*				le tableau d'infirmier.
*Parametre:		-(Infirmier&)unMedecin : l'objet infirmier qu'on veut ajouter au tableau
*Retour:		Aucun
*********************************************/
void Personnel::ajouterInfirmier(Infirmier& unInfirmier) 
	{
		//verif capacite
		if (compteurInfirmier_ == capaciteTableauInfirmiers_) {
			Infirmier* temp = new Infirmier[capaciteTableauInfirmiers_* DOUBLE];

			for (unsigned i = 0; i < capaciteTableauInfirmiers_; i++) {
				temp[i] = tableauInfirmiers_[i];
			}
			delete[] tableauInfirmiers_;
			tableauInfirmiers_ = temp;
			capaciteTableauInfirmiers_ *= 2;
		}
		tableauInfirmiers_[compteurInfirmier_++] = unInfirmier;
	}

/*********************************************
*Fonctions:		Personnel::afficherMedecins
*Descriptions:	Fonction qui permet d'afficher un tableau explicitant 
				tout les détails associé à chaque medecin 
*Parametre:		Aucun
*Retour:		Affichage d'un tableau 
*********************************************/
void Personnel::afficherMedecins()
{
	cout << fixed << "===================================Tableau Medecins======================================" << endl
		<< "=========================================================================================" << endl
		<< "| " << left << setw(20) << "Nom" << "| " << setw(20) << "Horaires" << "| " << setw(20) << "Domaine specialite" << "| " << setw(20)
		<< "Niveau specialite" << "|" << endl;

	for (unsigned i = 0; i < compteurMedecin_; i++) {
		cout << "| " << left << setw(20) << tableauMedecins_[i].obtenirNom() << right << "| " << left << setw(20) << tableauMedecins_[i].obtenirHoraires() << right << "| "
			<< left << setw(20) << tableauMedecins_[i].obtenirSpecialite().getDomaine() << right << "| " << left << setw(20) << tableauMedecins_[i].obtenirSpecialite().getNiveau()
			<< "|" << endl;
	}
}
/*********************************************
*Fonctions:		Personnel::afficherInfirmiers()
*Descriptions:	Fonction qui permet d'afficher un tableau explicitant
*				tout les détails associé à chaque infirmier 
*Parametre:		Aucun
*Retour:		Affichage d'un tableau
*********************************************/
void Personnel::afficherInfirmiers()
{
	cout << fixed << "===================================Tableau Infirmiers====================================" << endl
		<< "=========================================================================================" << endl
		<< "| " << left << setw(27) << "Nom" << "| " << setw(27) << "Prenom" << "| " << setw(28) << "Nombre chambres" << "|" << endl;

	for (unsigned i = 0; i < compteurInfirmier_; i++) {
		cout << "| " << left << setw(27) << tableauInfirmiers_[i].getNom() << "| " << setw(27) << tableauInfirmiers_[i].getPrenom()
			<< "| " << setw(28) << tableauInfirmiers_[i].getNombreChambre() << "|" << endl;
	}
	cout << "=========================================================================================" << endl;
}