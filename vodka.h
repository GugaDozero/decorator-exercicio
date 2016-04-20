#ifndef VODKA_H
#define VODKA_H

#include "coquetel.h"

class Vodka : public Coquetel
{
public:
    Vodka()
    {
        m_nome = "vodka";
        m_preco = 1;
    }
};

#endif // VODKA_H
