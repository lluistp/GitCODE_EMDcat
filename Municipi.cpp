// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include "Municipi.h"

Municipi::Municipi()
{
    a_codiComarca = 0;
    a_codi = 0;
    a_nom = "desconeguda";
    a_poblacio = 0;
    a_extensio = 0.0;
}

Municipi::Municipi(int codiCom, int codi, string nom, int poblacio, double extensio)
{
    a_codiComarca = codiCom;
    a_codi = codi;
    a_nom = nom;
    a_poblacio = poblacio;
    a_extensio = extensio;
}

void Municipi::afegirEMD(EMD emdNova)
{
    if(s_EMD.find(emdNova) == s_EMD.end()){
        s_EMD.insert(emdNova);
    }
}

void Municipi::mostraEMDs() const
{
    set <EMD>::const_iterator i;
    if (!s_EMD.empty()){
        for (i = s_EMD.begin(); i != s_EMD.end() ; i++){
            cout << *i << endl;
        }
    }
    else cout << "Aquest municipi no te EMDs." << endl;
}

int Municipi::getCodiCom() const
{
    return a_codiComarca;
}

int Municipi::getCodi() const
{
    return a_codi;
}

string Municipi::getNom() const
{
    return a_nom;
}

int Municipi::getPoblacio() const
{
    return a_poblacio;
}

double Municipi::getExtensio() const
{
    return a_extensio;
}


