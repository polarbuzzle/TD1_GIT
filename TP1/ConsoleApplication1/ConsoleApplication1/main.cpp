/**************************************************
 * Titre: Travail pratique #1 - Main.cpp
 * Date: 10 janvier 2017
 * Auteur:
**************************************************/

#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{	
	//C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez un objet du type Infirmier � l'aide du constructeur par d�faut
	Infirmier jean;
	//2-  Modifiez le nom, le prenom et le nbChambre de cet objet � l'aide des m�thodes de modification
	jean.setNom("Janvier");
	jean.setPrenom("Steve");
	jean.setNombreChambre(43);
	//3-  Creez 11 autres objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier Inf0("Paul", "Jean", 34);
	Infirmier Inf1("Paul", "Jean", 34);
	Infirmier Inf2("Paul", "Jean", 34);
	Infirmier Inf3("Paul", "Jean", 34);
	Infirmier Inf4("Paul", "Jean", 34);
	Infirmier Inf5("Paul", "Jean", 34);
	Infirmier Inf6("Paul", "Jean", 34);
	Infirmier Inf7("Paul", "Jean", 34);
	Infirmier Inf8("Paul", "Jean", 34);
	Infirmier Inf9("Paul", "Jean", 34);
	Infirmier Inf10("Paul", "Jean", 34);
	//4-  Creez un objet du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel;
	//5-  Ajoutez les 12 objets du type Infimier � tableauInfirmiers de ce dernier
	personnel.ajouterInfirmier(jean);
	personnel.ajouterInfirmier(Inf0);
	personnel.ajouterInfirmier(Inf1);
	personnel.ajouterInfirmier(Inf2);
	personnel.ajouterInfirmier(Inf3);
	personnel.ajouterInfirmier(Inf4);
	personnel.ajouterInfirmier(Inf5);
	personnel.ajouterInfirmier(Inf6);
	personnel.ajouterInfirmier(Inf7);
	personnel.ajouterInfirmier(Inf8);
	personnel.ajouterInfirmier(Inf9);
	personnel.ajouterInfirmier(Inf10);
	//6-  Creez un objet du type Specialite � l'aide du constructeur par d�faut
	Specialite Chirurgien;
	//7-  Modifiez le domaine et le niveau de cet objet � l'aide des m�thodes de modification
	Chirurgien.setDomaine("Coeur");
	Chirurgien.setNiveau(15);
	//8-  Creez 5 autres objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Specialite sp0("weedLMAO", 420);
	Specialite sp1("weedLMAO", 420);
	Specialite sp2("weedLMAO", 420);
	Specialite sp3("weedLMAO", 420);
	Specialite sp4("weedLMAO", 420);
	//9-  Creez un objet du type Medecin � l'aide du constructeur par d�faut
	Medecin steve;
	//10- Modifiez le nom, les horaires et la specialite de ce dernier
	steve.modifierNom("Steve");
	steve.modifierHoraires(44);
	steve.modifierSpecialite(&sp0);
	//11- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Medecin med0("Louise", 45, &Chirurgien);
	Medecin med1("Louise", 45, &Chirurgien);
	Medecin med2("Louise", 45, &Chirurgien);
	Medecin med3("Louise", 45, &Chirurgien);
	Medecin med4("Louise", 45, &Chirurgien);
	//12- Expliquez la relation entre les deux objets Medecin et Specialite. Justifiez votre r�ponse

	/*
	
	*/

	//13- Ajoutez les 6 objets du type Medecin � tableauMedecins de l'objet Personnel d�j� cr��
	personnel.ajouterMedecin(steve);
	personnel.ajouterMedecin(med0);
	personnel.ajouterMedecin(med1);
	personnel.ajouterMedecin(med2);
	personnel.ajouterMedecin(med3);
	personnel.ajouterMedecin(med4);

	//14- Affichez la liste des medecins
	personnel.afficherMedecins();
	//15- Affichez la liste des infirmiers


	return 0;
}
