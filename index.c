//standaard lib geimporteerd
#include <stdlib.h>
#include "./assest/galgje.c"
#include <string.h>


//main functie
int main(int argc, char **argv){
    //Kansen
    int kansen = 5;
    //Weet als het in loop zit :)
    int af = 0;
    //Geheimen woord gemaakt opgeslagen in een char 
    char geheimen_woord[] = "mensenhoi";
    //input_van_gebruiker met buffer van 5000
    char input_van_gebruiker[5000];
    //Begroeting gemaakt
    printf("Welkom bij galgje......... ALPHA versie \n");
    //loopt als af 0 is
    while (af == 0) {
        //Leest input van gebruiker en input word daarna opgeslagen in variablen input van gebruiker
        scanf("%s",input_van_gebruiker);
        //Lengte van geheimen woord opgeslagen in int
        int lengte_van_strint = strlen(geheimen_woord);
        //Als woord in een keer geraden is
        if (!strcmp(input_van_gebruiker,geheimen_woord)) {
            printf("Goed zo je hebt het woord geraden... \n");
            break;
        } else {
            printf("Jammer : ( probeer nog eens \n ");
            kansen -= 1;
            printf("%d",kansen);
        }
        //Print aantal streepjes van woord
        for (int i = 0;i < lengte_van_strint;i++) {
            printf("- ");
        }
    }
    return 0;
}
