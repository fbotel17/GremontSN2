#pragma once
class de
{
private:
	int valeur;

public:
	// Constructeurs
	de();          // Constructeur par défaut
	de(int valeur); // Constructeur avec initialisation de la valeur

	// Méthodes
	int lancerDe();
	void resetScore();
	void operator++();
	void operator+=(int& n);
	void operator=(int val);
	bool operator<(int n) const;
	void afficher() const;

private:
	void initialiserAleatoire();
};

