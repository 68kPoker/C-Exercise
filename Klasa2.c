
#include "Klasa2.h"

void przejdz( struct Plansza *p, int poz, int kier )
{
    p->typ[ poz + kier ] = p->typ[ poz ];
    p->typ[ poz ] = PODLOGA;
}

int popchnij( struct Bohater *b, int kier )
{
    int typ = b->p->typ[ b->poz + kier + kier ];

    if( typ == PODLOGA )
    {
        przejdz( b->p, b->poz + kier, kier );
        return( 1 );
    }
    return( 0 );
}

int idz( struct Bohater *b, int kier )
{
    /* Jeœli mo¿e iœæ, ustaw b->przes na 16, a b->kier na stan. */
    int typ = b->p->typ[ b->poz + kier ];

    if( typ == PODLOGA || ( typ == SKRZYNIA && popchnij( b, kier ) ) )
    {
        przejdz( b->p, b->poz, kier );
        b->poz += kier;

        return( 1 );
    }
    return( 0 );
}

/* Wyœlij zmianê stanu joysticka */
void przesun( struct Bohater *b, int stan ) 
{
    b->stan = stan;

    if( b->przes == 0 )
    {
        /* Stoi, sprawdŸ docelowe pole. */

        idz( b, stan );        
    }
}

/* Animuj bohatera */
void animuj( struct Bohater *b )
{
    if( b->przes > 0 )
    {   
        /* W trackie ruchu */
        b->przes--;
    }
}
