#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Kerros *kolmas;
    Kerros *toka;
    Katutaso *eka;
};

#endif // KERROSTALO_H
