// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#ifndef EMD_H
#define EMD_H
#include<fstream>
#include <iostream>

using namespace std;

class EMD
{
    public:
        //CONSTRUCTOR:
        EMD();
        //Pre: --;
        //Post: crea EMD amb codiMunicipi = codi = 0, nom igual a "desconegut";
        EMD(int codiMun, string codi, string nom);
        //Pre: --;
        //Post: crea EMD amb a_codiMunicipi = codiMun, a_codi = codi, a_nom = nom;


        //CONSULTORS:
        int getCodiMun() const;
        //Pre: --;
        //Post: retorna el a_codiMunicipi;
        string getCodi() const;
        //Pre: --;
        //Post: retorna el a_codi;
        string getNom() const;
        //Pre: --;
        //Post: retorna el a_codi;
        bool operator<(EMD m) const;
        //Pre: --;
        //Post: retorna cert a this->a_codi < m.a_codi;

        friend ostream& operator<<(ostream &o, EMD m);

    private:
        int a_codiMunicipi;
        string a_codi;
        string a_nom;

};

#endif // EMD_H
