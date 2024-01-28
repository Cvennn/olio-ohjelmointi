#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef :protected Chef
{
public:
    ItalianChef(string);
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
