/********************************************
 * Titre: Travail pratique #1 - Medecin.cpp
 * Date: 10 janvier 2017
 * Auteur:
 *******************************************/

#include"Medecin.h"
//p
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
*Fonctions:		Constructeur par default
*Descriptions:	Construit l'objet Specialite aves ses parametres
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Medecin::Medecin(string nom, int horaires, Specialite* specialite) : specialite_(specialite) {
	nom_ = nom;
	horaires_ = horaires;
}

Medecin::~Medecin() {

}

//Accesseurs
string Medecin::obtenirNom() const {
	return nom_;
}

int Medecin::obtenirHoraires() const {
	return horaires_;
}

Specialite Medecin::obtenirSpecialite() const {
	return *specialite_;
}

//Modificateurs
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}

void Medecin::modifierHoraires(int horaires) {
	horaires_ = horaires;
}

void Medecin::modifierSpecialite(Specialite* specialite) {
	specialite_ = specialite;
}

