#include "struct.h"
#include "func.h"

int main(int argc, char const *argv[])
{
    // Dans le main, vous allez:

    // Créer une classe.
    // Ajouter quelques élèves à cette classe.
    // Afficher les informations de chaque élève.
    // Afficher la moyenne générale de la classe.

    ClassRoom classA;
    classA.name = "A";
    classA.listOfStudents = malloc(sizeof(Student)*30);
    classA.listOfStudents[0] = addStudent("de Montmarin", "stanislas", 18);
    classA.listOfStudents[1] = addStudent("Deguillaume", "Flore", 20);
    classA.listOfStudents[2] = addStudent("de Montmarin", "Benoit", 15);
    printf("%s \n", classA.listOfStudents[0].first_name);
    displayStudent(classA);
    
    free(classA.listOfStudents);
    return 0;
}
