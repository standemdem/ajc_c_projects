#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>
#include "struct.h"

Animal_S CreateAnimal(char *spieces,char *name, bool gender, int id, int pattes, int age,\
                         bool is_alive, bool is_vaccinated, bool kill_or_not);

ChessPiece_S CreateChessPiece(char *name, int x, int y, char color, bool is_taken);

#endif