#ifndef POINT_H
#define POINT_H

using namespace std;

class point
{
    float x, y;
public:
    point(float x, float y);
    void deplace(float x, float y);
    void affiche();
    inline float abcisse(){return x;}
    inline float ordonnee(){return y;}
    void copie(point& B);

};

#endif // POINT_H
