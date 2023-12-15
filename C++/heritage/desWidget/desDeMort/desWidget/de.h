#pragma once
class de
{
private:
	int valeur;
	int scoreTotal;

public:
	// Constructeurs
	de();          // Constructeur par d�faut
	de(int valeur); // Constructeur avec initialisation de la valeur

	// M�thodes
	void lancerDe();
	void resetScore();
	de& operator++(int);
	friend int operator+=(int& n, de de);
	void operator=(int val);
	friend int operator<(int& n, de de);
	void afficher() const;

private:
	void initialiserAleatoire();
};

