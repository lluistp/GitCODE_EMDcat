// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include "EMD.h"

EMD::EMD()
{
    a_codiMunicipi = 0;
    a_codi = "0";
    a_nom = "desconeguda";
}

EMD::EMD(int codiMun, string codi, string nom)
{
    a_codiMunicipi = codiMun;
    a_codi = codi;
    a_nom = nom;
}

int EMD::getCodiMun() const
{
    return a_codiMunicipi;
}

string EMD::getCodi() const
{
    return a_codi;
}

string EMD::getNom() const
{
    return a_nom;
}

bool EMD::operator<(EMD m) const
{
    return this->a_codi < m.a_codi;
}

ostream& operator<<(ostream &o, EMD m)
{
    o << "Codi: " << m.a_codi << " - Nom: " << m.a_nom;
    return o;
}
