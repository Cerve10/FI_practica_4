#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
        char nom_arxiu[100];
        int nombre_linies;
        printf("Introdueix el nom de l'arxiu que vols llegir: ");
        scanf("%s", nom_arxiu);
        printf("Introdueix el nombre de línies a mostrar: ");
        scanf("%d", &nombre_linies);

        int fd = open(nom_arxiu, O_RDONLY);
        int count=0;
        char buf[1000000000000000], text[1000000000000000];
        if (fd < 0){
                printf("Error: no es pot obrir l'arxiu %s. Comproba que estigui ben escrit.\n", nom_arxiu);
                exit(1)
                }

        if (nombre_linies <= 0){
                printf("Error: el nombre de línies del fitxer és menor al demanat o zero\n");
                exit(1)
                }
                
        if (fd!= -1){
                while (nombre_linies > count){
                        read(fd, buf, 100000000);
                        text[i] = buf[i];
                        if (buf[i] == '\n') count++;
                        i++;
                }
                printf("%s", text);
        }
        close(fd);
}
