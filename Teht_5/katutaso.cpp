#include "katutaso.h"
#include <iostream>

using namespace std;



Katutaso::Katutaso()
{
    cout<<"Katutaso konstruktori"<<endl;
    as1 = new Asunto();
    as2 = new Asunto();
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    //määrritys kahdelle asunnolle
    cout<<"Maaritetaan 2kpl asuntoja Katutaso"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Katutaso::laskeKulutus(double h)
{

    return as1->laskeKulutus(h)+as2->laskeKulutus(h);
}


