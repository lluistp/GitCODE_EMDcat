// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include <fstream>
#include <iostream>
#include <set>
#include "EMD.h"
#ifndef MUNICIPI_H
#define MUNICIPI_H

using namespace std;

class Municipi
{
    public:
        //CONSTRUCTOR:
        Municipi();
        //Pre: --;
        //Post: crea municipi amb codiComarca = codi = 0, nom igual a "desconegut", i poblacio = extensio = 0.0;
        Municipi(int codiCom, int codi, string nom, int poblacio, double extensio);
        //Pre: --;
        //Post: crea municipi segons parametres d'entrada;


        //MODIFICADORS:
        void afegirEMD(EMD emdNova);
        //Pre: EMD creada.
        //Post: insereix la emdNova. En cas d'existir, s'ignora;

        //CONSULTORS:
        void mostraEMDs() const;
        //Pre: --;
        //Post: cout del set de EMDs;
        int getCodiCom() const;
        //Pre: --;
        //Post: retorna el a_codiComarca;
        int getCodi() const;
        //Pre: --;
        //Post: retorna el a_codi;
        string getNom() const;
        //Pre: --;
        //Post: retorna el a_nom;
        int getPoblacio() const;
        //Pre: --;
        //Post: retorna la poblacio;
        double getExtensio() const;
        //Pre: --;
        //Post: retorna la extensio;

    private:
        int a_codiComarca;
        int a_codi;
        string a_nom;
        int a_poblacio;
        double a_extensio;
        set<EMD> s_EMD;
};

#endif // MUNICIPI_H
