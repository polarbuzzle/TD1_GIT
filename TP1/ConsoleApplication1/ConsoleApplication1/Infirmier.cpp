/**********************************************
* Titre: Travail pratique #1 - Infirmier.cpp
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Implémentation de la classe infirmier
*********************************************/
#include "Infirmier.h"
#include <string>

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
*Parametre:		-(string)nom : nom de l'employer (IN)
*				-(string)prenom : prenom de l'employer (IN)
*				-(int)nombreChambre : nombre de chambre de chaque Infirmier (IN)
*Retour:		Aucun
*********************************************/
Infirmier::Infirmier(string nom, string prenom, int nombreChambre) {
	nom_ = nom; 
	prenom_ = prenom; 
	nombreChambre_ = nombreChambre;
}

/****************************************************************************
* Fonction:	Infirmier::~Inifirmier 
* Description: Destructeur
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
Infirmier:: ~Infirmier() {
	//cout<<"Infirmer"<<nom_<<"suprimme !"<<endl;
}
/****************************************************************************
* Fonction:	Infirmier::setNom
* Description: Permet de modifier le nom de l'infirmier 
* Paramètres:	-(String) nom de l'infirmier (IN)
* Retour:		aucun
****************************************************************************/
void Infirmier::setNom(string nouveauNom) {
	nom_ = nouveauNom; 
}
/****************************************************************************
* Fonction: Infirmier::setPrenom
* Description: Permet de modifier le prenom de infirmier 
* Paramètres:	-(String) Prenont de l'infirmier (IN)
* Retour:		aucun
****************************************************************************/
void Infirmier::setPrenom(string nouveauPrenom) {
	prenom_ = nouveauPrenom; 
}
/****************************************************************************
* Fonction: Infirmier::setNombreChambre
* Description: Permet de modifier le nombre de chambres associé 
*			   à chaque infirmier. 
* Paramètres:	-(int) nouveauNombre : le nouveau nombre de chambre(IN)
* Retour:		aucun
****************************************************************************/
void Infirmier::setNombreChambre(int nouveauNombre) {
	nombreChambre_ = nouveauNombre;
}
/****************************************************************************
* Fonction: Infirmier::getNom()
* Description: Retroune le nom de l'infirmier 
* Paramètres:	aucun
* Retour:		nom_ 
****************************************************************************/
string Infirmier::getNom() const {
	return nom_; 
}
/****************************************************************************
* Fonction: Infirmier::getPrenom() 
* Description:Retourne le prenom de l'infirmier 
* Paramètres:	aucun
* Retour:		prenom_ 
****************************************************************************/
string Infirmier::getPrenom() const {
	return prenom_; 
}
/****************************************************************************
* Fonction: Infirmier::getNombreChambre()
* Description: retourne le nombre de chambre associé a chaque infirmier 
* Paramètres:	aucun
* Retour:		nombreChambre_ 
****************************************************************************/
int Infirmier::getNombreChambre() const {
	return nombreChambre_;
}

