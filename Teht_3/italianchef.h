#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef :protected Chef
{
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta(int, int);
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
