#include "struct.h"
#include "func.h"
int main()
{
    Animal_S simba = CreateAnimal("cat","Vilain Matou",1,1234,2,23,0,1,0);
    printf("%s\n",simba.animal_name);
    ChessPiece_S tower = CreateChessPiece("Tower", 2, 3, 'W', false);
    printf("%s\n", tower.name);

    return 0;
}

0