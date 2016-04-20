#ifndef COQUETELDECORATOR_H
#define COQUETELDECORATOR_H

#include "coquetel.h"

class CoquetelDecorator : public Coquetel
{
public:
    CoquetelDecorator(Coquetel *coquetel) : m_coquetel(coquetel) {}
    ~CoquetelDecorator() { delete m_coquetel; }

    virtual string nome()
    {
        return m_coquetel->nome() + " + " + m_nome;
    }

    virtual int preco()
    {
        return m_coquetel->preco() + m_preco;
    }

private:
    Coquetel *m_coquetel;
};

#endif // COQUETELDECORATOR_H
