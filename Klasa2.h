
/* Ruch bohatera po planszy */

enum
{
    SCIANA,
    PODLOGA,
    SKRZYNIA,
    BOHATER
};

#define SZER 20
#define WYS  16

struct Plansza
{
    int typ[ WYS * SZER ];
};

struct Bohater
{
    int przes; /* Przesuniêcie wzglêdem kafla 16-0, 0: stoi */
    int kier; /* Bie¿¹cy kierunek ruchu */
    int stan; /* ¯¹dany kierunek ruchu */

    int poz;

    struct Plansza *p;
};

void przesun( struct Bohater *b, int stan ); /* Wyœlij zmianê stanu joysticka */

void animuj( struct Bohater *b ); /* Animuj bohatera */

int idz( struct Bohater *b, int kier );

int popchnij( struct Bohater *b, int kier );

void przejdz( struct Plansza *p, int poz, int kier );
