#ifndef STRUCT_H
#define STRUCT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct
{
    char *animal_type;
    char *animal_name;
    int id;
    int pattes;
    int age;
    bool is_alive;
    bool is_vaccinated;
    bool should_be_drowned;
    char gender;
}Animal_S;

typedef struct
{
    char *name;
    int x;
    int y;
    char color;
    bool is_taken;
}ChessPiece_S;



#endif