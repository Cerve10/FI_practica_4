#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main(){
char arxivo[999999999]
char nombre_nuevo[9999999999]
int fd,desc;
printf("Introdueix el nom de l'arxiu: ");
scanf("%s",arxivo);
printf("Introdueix el nou nom de l'arxiu: ");
scanf("%s",nombre_nuevo);
if ((fd=open(arxivo,O_RDWR)) == -1){
printf("Hi ha hagut un error a l'hora d'obrir l'arxiu \n");
exit(1);
}
else {
desc = open(nombre_nuevo, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU );
if (desc == -1){
printf("Error creant el segon arxiu \n");
exit(1);
}
else{
char buf[9999999999];
ssize_t read(fd, buf, 9999999999);
write(desc, buf, 9999999999);
unlink(arxivo);
}
close(fd);
close(desc);
}
}
