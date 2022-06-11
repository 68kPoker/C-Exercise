
#include <iostream>

using namespace std;

class Prostokat;
class Figura
{
public:
    virtual int pole() = 0;
    virtual int obwod() = 0;
};

class Kwadrat : public Figura
{
public:
    int a;
    int pole()
    {
        return a * a;
    }
    int obwod()
    {
        return 4 * a;
    }
    Kwadrat( int a ) : a( a ) { }  
};

class Prostokat : public Figura
{
public:
    int a, b;
    int pole()
    {
        return a * b;
    }
    int obwod()
    {
        return 2 * a + 2 * b;
    }
    Prostokat( int a, int b ) : a( a ), b( b ) { }
    Prostokat( const Kwadrat &k ) : a( k.a ), b( k.a ) { }
};

//Prostokat::Prostokat( Kwadrat &k ) : a( k.a ), b( k.a ) {}
