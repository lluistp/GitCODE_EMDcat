// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#ifndef PAIS_H
#define PAIS_H
#include "Comarca.h"
#include "Municipi.h"
#include <iostream>
#include <map>

using namespace std;

/*CLASSE on guardar dins un maps tant les comarques com els municipis introduits*/

class Pais
{
    public:
        //CONSTRUCTOR
        Pais();
        //Pre: --;

        //MODIFICADOR:
        void afegirComarca( const Comarca &c);
        //Pre: Comarca c segons les condicions de la classe Comarca.
        //Post: afegeix les Comarques entrades un map ordenat per codi. En cas de repeticions, s'ignoren.
        void afegirMunicipi( const Municipi &m);
        //Pre: Municipi m segons les condicions de la classe Municipi.
        //Post: afegeix els municipis entrats al map ordenat per codi. En cas de repeticions, s'ignoren.
        void afegirEMD( const EMD &e);
        //Pre: e segons clase EMD;
        //Post: afegeix EMD al municipi corresponent. En cas de repeticions, s'ignoren;

        //CONSULTOR
        bool paisSenseCom() const;
        //Pre: --;
        //Post: cert si map de comarques buit;
        bool paisSenseMun() const;
        //Pre: --;
        //Post: cert si map de municipis buit;
        void mostrarPais() const;
        //Pre: --;
        //Post: mostra les dades del Pais en extensio, poblacio i num comarques.
        void mostrarInfoMunicipi(string nomMun) const;
        //Pre: --;
        //Post: mostra els municipis amb totes les dades disponibles;

    private:
        map <int,Comarca> m_Comarca;
        map <int,Municipi> m_Municipi;
};

#endif // PAIS_H
