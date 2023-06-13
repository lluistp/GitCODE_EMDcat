// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include<fstream>
#include <iostream>
#include <set>
#ifndef COMARCA_H
#define COMARCA_H

using namespace std;

/*CLASSE amb les principals caracteristiques d'una comarca*/

class Comarca
{
    public:
        //CONSTRUCTOR:
        Comarca();
        //Pre: --;
        //Post: crea comarca amb codi = 0, nom igual a "desconegut";
        Comarca(const int &codi, const string nom);
        //Pre: --;
        //Post: crea comarca amb a_codi = codi, a_nom igual a nom;

        //MODIFICADORS:
        void afegirMunicipi(int codiMun);
        //Pre: --;
        //Post: afegeix el codi del municipi al set de la comarca. Si ja existeix l'ignora;


        //CONSULTORS:
        int getCodi() const;
        //Pre: --;
        //Post: retorna el codi;
        string getNom() const;
        //Pre: --;
        //Post: retorna el nom;


    private:
        int a_codi;
        string a_nom;
        set <int> s_codiMun;
};

#endif // COMARCA_H
