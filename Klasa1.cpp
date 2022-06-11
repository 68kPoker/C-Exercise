#include <iostream>
#include "Klasa1.h"

int main()
{
    Kwadrat k( 3 );
    Prostokat p( 1, 5 );
    Kwadrat t[ 3 ] = { 4, 5, 6 };
    Prostokat x = t[ 2 ];
    x.b -= 3;
    Figura *f = &x;

    std::cout << x.b << ", " << f->pole() << ", " << f->obwod() << std::endl;

    return 0;
}
