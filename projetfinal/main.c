#include "lib.h"
#include "struct.h"
#include "func.h"

void create_bat(Hotel_de_ville hdv, int numero_batiment)
{
    switch (numero_batiment)
    {
    case 1:
        if(hdv.or>=50)
        {
            hdv.total_scierie++;
            hdv.or-=50;

        }
        break;
    
    default:
        break;
    }
}

int main()
{
    Hotel_de_ville
    return 0;
}