#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo konstruktori"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus()
{

    return eka.laskeKulutus(4)+toka.laskeKulutus(8)+kolmas.laskeKulutus(8);
}
