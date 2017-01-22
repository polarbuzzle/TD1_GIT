/**********************************************
* Titre: Travail pratique #1 - Personnel.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*********************************************/
#include "Infirmier.h"
#include <string>
//gros vagin qui pue. 
/*********************************************
*Fonctions:		Constructeur par default
*Descriptions:	Construit l'objet Infirmier aves ses valeurs par defauts
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/

Infirmier::Infirmier() {
	nom_ = "Inconnu";
	prenom_ = "Inconnu";
	nombreChambre_ = 0;
}
/*********************************************
*Fonctions:		Constructeur par parametres
*Descriptions:	Construit l'objet Infirmier aves les parametres
*Parametre:		nom - nom de l'employer ; prenom - prenom de l'employer ; nombreChambre - nombre de chambre de chaque Infirmier
*Retour:		Aucun
*********************************************/
Infirmier::Infirmier(string nom, string prenom, int nombreChambre) {
	nom_ = nom; 
	prenom_ = prenom; 
	nombreChambre_ = nombreChambre;
}

Infirmier:: ~Infirmier() {
	//cout<<"Infirmer"<<nom_<<"suprimme !"<<endl;
}
void Infirmier::setNom(string nouveauNom) {
	nom_ = nouveauNom; 
}
void Infirmier::setPrenom(string nouveauPrenom) {
	prenom_ = nouveauPrenom; 
}
void Infirmier::setNombreChambre(int nouveauNombre) {
	nombreChambre_ = nouveauNombre;
}

string Infirmier::getNom() const {
	return nom_; 
}
string Infirmier::getPrenom() const {
	return prenom_; 
}
int Infirmier::getNombreChambre() const {
	return nombreChambre_;
}

