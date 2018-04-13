//standaard lib geimporteerd
#include <stdlib.h>
#include "./assest/galgje.c"


//main functie
int main(int argc, char **argv){
    //Weet als het in loop zit :)
    int af = 0;
    //Geheimen woord gemaakt opgeslagen in een char 
    char geheimen_woord[] = "mensenhoi";
    //input_van_gebruiker met buffer van 5000
    char input_van_gebruiker[5000];
    //Begroeting gemaakt
    printf("Welkom bij galgje......... ALPHA versie \n");
    //Leest input van gebruiker en input word daarna opgeslagen in variablen input van gebruiker
    scanf("%s",input_van_gebruiker);
    return 0;
}