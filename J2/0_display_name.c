# include <stdio.h>
// exo1
void DisplayName()
{
    char myname[10];
    myname[0]='S';
    myname[1]='t';
    myname[2]='a';
    myname[3]='n';
    myname[4]='i';
    myname[5]='s';
    myname[6]='l';
    myname[7]='a';
    myname[8]='s';
    myname[9]='\0';
    for (int index = 0; myname[index]!= '\0'; index++)
    {
        printf("%c", myname[index]);
    }
    printf("\n");
}

int main()
{
    DisplayName();
    return 0;
}