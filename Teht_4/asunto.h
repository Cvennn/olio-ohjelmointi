#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto
{
public:
    Asunto();
    ~Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int, int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H

/* Asunto olio
 * Sisältää muuttujat asukkaiden määrälle ja neliö määrälle
 * maarita funktio määrittää asunnolle neliö ja asukasmäärän
 * laskeKulutus funktiolla lasketaan yhden asunnon kulutus
*/
