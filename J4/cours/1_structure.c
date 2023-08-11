#include <stdio.h>

struct Fou
{
    int x;
    int y;
    char couleur;
};

// autre methode 
typedef struct
{
    int x;
    int y;
    char couleur;
}tower;


int structur()
{
    struct Fou f1;
    f1.x = 1;
    f1.y = 2;
    f1.couleur = 'B';

    printf("%d\n", f1.x);
    printf("%d\n", f1.y);
    printf("%c\n", f1.couleur);

    tower t1;
    t1.x = 2;
    t1.y = 3;
    t1.couleur = 'W';

    printf("%d\n", t1.x);
    printf("%d\n", t1.y);
    printf("%c\n", t1.couleur);
    
    return 0;
}
