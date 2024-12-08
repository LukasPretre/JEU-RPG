#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
#include "Personnages.hpp"
#include <map>
#include <vector>
#include "Barbare.hpp"
#include "Elfe.hpp"
#include "Humain.hpp"
#include "Nain.hpp"
#include "GobelinSarcastique.hpp"
#include "TrollRhetoricien.hpp"
#include "CanardExplosif.hpp"

class tests {
public:
	void test() {
	}

	void run() {
		// Tests unitaires :

// Cr�ation d'un h�ros de chaque classe

		Barbare barbare(100, 100);
		Elfe elfe(100, 100);
		Humain humain(100, 100);
		Nain nain(100, 100);

		// Affichage personnages (Exemple avec Barbare)

		barbare.afficher();

		// Ajout d'objets dans leurs inventaires

		barbare.AddInventaire("Epee");
		elfe.AddInventaire("Arc");
		humain.AddInventaire("Bourse d'or");
		nain.AddInventaire("Pioche");

		// Affichage personnages

		barbare.afficher();

		// Augmentation de niveau

		barbare.UpNiveau();

		// Affichage personnages

		barbare.afficher();

		// R�partition des points gagn�s : 

		barbare.ajoutPoint("Force", 2);
		barbare.ajoutPoint("Intelligence", 1);
		barbare.ajoutPoint("Adresse", 5);

		// Affichage personnages

		barbare.afficher();

		// Ajout de sorts

		barbare.AddSpells("Coup de poing");

		// Affichage personnages

		std::cout << "Affichage des sorts : " << std::endl;

		barbare.AfficherSpells();

		// Cr�ation d'un monstre

		CanardExplosif canardExplosif;

		// Affichage monstre
		std::cout << "" << std::endl;
		std::cout << "Affichage du monstre : " << std::endl;
		canardExplosif.afficher();
	}
};