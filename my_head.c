#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
        char nom_arxiu[100];
        int nombre_linies;
        printf("Introdueix el nom de l'arxiu que vols llegir: ");
        scanf("%s", nom_arxiu);
        printf("Introdueix el nombre de línies a mostrar: ");
        scanf("%d", &nombre_linies);

        int fd = open(nom_arxiu, O_RDONLY);
        int count=1;
        char buf;
        if (fd < 0){
                printf("Error: no es pot obrir l'arxiu %s. Comproba que estigui ben escrit.\n", nom_arxiu);
                exit(0)
                }

        if (nombre_linies <= 0){
                printf("Error: el nombre de línies del fitxer és menor al demanat o zero\n");
                exit(0)
                }
        else {
                
                
                
        if (read(fd,&buf,count) < 0)
                printf("Error: el nombre de línies del fitxer és menor al demanat o zero\n");
        else printf("%c",buf);}
