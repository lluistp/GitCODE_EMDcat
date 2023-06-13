// LLUIS TORRES PROCAS
// u1940589
// SESSIO 3

#include "Pais.h"

Pais::Pais()
{
    //
}

void Pais::afegirComarca(const Comarca &c)
{
    int codi = c.getCodi();
    if(m_Comarca.find(codi) == m_Comarca.end()){
       m_Comarca[codi] = c;
    }
}

void Pais::afegirMunicipi(const Municipi &m)
{
    int codiMun = m.getCodi();
    map <int, Comarca>::iterator i = m_Comarca.find(m.getCodiCom());
    if(m_Municipi.find(codiMun) == m_Municipi.end()){
        if(i != m_Comarca.end()){
            i->second.afegirMunicipi(codiMun);
            m_Municipi[codiMun] = m;
        }
    }
}

void Pais::afegirEMD(const EMD &e)
{
    map <int, Municipi>::iterator i = m_Municipi.find(e.getCodiMun());
    if(i != m_Municipi.end()){
       i->second.afegirEMD(e);
    }
}

bool Pais::paisSenseCom() const
{
    return m_Comarca.empty();
}

bool Pais::paisSenseMun() const
{
    return m_Municipi.empty();
}

void Pais::mostrarPais() const
{
    if (!m_Comarca.empty()){
        int poblacio = 0;
        double extensio = 0.0;
        map <int, Municipi>::const_iterator i;
        for (i=m_Municipi.begin(); i != m_Municipi.end(); i++){
            poblacio += i->second.getPoblacio();
            extensio += i->second.getExtensio();
        }
        cout << "PAIS:" << endl;
        cout << "======================================================================================================" << endl;
        cout << "Num Comarques: " << m_Comarca.size() << ", Extensio Total: " << extensio << " km2, Poblacio Total: " << poblacio << " hab." << endl;
        cout << endl;
    }
    else {
        cout << "Cap comarca trobada." << endl;
        cout << endl;
    }
}

void Pais::mostrarInfoMunicipi(string nomMun) const
{
    string nomCom;
    map <int, Municipi>::const_iterator i = m_Municipi.begin();
    while (i != m_Municipi.end() and i->second.getNom() != nomMun){
        i++;
    }
    if(i != m_Municipi.end()){
        map <int, Comarca>::const_iterator j = m_Comarca.find(i->second.getCodiCom());
        cout << "Pel municipi " << nomMun << ":" << endl;
        cout << "Codi: " << i->second.getCodi() << " - Comarca: " << j->second.getNom() << " - Extensio: " << i->second.getExtensio() << "km2 - Poblacio: " << i->second.getPoblacio() << " hab." << endl;
        cout << "EMDs del municipi:" << endl;
        i->second.mostraEMDs();
        cout << endl;
    }
    else cout << "El municipi introduit no existeix." << endl;
}
