#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo konstruktori"<<endl;
}

double Kerrostalo::laskeKulutus()
{
    return eka.laskeKulutus()+toka.laskeKulutus()+kolmas.laskeKulutus();
}
