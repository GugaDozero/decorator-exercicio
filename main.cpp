#include <iostream>
#include <string>

#include "gelo.h"
#include "vodka.h"
#include "leitecondensado.h"

using namespace std;

int main()
{
    Coquetel *meuCoquetel = new Gelo( new LeiteCondensado( new Vodka ) );
        cout << meuCoquetel->nome() << " = "
            << meuCoquetel->preco() << endl;

    delete meuCoquetel;

    return 0;
}
