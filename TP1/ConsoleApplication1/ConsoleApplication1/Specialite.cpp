/*
//**********************************************
* Titre: Travail pratique #1 - Specialite.cpp
* Date: 10 janvier 2017
* Auteur : FERRON Samuel, FONTAINE Jean - Frederic
*Description : Implémentation de la classe Specialite
***********************************************
*/

#include "Specialite.h"

/*********************************************
*Fonctions:		Specialite::Specialite()
*Descriptions:	Construit l'objet Specialite aves ses valeurs par defauts
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Specialite::Specialite() {
	domaine_ = "aucun";
	niveau_ = 0;
}

/*********************************************
*Fonctions:		Specialite::Specialite
*Descriptions:	Construit l'objet avec les parametres entres
*Parametre:		-(string)domaine : domaine de spacilite (IN)
*				-(int)niveau : niveau de specialité (IN)
*Retour:		Aucun
*********************************************/
Specialite::Specialite(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}
/*********************************************
*Fonctions:		Specialite::~Specialite()
*Descriptions:	Destructeur de l'objet Specialite 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Specialite::~Specialite() {
	//Destructeur
}
/*********************************************
*Fonctions:		Specialite::getDomaine()
*Descriptions:	Retourne le domaine de specialite 
*Parametre:		Aucun
*Retour:		domaine_
*********************************************/
string Specialite::getDomaine() const {
	return domaine_;
}
/*********************************************
*Fonctions:		Specialite::getNiveau()
*Descriptions:	Retourne le niveau de Specialite
*Parametre:		Aucun
*Retour:		niveau_
*********************************************/
int Specialite::getNiveau() const {
	return niveau_;
}
/*********************************************
*Fonctions:		 Specialite::setDomaine
*Descriptions:	permet de modifier le nom du domaine de Specialite
*Parametre:		-(string)domaine : nom du nouveau domaine(IN)
*Retour:		aucun
*********************************************/
void Specialite::setDomaine(string domaine) {
	domaine_ = domaine;
}
/*********************************************
*Fonctions:		 Specialite::setDomaine
*Descriptions:	permet de modifier le niveau de Specialite
*Parametre:		-(int)niveau : nouveau niveau(IN)
*Retour:		aucun
*********************************************/
void Specialite::setNiveau(int niveau) {
	niveau_ = niveau;
}