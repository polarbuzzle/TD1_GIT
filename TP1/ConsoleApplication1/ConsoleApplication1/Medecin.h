/********************************************
 * Titre: Travail pratique #1 - Medecin.h
 * Date: 10 janvier 2017
 * Auteur:
 *******************************************/

#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialite.h"

using namespace std;

class Medecin
{
public:
	// Constructeurs par defaut et par parametre
	Medecin();
	Medecin(string nom, int horaires, Specialite* uneSpecialite);
	
	//Destructeur
	~Medecin();

	// Methodes d'acces
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialite obtenirSpecialite() const;

	// Methodes de modification
	void modifierNom(string nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite* specialite);


private:

	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
};

#endif
