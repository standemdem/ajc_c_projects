#ifndef _H
#define _H
#include "struct.h"

    Student addStudent(char *last_name, char *first_name, float mean)
    {
        Student student;
        student.last_name=last_name;
        student.first_name=first_name;
        student.mean=mean;

        return student;
    }

    void displayStudent(ClassRoom class)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%s %s of class %s has a mean of %.2f \n",class.listOfStudents[i].first_name,
                    class.listOfStudents[i].last_name,
                    class.name,
                    class.listOfStudents[i].mean);
        }
        
    }

    void displayClass(){

    }

    void classMean(){

    }
#endif