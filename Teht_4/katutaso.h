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
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
