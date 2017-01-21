/**********************************************
 * Titre: Travail pratique #1 - Personnel.cpp
 * Date: 10 janvier 2017
 * Auteur:
 *********************************************/



#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>

const int CAPACITE_INIT = 10;
const int DOUBLE = 2;

Personnel::Personnel()
{

	tableauMedecins_ = new Medecin[CAPACITE_INIT];
	tableauInfirmiers_ = new Infirmier[CAPACITE_INIT];
	compteurMedecin_ = 0;
	compteurInfirmier_ = 0;
	capaciteTableauMedecins_ = CAPACITE_INIT;
	capaciteTableauInfirmiers_ = CAPACITE_INIT;

}

Personnel::~Personnel()
{
	delete[] tableauMedecins_;
	delete[] tableauInfirmiers_;
}

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

void Personnel::afficherMedecins()
{
	cout << fixed << "=====================================Tableau Medecins=====================================" << endl
		<< "==========================================================================================" << endl
		<< "| Nom" << setw(25) << "| Horaires" << setw(30) << "| Domaine specialite" << setw(25) << "| Niveau specialite" << setw(5) << "|" << endl;

	for (unsigned i = 0; i < compteurMedecin_; i++) {
		cout << "| " << tableauMedecins_[i].obtenirNom() << setw(25) << "| " << tableauMedecins_[i].obtenirHoraires() << setw(30) << "| "
			<< tableauMedecins_[i].obtenirSpecialite().getDomaine() << setw(25) << "| " << tableauMedecins_[i].obtenirSpecialite().getNiveau()
			<< setw(5) << "|" << endl;
	}

}

void Personnel::afficherInfirmiers()
{
// A completer
}