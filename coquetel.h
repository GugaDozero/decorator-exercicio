#ifndef COQUETEL_H
#define COQUETEL_H

#include <string>

using std::string;

class Coquetel
{
public:
    virtual ~Coquetel() {}

    virtual string nome()
    {
        return m_nome;
    }

    virtual int preco()
    {
        return m_preco;
    }

protected:
    string m_nome;
    int m_preco;
};

#endif // COQUETEL_H
