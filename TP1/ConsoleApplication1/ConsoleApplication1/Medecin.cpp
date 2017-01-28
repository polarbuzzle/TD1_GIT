/**********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Implémentation de la classe Medecin
*********************************************/

#include"Medecin.h"
/*********************************************
 *Fonctions:		Constructeur par default
 *Descriptions:		Construit l'objet Medecin aves ses valeurs par defauts
 *Parametre:		Aucun
 *Retour:			Aucun
 *********************************************/
Medecin::Medecin() {
	nom_ = "Inconnu";
	horaires_ = 0;
	specialite_ = nullptr;
}

/*********************************************
*Fonctions:		Medecin::Medecin
*Descriptions:	Constructeur par défaut. Construit l'objet Specialite aves ses parametres 
*Parametre:		-(string)nom : nom du medecin (IN)
				-(int)horaires : nombres d'heures associé au medecin (IN)
				-(Specialite*) : Specilité du medecin (IN)
*Retour:		Aucun
*********************************************/
Medecin::Medecin(string nom, int horaires, Specialite* specialite) : specialite_(specialite) {
	nom_ = nom;
	horaires_ = horaires;
}
/*********************************************
*Fonctions:		Medecin::~Medecin()
*Descriptions:	Destructeur de l'objet medecin 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Medecin::~Medecin() {
}
/*********************************************
*Fonctions:		Medecin::obtenirNom()
*Descriptions:	Permet d'obtenir le nom du medecin 
*Parametre:		Aucun
*Retour:		nom_
*********************************************/
string Medecin::obtenirNom() const {
	return nom_;
}
/*********************************************
*Fonctions:		Medecin::obtenirHoraires()
*Descriptions:	Permet d'obtenir le nombre d'heure du medecin 
*Parametre:		Aucun
*Retour:		horaires_
*********************************************/
int Medecin::obtenirHoraires() const {
	return horaires_;
}
/*********************************************
*Fonctions:		Medecin::obtenirSpecialite()
*Descriptions:	Permet d'obtenir la specilité du medecin 
*Parametre:		Aucun
*Retour:		*specialite_
*********************************************/
Specialite Medecin::obtenirSpecialite() const {
	return *specialite_;
}
/*********************************************
*Fonctions:		Medecin::modifierNom
*Descriptions:	Permet de modifier le nom du medecin 
*Parametre:		-(string)nom : nouveau nom du medecin 
*Retour:		Aucun
*********************************************/
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}
/*********************************************
*Fonctions:		 Medecin::modifierHoraires
*Descriptions:	Permet de modifier le nombre d'heure du medecin 
*Parametre:		-(int)horaires : nouveau nombre d'heure 
*Retour:		Aucun
*********************************************/
void Medecin::modifierHoraires(int horaires) {
	horaires_ = horaires;
}
/*********************************************
*Fonctions:		Medecin::modifierSpecialite
*Descriptions:	Permet de modifier la specialité du medecin 
*Parametre:		-(Specialite*)specialite : nouvelle spetialite
*Retour:		Aucun
*********************************************/
void Medecin::modifierSpecialite(Specialite* specialite) {
	specialite_ = specialite;
}

