#ifndef LEITECONDENSADO_H
#define LEITECONDENSADO_H

#include "coqueteldecorator.h"

class LeiteCondensado : public CoquetelDecorator
{
public:
    LeiteCondensado(Coquetel *coquetel) : CoquetelDecorator(coquetel)
    {
        m_nome = "Leite condensado";
        m_preco = 4;
    }

};

#endif // LEITECONDENSADO_H
