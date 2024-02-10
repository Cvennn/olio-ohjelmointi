#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo konstruktori"<<endl;
    kolmas = new Kerros();
    toka = new Kerros();
    eka = new Katutaso();
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double h)
{

    return eka->laskeKulutus(h)+toka->laskeKulutus(h)+kolmas->laskeKulutus(h);
}
