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