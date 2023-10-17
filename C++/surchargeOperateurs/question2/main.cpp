#include <iostream>
#include <iostream>

// Classe vecteur
// Surdefinition de l'operateur + par une fonction AMIE
class vecteur
{
    float x, y;
public:
    vecteur(float abs = 0, float ord = 0);
    void affiche() const;
    vecteur operator+(float z) const;//retourne le vecteur correspondent à la somme
    friend vecteur operator+(float z, const vecteur& w);//idem
    void operator--(int);
    friend void operator--(vecteur &w);
    bool operator==(const vecteur& a) const;
};

vecteur::vecteur(float abs, float ord)
{
    x = abs;
    y = ord;
}

void vecteur::affiche() const
{
    std::cout << "x = " << x << " y = " << y << "\n";
}

vecteur vecteur::operator+(float z) const
{
    vecteur res;
    res.x = z + x;
    res.y = z + y;
    return res;
}

vecteur operator+(float z, const vecteur& w)
{
    vecteur res;
    res.x = z + w.x;
    res.y = z + w.y;
    return res;
}

void vecteur::operator--(int)
{
    x--;
    y--;
}

void operator--(vecteur &w)
{
    w.x--;
    w.y--;
}

bool vecteur::operator==(const vecteur& other) const
{
    return x == other.x && y == other.y;
}

int main()
{
    vecteur a(2, 6), b(4, 8), c, d;
    c = a + 6.5;
    c.affiche();
    d = 7.8 + b;
    d.affiche();
    a.affiche();
    a--;
    a.affiche();
    --a;
    a.affiche();
    if (a == b) {
        std::cout << "Les vecteurs a et b sont égaux." << std::endl;
    } else {
        std::cout << "Les vecteurs a et b ne sont pas égaux." << std::endl;
    }
    return 0;
}
