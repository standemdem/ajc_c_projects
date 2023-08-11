#include "struct.h"

Animal_S CreateAnimal(char *spieces,char *name, bool gender, int id, int pattes, int age,\
                         bool is_alive, bool is_vaccinated, bool kill_or_not)
{
    Animal_S animal;
    animal.animal_type = spieces;
    animal.animal_name = name;
    animal.id = id;
    animal.pattes = pattes;
    animal.age = age;
    animal.gender = gender;
    animal.is_alive = is_alive;
    animal.is_vaccinated = is_vaccinated;
    animal.should_be_drowned=kill_or_not;

    return animal;
}

ChessPiece_S CreateChessPiece(char *name, int x, int y, char color, bool is_taken)
{
    ChessPiece_S chesspiece;
    chesspiece.name = name;
    chesspiece.x = x;
    chesspiece.y = y;
    chesspiece.is_taken = is_taken;

    return chesspiece;
}