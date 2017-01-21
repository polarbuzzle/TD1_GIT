/**********************************************
* Titre: Travail pratique #1 - Personnel.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*********************************************/

#include "Specialite.h"

/*********************************************
*Fonctions:		Constructeur par default
*Descriptions:	Construit l'objet Specialite aves ses valeurs par defauts
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Specialite::Specialite() {
	domaine_ = "aucun";
	niveau_ = 0;
}

/*********************************************
*Fonctions:		Constructeur par parametres
*Descriptions:	Construit l'objet avec les parametres entres
*Parametre:		domaine - nom du domaine ; niveau - entier representant le niveau
*Retour:		Aucun
*********************************************/
Specialite::Specialite(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}

Specialite::~Specialite() {
	//Destructeur
}

//Accesseurs
string Specialite::getDomaine() const {
	return domaine_;
}

int Specialite::getNiveau() const {
	return niveau_;
}

//Modificateurs
void Specialite::setDomaine(string domaine) {
	domaine_ = domaine;
}

void Specialite::setNiveau(int niveau) {
	niveau_ = niveau;
}