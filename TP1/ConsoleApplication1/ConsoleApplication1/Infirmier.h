/**********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Définition de la classe Infirmier 
*********************************************/

#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>
#include <iostream>

using namespace std;

class Infirmier {

public :
	Infirmier();
	Infirmier(string nom, string prenom, int nombreChambre);
	~Infirmier(); 

	//Acesseurs
	string getNom() const;
	string getPrenom() const; 
	int getNombreChambre() const; 

	//Modificateurs 
	void setNom(string nouveauNom); 
	void setPrenom(string nouveauPrenom); 
	void setNombreChambre(int nouveauNombre);


private :
	string nom_;
	string prenom_;
	int nombreChambre_; 
};


#endif // !INFIRMIER_H
