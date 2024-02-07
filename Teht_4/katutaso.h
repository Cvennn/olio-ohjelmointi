#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

// Katutaso on aliluokka Kerros luokalle
// perii Kerros luokan
class Katutaso : public Kerros
{
public:

    Katutaso();
    ~Katutaso();
    void maaritaAsunnot();
    double laskeKulutus();

private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
