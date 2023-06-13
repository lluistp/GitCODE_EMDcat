// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include "Comarca.h"

Comarca::Comarca()
{
    a_codi = 0;
    a_nom = "desconeguda";
}

Comarca::Comarca(const int &codi, const string nom)
{
    a_codi = codi;
    a_nom = nom;
}

void Comarca::afegirMunicipi(int codiMun)
{
    if(s_codiMun.find(codiMun) == s_codiMun.end()){
        s_codiMun.insert(codiMun);
    }
}

int Comarca::getCodi() const
{
    return a_codi;
}

string Comarca::getNom() const
{
    return a_nom;
}


