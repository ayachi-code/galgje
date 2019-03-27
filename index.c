//standaard lib geimporteerd
#include <stdlib.h>
#include "./assest/galgje.c"
#include <string.h>

int raden(char woord[100]) {
    char input[5000];
    printf("Type het woord: ");
    scanf("%s",input);
    if (!strcmp(input,woord)) {
        printf("Je hebt het woord geraden ! \n");
        return 0;
    } else {
        printf("He he je hebt het woord niet geraden ");
        return 1;
    }
}
int eentje_voor_eentje(char woord[200]) {
    int lengte_geheim = strlen(woord);
    for (int i = 0; i < lengte_geheim;i++) {
            char letter = woord[i];
            printf("%c \n",letter);
    }
    return 0;
}
//main functie
int main(int argc, char **argv){
    //Kansen
    int kansen = 5;
    //Weet als het in loop zit :)
    int af = 0;
    //Geheimen woord gemaakt opgeslagen in een char 
    char geheimen_woord[] = "hallo";
    eentje_voor_eentje(geheimen_woord);
    //input_van_gebruiker met buffer van 5000
    char input_van_gebruiker[5000];
    //Begroeting gemaakt
    printf("Welkom bij galgje......... ALPHA versie \n");
    //Zegt dat je een letter moet typen
    printf("Type een letter: ");
    //loopt als af 0 is
    while (af == 0) {
        //Leest input van gebruiker en input word daarna opgeslagen in variablen input van gebruiker
        scanf("%s",input_van_gebruiker);
        //Lengte van geheimen woord opgeslagen in int
        int lengte_van_strint = strlen(geheimen_woord);
        //legte van de input van de gebruiker
        int lengte_van_input = strlen(input_van_gebruiker);
        if (!strcmp(input_van_gebruiker,"?")) {
            int test = raden(geheimen_woord);
            if (test == 0) {
                break;
            } else if(test == 1) {
                kansen -= 1;
                printf("%d",kansen);
            }
        }
        if (kansen <= 0) {
            printf("sorry je bent af \n");
            break;
        }  
        //Print aantal streepjes van woord
        for (int i = 0;i < lengte_van_strint;i++) {
            printf("- ");
        }   
    }
    return 0;
}
