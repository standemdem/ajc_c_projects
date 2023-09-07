#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <stdlib.h>

    typedef struct 
    {
        int day;
        int month;
        int year;
    }DateOfBirth;
    
    typedef struct 
    {
        char *last_name;
        char *first_name;
        DateOfBirth date;
        float mean;
    }Student;
    
    typedef struct 
    {
        char *name;
        Student *listOfStudents;
        int size;
    }ClassRoom;
    

#endif