/**********************************************
* Titre: Travail pratique #1 - Specialite.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Définition de la classe Specialite
*********************************************/

#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>
#include <iostream>

using namespace std;

class Specialite {

public :
	//Constructeurs
	Specialite();
	Specialite(string domaine, int niveau);

	//Destructeur
	~Specialite();

	//Accesseurs
	string getDomaine() const;
	int getNiveau() const;

	//Modificateur
	void setDomaine(string domaine);
	void setNiveau(int niveau);

private :
	string domaine_;
	int niveau_;
};


#endif // !SPECIALITE_H
