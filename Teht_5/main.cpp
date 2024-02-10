#include "kerrostalo.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Kerrostalo> talo(new Kerrostalo());

    //Kerrostalo *talo= new Kerrostalo();
    cout<<"Kerrostalon kulutus, hinta = 1, "<<talo->laskeKulutus(1)<<endl;

    //delete talo;
    return 0;
}

//konstruktorit luokissa kerrostalo, katutaso ja kerros luo oliot dynaamiseen muistiin
