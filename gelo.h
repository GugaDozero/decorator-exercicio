#ifndef GELO_H
#define GELO_H

#include "coqueteldecorator.h"

class Gelo : public CoquetelDecorator
{
public:
    Gelo(Coquetel *coquetel) : CoquetelDecorator(coquetel)
    {
        m_nome = "Gelo";
        m_preco = 2;
    }
};

#endif // GELO_H
