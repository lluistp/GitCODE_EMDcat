// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3


#include <iostream>
#include "Pais.h"

using namespace std;

void entrarComarques(Pais& cat)
{
    //FUNCIO per tal de llegir les dades de comarques;
    //PRE: dades segons la classe Comarca. Sequencia acabada en 0;
    //POST: afegeix cada comarca llegida;
    int codi;
    string nom;
    cin >> codi;
    while (codi != 0){
        cin.ignore(10,'\n');
        getline(cin,nom);
        Comarca p(codi, nom);
        cat.afegirComarca(p);
        cin >> codi;
    }
}

void entrarMunicipis(Pais& cat)
{
    //FUNCIO per tal de llegir les dades de municipis;
    //PRE: dades segons la classe Municipi. Sequencia acabada en 0;
    //POST: afegeix cada municipi llegit i actualitza la Comarca pertinent;
    int codiCom, codiMun, poblacio;
    string nomMun;
    double extensio;
    cin >> codiCom;
    while (codiCom != 0){
        cin >> codiMun;
        cin.ignore(10,'\n');
        getline(cin,nomMun);
        cin >> poblacio;
        cin >> extensio;
        Municipi m(codiCom,codiMun,nomMun,poblacio,extensio);
        cat.afegirMunicipi(m);
        cin >> codiCom;
    }
}

void entrarEMD(Pais& cat)
{
    //FUNCIO per tal de llegir les dades de EMDs;
    //PRE: dades segons la classe EMD. Sequencia acabada en 0;
    //POST: afegeix cada EMD llegit al municipi corresponent;
    int codiMun;
    string codiEMD, nom;
    cin >> codiMun;
    while (codiMun != 0){
        cin >> codiEMD;
        cin.ignore(10,'\n');
        getline(cin,nom);
        EMD e(codiMun,codiEMD, nom);
        cat.afegirEMD(e);
        cin >> codiMun;
    }
}

void buscarInfoMunicipis(Pais& cat)
{
    //FUNCIO per amb la que es busca un municipi i es mostra la informació
    //PRE: sequencia acabada amb FI;
    //POST: mostra tota la informacio del municipi llegit d'entrada;
    string nomMunicipi;
    cin.ignore(100,'\n');
    getline(cin,nomMunicipi);
    while(nomMunicipi != "FI"){
        cat.mostrarInfoMunicipi(nomMunicipi);
        getline(cin,nomMunicipi);
    }
}

/*ALGORISME que permet crear un Pais i afegir-hi Comarques, Municipis i EMDs.
INPUT: entrada de comarques amb 2 atributs i segons les condicions de la classe Comarca. S'atura la seqüencia al entrar un 0. Entrada de municipis amb 5 atributs i segons les condicions de la classe Municipi. S'atura la seqüencia al entrar un 0.Entrada de EMDs amb 3 atributs i segons les condicions de la classe EMD. S'atura la seqüencia al entrar un 0; Si no s'entren comarques no es poden entrar municpis. Si no s'entren municipis no es poden mostrar les dades;
OUTPUT: cout del pais segons la seva postcondició al acabar la seqüencia. Cout de les caracteristiques dels municipis entrats.*/
int main()
{
    Pais cat;

    entrarComarques(cat);
    if (cat.paisSenseCom()){
        cout << "No has introduit comarques." << endl;
    }
    else{
        entrarMunicipis(cat);
        if (cat.paisSenseMun()){
            cout << "No has introduit municipis o aquests son erronis." << endl;
        }
        else{
            entrarEMD(cat);
            cat.mostrarPais();
            buscarInfoMunicipis(cat);
        }
    }
    return 0;
}


