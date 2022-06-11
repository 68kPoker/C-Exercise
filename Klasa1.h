
#include <math.h>

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

class TrojkatRownoboczny : public Figura
{
public:
    int a;
    int obwod()
    {
        return 3 * a;
    }
    int pole()
    {
        return ( int )( a * a ) * sqrt( 3.0 ) / 4.0;
    }
    TrojkatRownoboczny( int a ) : a( a ) { }
};